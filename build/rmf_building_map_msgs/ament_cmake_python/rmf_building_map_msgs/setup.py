from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_building_map_msgs',
    version='1.2.1',
    packages=find_packages(
        include=('rmf_building_map_msgs', 'rmf_building_map_msgs.*')),
)
