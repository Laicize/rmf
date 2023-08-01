from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_fleet_adapter_python',
    version='2.1.6',
    packages=find_packages(
        include=('rmf_fleet_adapter_python', 'rmf_fleet_adapter_python.*')),
)
