from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_visualization_msgs',
    version='1.2.1',
    packages=find_packages(
        include=('rmf_visualization_msgs', 'rmf_visualization_msgs.*')),
)
