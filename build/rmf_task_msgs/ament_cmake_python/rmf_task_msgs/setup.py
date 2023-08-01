from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_task_msgs',
    version='3.0.3',
    packages=find_packages(
        include=('rmf_task_msgs', 'rmf_task_msgs.*')),
)
