from setuptools import find_packages, setup

package_name = 'contact_arm_cleaning_server'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='leonicus',
    maintainer_email='divright@singnet.com.sg',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'server = contact_arm_cleaning_server.server:main',
            'client = contact_arm_cleaning_server.client:main',   
        ],
    },
)
