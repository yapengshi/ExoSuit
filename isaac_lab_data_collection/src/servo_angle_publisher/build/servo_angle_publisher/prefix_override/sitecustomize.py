import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/Synthetic_data_collection/isaac_lab_data_collection/src/servo_angle_publisher/install/servo_angle_publisher'
