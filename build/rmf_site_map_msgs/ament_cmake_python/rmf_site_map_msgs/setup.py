from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_site_map_msgs',
    version='3.0.3',
    packages=find_packages(
        include=('rmf_site_map_msgs', 'rmf_site_map_msgs.*')),
)
