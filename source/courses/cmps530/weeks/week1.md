# Introduction to Python and Programming
This week is all about getting set up and used to working with the basic tools we'll be using all semester.  This includes Python and Anaconda, along with code and data versioning tools - `git` and `dvc`. 

Over the next few weeks, you may find yourself playing a lot catch up if you haven't had any experience in Python.  Alternatively, if you are entering this course with a programming background the Python-based material may seem rudimentary.  Be patient on both fronts!

[Back to topics](../topics.html)

## Python Videos
The following videos are part of my CMPS 130 course material.  For those of you who are very new to programming or Python, these may be helpful for you.  Note, they are geared towards entry level undergraduates - feel free to skim/fast-forward, or skip - these are simply provided as an additional resource to you.

- [Introduction to Computation](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module00/)
- [Introduction to Python](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module01/)
- [Strings and Input](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module02/)
- [Branching Programs](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module03/)
- [Loops](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module04/)
- [Reading and Writing Files](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module09)

## Reading (Python)
- **Guttag**:  Chapters 1-3
- **Guttag**:  Chapter 4.6 (Just files, leave all other sections for next week)
- **McKinney**:  Chapter 1

## Programming Tools
Beyond the installation of Python on your machine, there are several tools that are vital to all of our software development during the semester.  

Before you can do much, you'll need to familiarize yourself with using your system's Command Prompt or Terminal.  If you haven't used these environments before, start by reviewing the relevant tutorials below:
- [Help using the MS Windows Command Prompt](http://www.7tutorials.com/command-prompt-how-use-basic-commands)
- [Help using the MacOS Terminal](https://www.youtube.com/watch?v=-Vl4rpZVA6I)

The first is proper Python installation and **dependency** management using [Anaconda](https://www.anaconda.com/distribution/).  Anaconda's primary function is to deliver fully configured Python 3 installation, and allow you to easily keep track of and install additional libraries and modules (i.e. pandas, jupyter, numpy).  It is critical that you set up Anaconda before moving forward with any Python programming.

The second tool you must familiarize yourself with is [git](https://git-scm.com/) - a command-line program that most of the software development world uses to keep track of source code.  Git keeps track of all your revisions throughout a project's lifetime, and also make collaboration on source code much easier.  In this class, our usage will be relatively limited - but all of the code examples I provide will be distributed with `git`, and you will be asked to use it on your own projects as well.

Finally, it's not just code that needs to be tracked, versioned, and distributed - **it's data too**.  [DVC](https://dvc.org/) is "git, for data" - it integrates with `git` to make it easier to keep track of large datasets - which `git` doesn't handle as well.  I will use `dvc` a lot during the semester to distribute data to you.

**Please** use the following resources this week to properly configure your own programming environment for use during the semester.  If possible, you should bring your laptop with you to our class meetings as well - as the lab machines may not be configured the way you are used to.

If you are unable to complete the **Weekly Project** at the bottom of this page - **reach out to me ASAP**.  The project requires you to use `git` and `dvc` - so it's a perfect way to make sure you are ready to go.

### Python via Anaconda
- [Download and Install Anaconda](https://www.anaconda.com/distribution/#download-section) **Version 3.x**
- [Quick Tutorial and Other Resources](../anaconda.html)
- **McKinney Textbook**:  See Section 1.4

### Git
I will distribute all projects assignments and all example code through Github - so you'll need to install `git` and learn the basics.
- [Download and Install Git](https://git-scm.com/downloads)
     - **Windows installation**:  You can keep all the defaults during the installation.

- Tutorials
  - [Git for Beginners](https://product.hubspot.com/blog/git-and-github-tutorial-for-beginners)
  - [Introductory Video](https://www.youtube.com/watch?v=4SD6rWt9wUQ)
  - **Note, you will not need to create your own repositories - you'll just be cloning mine**.  That said, learn `git`!  It's absolutely ubiquitous in softare development!

### DVC
I will distribute **data** for all projects assignments and all example code through DVC - so you'll need to install `dvc` and learn the basics.
- [Download and Install DVC](https://dvc.org/doc/install)
    - I recommend you install DVC using the self-contained installer, rather than using Anaconda.
- [Configuring DVC for our AWS Data Repository](../dvc.html)

### Code Editor
There will be portions of this semester where we will migrate to using **Jupyter Notebooks** for most of our code editing (aka **IPyton**).  For other situation (like this week), you'll want to write your Python code in a good code editor, and run the code from your command prompt / terminal.  

The McKinney textbook has some suggestions on Python editors (pg. 11).  I typically use [Visual Studio Code](https://code.visualstudio.com/).  You are free to use any editor you wish.

## Weekly Project
This week you have a very small project, aimed at getting you used to using Anaconda, git, dvc, and using simple branches and loops.

[Project Description](https://github.com/scottfrees/cmps530-wp1)

This project is not graded, but it is a critical step in making sure you are getting up to speed - treat it seriously!

## In-class Agenda
This week's in-class meeting will largely be dedicated to introducing you to the Data Science curriculum, going over what you can expect from this class, and getting to know the requirements.  We'll also talk about setting up Python, `git`, and `dvc` and how they fit together.

Since the semester starts just one day before our first class meeting, I don't expect that you will have completed our first data project (above), but please do try to complete this on your own within the next few days.  **My main concern** is that you iron out any installation and configuration problems on your machine this week - so we are full speed next week.