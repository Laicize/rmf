from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_door_msgs',
    version='3.0.3',
    packages=find_packages(
        include=('rmf_door_msgs', 'rmf_door_msgs.*')),
)
