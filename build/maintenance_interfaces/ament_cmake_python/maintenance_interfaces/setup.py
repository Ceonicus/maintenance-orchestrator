from setuptools import find_packages
from setuptools import setup

setup(
    name='maintenance_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('maintenance_interfaces', 'maintenance_interfaces.*')),
)
