from setuptools import find_packages
from setuptools import setup

setup(
    name='rmf_ingestor_msgs',
    version='3.0.3',
    packages=find_packages(
        include=('rmf_ingestor_msgs', 'rmf_ingestor_msgs.*')),
)
