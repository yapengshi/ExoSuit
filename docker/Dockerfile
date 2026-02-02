FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive
ENV TZ=UTC
ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

SHELL ["/bin/bash", "-c"]

# =========================
# Base system
# =========================
RUN apt-get update && apt-get install -y \
    locales \
    curl \
    ca-certificates \
    gnupg2 \
    lsb-release \
    sudo \
    git \
    bzip2 \
    && rm -rf /var/lib/apt/lists/*

# Locale
RUN locale-gen en_US.UTF-8 && update-locale LANG=en_US.UTF-8

# =========================
# ROS 2 repository + key
# =========================
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
    | gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg

RUN echo "deb [arch=arm64 signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] \
http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" \
> /etc/apt/sources.list.d/ros2.list

# =========================
# ROS 2 Jazzy
# =========================
RUN apt-get update && apt-get install -y \
    ros-jazzy-desktop \
    python3-colcon-common-extensions \
    python3-rosdep \
    python3-vcstool \
    python3-argcomplete \
    && rm -rf /var/lib/apt/lists/*

# rosdep
RUN rosdep init || true && rosdep update

# =========================
# Conda (Miniforge, ARM64)
# =========================
WORKDIR /tmp

RUN curl -L -o Miniforge3-Linux-aarch64.sh \
    https://github.com/conda-forge/miniforge/releases/latest/download/Miniforge3-Linux-aarch64.sh \
    && bash Miniforge3-Linux-aarch64.sh -b -p /opt/conda \
    && rm Miniforge3-Linux-aarch64.sh \
    && /opt/conda/bin/conda clean -a -y

ENV PATH=/opt/conda/bin:$PATH

RUN conda init bash

# =========================
# ROS environment
# =========================
RUN echo "source /opt/ros/jazzy/setup.bash" >> /etc/bash.bashrc

# =========================
# Workspace
# =========================
WORKDIR /root/ws
RUN mkdir -p src

CMD ["/bin/bash"]
