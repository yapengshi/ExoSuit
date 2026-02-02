import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/Synthetic_data_collection/isaac_lab_data_collection/install/servo_angle_publisher'
