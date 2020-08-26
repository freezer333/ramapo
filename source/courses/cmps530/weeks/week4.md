# Data Structures, Types, and Jupyter Notebooks
This week we will look at creating Abstract Data Types - `classes`, which will be familiar to you if you've done any Object Oriented Programming (OOP) in the past.  Classes can help us organize our code a bit better - encapsulating logic within data types, and reducing the number of standalone functions we have.  Ultimately, using classes correctly will make code more readable and maintainable.

Object Oriented Programming is an essential skill in general software development - where long term maintainability of programs is a critical concern.  In most Data Science projects, OOP is not quite as critical - but readability of code is always something we should look towards.

In Weekly Project 3, I'll have you adapt last week's project to use classes for each Movie, rather dictionaries.  I think you will see that the code becomes a bit less chaotic.

## Some notes on Weekly Project #2
For those of you with less programming experience... I'm sure that last week's project was quite a challenge!  That's OK - do not lose confidence.  In fact, this week is specifically designed to be a little light on new material, to give you a chance to catch up.

In my tips listed in [Weekly Project #2](https://github.com/scottfrees/cmps530-wp2#analyze-the-data), I want to call attention to my recommendation to build a "dictionary of dictionaries" when building the movie list.  I directed you to create a single dictionary object for each movie - with keys for title, year, genre, etc.  This week I'll have you instead create a class for Movie, which makes your code a bit more readable.  **However**, I want to focus on why it was important to create a dictionary of all the movies - key'd by movie ID.

We have have many data structures in computer science, and the reason for this is that some perform better under certain conditions than others.  You may have been wondering - **why not create a list of movies?**  It's a reasonable question, because elsewhere in the analysis it's easier to work with lists than dictionaries - and in fact in my solution, after I was done building the dictionary of movies, I tended to work directly with the list instead (`movies.values()`).

The reason is **performance**.  See the video below for an explanation - it makes it pretty clear why that simple design choice is such a big deal!

<video style="width:100%" controls>
  <source src="cmps530-wp2-performance.mp4" type="video/mp4">
  Your browser does not support the video tag.  
</video>

The key takeway is **searching** a list for something takes *much* longer than **lookup** in a dictionary.  A dictionary is designed to support fast look up by key value - a list is not, even in the best cases!

## Python Videos
The following videos are part of my CMPS 130 course material.  For those of you who are very new to programming or Python, these may be helpful for you.  Note, they are geared towards entry level undergraduates - feel free to skim/fast-forward, or skip - these are simply provided as an additional resource to you.

- [Abstract Data Types and Classes](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module15)
- [Inheritence](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module16)
- [Encapsulation and Generators](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module17)
- [Algorithm Complexity](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module18)
- [Search](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module19)
- [Sorting](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module20)
- [Hash Tables](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module21)

## Reading (Python)
- **Guttag**:  Chapters 8
- **McKinney**:  No required reading, however if you didnt' read Chapters 2 and 3, you should do that this week.

## Jupyter Notebooks
One of the pain points you probably encountered last week was just how long your scripts took to run - particularly when using the full data set.  This is very common in Data Science - most of our programs will contain a length phase in the beginning where data needs to be loaded, cleaned, and organized for further use.  As our analysis become multi-step, and when each step becomes length, the cost of running your program over and over again just gets magnified.  Since so much of what we do while creating our analyses involves a bit of trial and error and exploration - running your program over and over again is all too common.

A solution to this is perfecting your code on small data sets, but this isn't always useful.  Another solution to this is using *interactive* Python - where you can continue to edit your program without restarting the entire script.  This sounds like magic... but its a problem that is well solved through the use of **Jupyter Notebooks**, and this week we'll introduce their use.  There are many nice things about Jupyter notebooks, but perhaps the nicest is that you can load all your data, and then move on to continue working on analysis, re-running analysis code over an over again, **without** reloading, cleaning, and organizing the input data.

Jupyter Notebooks are widely used by the Data Science community, and we'll begin using them more frequently in our projects.  In addition to being able to save state of various portions of your project while still coding, notebooks are a great way to combine documentation, code, and graphics.

For now - take a look at these tutorials, and try to complete your weekly project using a Jupyter Notebook instead of a standard Python script.

- [Complete Documentation](https://jupyter-notebook.readthedocs.io/en/stable/notebook.html)
- [Datacamp Tutorial](https://www.datacamp.com/community/tutorials/tutorial-jupyter-notebook)
- [Code Academy Tutorial](https://www.datacamp.com/community/tutorials/tutorial-jupyter-notebook)

Also note that Chapter 2 in McKinney describes Jupyter and IPython (Jupyter's predecessor).

### Displaying Tabular Data in Jupyter
You can build tabular output yourself, however you might find it more productive to use a third-party module called `tabulate`.  Below is a demonstration of how to print out a list of objects.

Typically to install a dependency you'd just do the following:
```bash
conda install tabulate
```
However, if you are doing this in a Jupyter notebook, there is a better (more effective) way.  Create a new Python3 cell (preferrably at the top) and use the following:

```python
import sys
!conda install --yes --prefix {sys.prefix} tabulate
```
The ! mark tells Jupyter to invoke the command on the command prompt/terminal, and `sys.prefix` ensures it's installed in the current environment.

```python
from tabulate import tabulate

class Demonstration:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
    # providing an __iter__ method allows tabulate
    # to make tables right from instances of this class.
    # __iter__ in this case returns an iterator wrapping
    # a list of the three properties to be included in the 
    # the table.  You can choose which properties are
    # included.    
    def __iter__(self):
        return iter([self.x, self.y, self.z])
        
my_list = []
my_list.append(Demonstration(1, 2, 3))
my_list.append(Demonstration(8, 4, 2))
my_list.append(Demonstration(5, 0, 7))

print(tabulate(my_list, headers=['x', 'y', 'z']))
```
The output will look like this:
```
  x    y    z
---  ---  ---
  1    2    3
  8    4    2
  5    0    7
  ```

  If you are in a Jupyter Notebook, you can even tell tablulate to generate an HTML table, and utilize

  ```python
from tabulate import tabulate

# Add this to allow HTML to be displayed within 
# the cell output.
from IPython.core.display import display, HTML

# same class definition.... omitted
        
my_list = []
my_list.append(Demonstration(1, 2, 3))
my_list.append(Demonstration(8, 4, 2))
my_list.append(Demonstration(5, 0, 7))

# display and HTML are built-in Jupyter commands.
# Notice the tablefmt third parameter.
display(
    HTML(tabulate(my_list, 
                headers=['x', 'y', 'z'], 
                tablefmt='html')))
```
Now the output will be shown as a nicer HTML table.
<table>
<thead>
<tr><th style="text-align: right;">  x</th><th style="text-align: right;">  y</th><th style="text-align: right;">  z</th></tr>
</thead>
<tbody>
<tr><td style="text-align: right;">  1</td><td style="text-align: right;">  2</td><td style="text-align: right;">  3</td></tr>
<tr><td style="text-align: right;">  8</td><td style="text-align: right;">  4</td><td style="text-align: right;">  2</td></tr>
<tr><td style="text-align: right;">  5</td><td style="text-align: right;">  0</td><td style="text-align: right;">  7</td></tr>
</tbody>
</table>

## Weekly Project
This week we are using the same project from last week's analysis of movie data - with some twists.

- Instead of using a dictionary to represent an individual Movie, create a Movie class.  You'll still have a dictionary of Movie classes (rather than a dictionary of dictionaries).
- Instead of working on the project as one long executable script, use a Jupyter notebook, and separate your data loading/cleaning/organizing, and each analysis, into individual cells.
- Instead of outputting to CSV files, display results in Jupyter instead, as nicely formatted tables
  - You can leave out tags when outputting the results of the last analysis (frequently rated movies), since those are so lengthy.
  - Skip outputting JSON in the frequently rated movies as well.

[Full Project Description](https://github.com/scottfrees/cmps530-wp3)

## In-class Agenda
I will be dedicating most of the in-class lecture this week to working through *my own* solution to Weekly Project #2 using Jupyter notebooks.  Please make every attempt to complete this week's assignment prior to meeting in class, so you get the most out of the review.  We'll also discuss the key concepts behind classes and object oriented design.