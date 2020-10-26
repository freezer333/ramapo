# Visualization w/ `matplotlib`
Thus far we've limited our "visualization" of our data results to summary tables and specific numeric outputs.  While useful, we often need to go well beyond this in order to convey what our data is truly showing us.  This week we will begin to look at `matplotlib` - a common visualization framework for python that helps us create charts and graphs of our data.  While `matplotlib` isn't the only library for this purpose, it's the most widely used for basic visualization, and integrates very nicely with jupyter notebooks.

There are a variety of ways we can choose to display data - and `matplotlib` is a large library, with many options.  It can seems somewhat daunting, however the purpose of our study this week is not to see every feature - just to understand enough syntax to get moving.

A key to understanding visualization, however, is learning the *types of visualizations* that can be used, and understanding the pifalls of choosing inappropriate visualizations.  Data can be presented well, or poorly with `matplotlib` - it's you, the code author, who must make good choices.  These choices revolve around not only the right type of visualization (a histogram, a bar chart, a pie chart, a scatter plot, etc.), but also details like *scale*, axis labels, and the use of color.  The aim of any visualization *should* be to convey data in the most clearly understandable and *unambiguous* way possible - allowing people to quickly understand the data *in the correct way*.

I've provided a lot more videos this week, mostly part of a really excellent series that I think does a better job of walking through the functionality of `matplotlib` than the text - which is more of a reference.

## Videos Tutorials
**Note -** the following tutorials install matplotlib using `pip`.  Since we are using `anaconda`, you would instead install via `conda install matplotlib`.  If you are using Jupyter notebook, keep in mind your `matplotlib` graphs will appear directly into the notebook output cells.

- [Matplotlib Tutorial Part 1](https://www.youtube.com/watch?v=UO98lJQ3QGI) - Basics of creating line graphs, with styles, and saving as image files
- [Matplotlib Tutorial Part 2](https://www.youtube.com/watch?v=nKxLfUrkLE8) - More types of graphs, and using data files.  Also - pay attention to the use of `Counter` - you've all done this in your own code, now you can see a built in method in Python!
- [Matplotlib Tutorial Part 3](https://www.youtube.com/watch?v=MPiz50TsyF0) - Pie charts
- [Matplotlib Tutorial Part 4](https://www.youtube.com/watch?v=xN-Supd4H38) - Stacked Plots
- [Matplotlib Tutorial Part 5](https://www.youtube.com/watch?v=x0Uguu7gqgk) - Area Plots
- [Matplotlib Tutorial Part 6](https://www.youtube.com/watch?v=XDv6T4a0RNc) - Scatter Plots
- [Matplotlib Tutorial Part 7](https://www.youtube.com/watch?v=zZZ_RCwp49g) - Histograms
- [Matplotlib Tutorial Part 10](https://www.youtube.com/watch?v=XFZRVnP-MTU) - Subplots - Advanced but very useful!
- [Matplotlib in Jupyter](https://www.geeksforgeeks.org/using-matplotlib-with-jupyter-notebook/) - simple update to the videos above that clarifies how you can use `matplotlib` in jupyter.
### Colors
- [Hexadecimal overview](https://www.w3schools.com/Colors/default.asp)
- [Hexadecimal color map](https://htmlcolorcodes.com/)
### Choosing good chart types
- [UC Berkely](https://guides.lib.berkeley.edu/data-visualization/type)
- [365 Data Science](https://365datascience.com/chart-types-and-how-to-select-the-right-one/)
## Textbook Reading
- **Guttag**:  Chapters 11
- **McKinney**:  Chapter 9

## Weekly Project
In Weekly Project 8, we will use `matplotlib` to reveal the importance of PCA analysis by applying it to computer vision.  You'll see how PCA can classify images of hand written digits (0-9), and how `matplotlib` can be used to understand and visualize the classification.

[Full Project Description](https://github.com/scottfrees/cmps530-wp7)

## In-class Agenda
We'll discuss the various types of charts `matplotlib` supports, but primarily our focus will be discussing the pros and cons of different visualizations.