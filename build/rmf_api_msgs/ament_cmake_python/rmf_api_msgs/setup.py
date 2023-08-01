from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_api_msgs',
    version='0.0.3',
    packages=find_packages(
        include=('rmf_api_msgs', 'rmf_api_msgs.*')),
)
