# Why Anaconda?
The Python programming language has a large ecosystem of third party libraries, which is one of the reasons Python is so powerful.  With that power, comes complexity however. There are many solutions available for managing dependencies and environments - and Anaconda's `conda` application is one of the more popular within Data Science.

Anoconda manages not only Python dependencies, but Python itself.  When using Anaconda, **you should not install Python 3 directly**, it will be installed while working with Anaconda.

# Installation
Please follow the instructions on the [Anaconda website](https://docs.anaconda.com/anaconda/install/) for your platform.  Be sure that you are installing the (free) Individual Edition. Generally the installation process is fairly easy - see below for some important notes on Windows usage however.  

## Windows
Download the setup file and run.  
- Choose "Just me" - however you can also install it for everyone on the machine if you wish.
- Choose the default location, and default choices.  In particular, you should check "Register Anaconda3 as my default Python3", and leave the "Add to Path" option unchecked.

**Important**:  When using Python on Windows, you will want to open Anaconda Prompt rather than the standard Windows Command Prompt.  Anaconda Prompt can be found in your Start Menu.  It is just a configured environment that works just like your regular Command Prompt.

Note that on Windows, you might also find the Anaconda Navigator application helpful.  

# Using `conda`
`conda` is primarily a package (dependency) manager.  `conda` superceeds the traditional `pip` Python package manager - we'll use `conda` primarily.

Another feature of `conda` is that it can help you create isolated virtual environments, which allow you to install dependencies for each of your projects separately, rather than globally on your system.  

## Creating an environment
You create an environment using the following command:
```
conda create -n new_environment_name python=3.7
```

You can execute this command from anywhere in the filesystem, it is not associated with a directory.  Think of it as a set of libraries and settings that you can activate/deactivate.

## Activating an environment
Before running Python code or installing dependencies, you must activate the environment.

You can see which environments are on your system by using the following command:

```
conda env list
```
Activating an environment requires you to enter the following command:

```
conda activate new_environment_name
```

## Installing Python Packages
When an environment is active, you can see which packages / dependencies are already installed by typing the following:

```
conda list
```

To install another package - lets say `pandas`, you can using the install command:

```
conda install pandas
```

## Deactivating Environments
```
conda deactivate
```

## Using `conda` for this class
I highly recommend you take either one of these approaches:

1. Create a single environment (i.e. cmps530) and always activate that environment whenever working on this course.  We won't require different versions of packages across the semester, so its safe to use just one environment.

2. Create a single environment for every project you work on.

Option 1 is likely the most practical, however creating individual environments for each project is considered "best practice".

## Other Useful Resources
- [Anaconda tutorial video](https://www.youtube.com/watch?v=YJC6ldI3hWk) - the download procedure is out of date, but the content explaining how to use Anaconda is still mostly accurate.
- [Official Getting Started](https://docs.anaconda.com/anaconda/user-guide/getting-started/)
- [User Guide](https://conda.io/projects/conda/en/latest/user-guide/index.html)
