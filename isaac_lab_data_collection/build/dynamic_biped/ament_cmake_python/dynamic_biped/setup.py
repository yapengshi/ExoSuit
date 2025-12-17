from setuptools import find_packages
from setuptools import setup

setup(
    name='dynamic_biped',
    version='0.0.1',
    packages=find_packages(
        include=('dynamic_biped', 'dynamic_biped.*')),
)
