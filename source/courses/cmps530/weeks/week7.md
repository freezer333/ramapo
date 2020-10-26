# Data Analysis with `pandas`
`pandas` is the premier data science library used in the Python ecosystem.  `pandas` builds on `np` to support `Series` and `Dataframe` structures, which can be used to store records of arbitrary data types.

At the core of `pandas` is the concept of *labeled rows*.  Consider a basic list - `numbers = [3, 6, 1, 2]`.  We know that each element can be referred to by the **index** - thus `numbers[1]` is 6.  If you image the list drawn vertically, each element is a *row*, and the row's *label* is it's index.

In `pandas`, each "list" is called a `Series`.  Each series has indices - however unlike lists, the indices are not implicit - they are user-supplied (or, auto-generated).  These indices can be numbers, but they can also (commonly) be strings.  

A *data frame* is simply a set of series, linked together by a shared index.  In this way, you can think of a data frame as a table, where you have a common index (row labels) and where each series forms a column.

`pandas` is far more than an elaborate way of storing tabular data however - it provides powerful functionality to perform computation on the tabular data, in a fast, vectorized method similar (and built-on) NumPy.

Over the next few weeks, and likely for the rest of your time using Python in Data Science, you will be working with `pandas`.  Our textbook is written by one of the primary authors of the tool, and contains a great deal of information.

`pandas` also has fantastic online tutorial / documentation available to you.  The following links are part of the `pandas` official [User Guide](https://pandas.pydata.org/pandas-docs/stable/user_guide/index.html).  I encourage you to read through as much of the User Guide as you can, however the sections listed below are of special importance.

- [Introduction to `pandas`](https://pandas.pydata.org/pandas-docs/stable/user_guide/dsintro.html)
- [Core Functionality](https://pandas.pydata.org/pandas-docs/stable/user_guide/basics.html)
- [Selection and Indexing](https://pandas.pydata.org/pandas-docs/stable/user_guide/indexing.html)
- [Group by: split-apply-combine](https://pandas.pydata.org/pandas-docs/stable/user_guide/groupby.html)

**IMPORTANT** - `pandas` is a large, and somewhat complex library.  For most people, it is overwelming to simply "read about it" - there are too many functions, and examples tend to be abstract.  `pandas` is simply so feature-rich that simply reading through all of it's capabilities can be ineffective, as you lack the context for why you'd use the features!

Do your best to read through the material, but I will be focusing you on critical components through projects and real-world examples.  You won't learn all of `pandas` in this class - the goal is to become familiar enough with it that as you proceed through your curriculum you can continue to learn and leverage it even more.

## Reading (Python)
- **McKinney**:  Chapter 5-6, 10

*Chapter 10 in McKinney will introduce you to the `groupby` methods, which you will find useful in this week's project.  Next week's project will utilize aggregation even more.*

## Weekly Project
In Weekly Project 5, you'll use `pandas` on a data set of game data from Major League Baseball from 1871 to present(ish).  Unlike previous projects, you are left to design your program any way you see fit - and to utilize `pandas` any way you wish - so get started on this early, and expect to spend more time thinking about *how* to solve the problems - not just thinking about python itself.

[Full Project Description](https://github.com/scottfrees/cmps530-wp5)

## In-class Agenda
This week we will focus on some very core concepts of `pandas`, like aggregation and data transformations.  We'll also explore and compare some key data formats, like CSV, Excel, pickle, hdf, and data compression.
