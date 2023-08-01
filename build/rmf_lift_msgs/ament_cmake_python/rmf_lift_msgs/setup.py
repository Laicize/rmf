from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_lift_msgs',
    version='3.0.3',
    packages=find_packages(
        include=('rmf_lift_msgs', 'rmf_lift_msgs.*')),
)
