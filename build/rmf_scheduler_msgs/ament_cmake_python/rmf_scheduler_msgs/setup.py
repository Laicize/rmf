from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_scheduler_msgs',
    version='3.0.3',
    packages=find_packages(
        include=('rmf_scheduler_msgs', 'rmf_scheduler_msgs.*')),
)
