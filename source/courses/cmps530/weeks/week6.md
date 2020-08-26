# Algorithmic Complexity and `numpy`
This week we examine ways to make our data processing faster.  A key concept in Computer Science is *Algorithmic Complexity* - which measures how the computational time (or memory space) required to solve a problem *grows* as the input (i.e. size of data set) grows.  Some algorithms (a fancy word for a set of steps to solve a problem!) grow modestly as input grows, while other algorithms tend to perform much more poorly.  Importantly however, *Algorithmic Complexity* is *not* about how much absolute time it takes for an algorithm to complete - but how many *instructions* it must execute.  

Computer Scientists tend to worry a lot about the number of instructions - and for good reason... an algorithm that requires the execution of more instructions than another algorithm will **always** take more time - assuming each instruction is the same.  Moreover, if the *rate of growth* of one algorithm is larger than another, the algorithm will tend to take more time *even if it's individual instructions take less time!*.

This week you'll learn how to spot the telltale signs of an algorithm that will quickly grow far too large (in terms of the number of instruction to be executed) as the input gets large.  This is crucial for Data Scientists - as our inputs (data sets) tend to be very large!

## Raw language speed
One thing that algorithmic complexity doesn't quite account for is situations where individual instructions are truly orders of magnitude slower/faster however.  In addition, given two algorithms that grow at the same rate - you clearly want to use the algorithms whose individual instructions are faster!  Within the context of our course, this becomes important when considering **programming language**.  Python is a wonderful language - but it is *slooow*.  Just a simple comparison - here's a loop to determine whether 492366587 is prime or not (it is):

```python
num = 492366587
for i in range(2,num):
  if (num % i) == 0:
    print(num,"is not a prime number")
    print(i,"times",num//i,"is",num)
    exit()

print(num,"is a prime number")
```
This took took about 48 seconds to complete on my machine.  Here is the same exact algorithm (same number of "instructions"), written in C. 

```c++
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long num = 492366587;
    long i;
    for (i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            printf("%li is not a prime number\n", num);
            printf("%li times %li is %li\n", i, num / i, num);
            exit(0);
        }
    }
    printf("%li is a prime number", num);
}
```
The C version, which is the same exact (naive, and admittedly simplistic) algorithm took **4.9 seconds**.  That's pretty close to 10x faster - just because of the language.

Why Python is so much slower than C might be obvious to you if you come from a background in Computer Science.  The C langauge compiles to binary instructions, which execute directly on the CPU when you run the program.  Python is an *intepreted langauge*, your Python script is read by a program (called `python`!) - called the *intepreter*.  The python *intepreter* is written in... you guessed it... C!  So, your Python code is essentially being transformed into actions being taken by a C program - while it is being run.

That might seem wasteful - but the fact that Python code is intepreted has tremendous ease-of-use advantages - type inference, memory management, list and data structure management are all far easier in Python.  **However**, you must always realize there is a trade off.

## `numpy`
One of the great advantages of using Python is that the *intepreter* itself is exensible, and you can create C and C++ libraries and functions that can be called directly from Python.  This is exceptionally handy when you need to do something that would normally be very time consuming - allowing you to "drop down" into C or C++ to do the heavy lifting.

One such library is `numpy`, which is a library solely focused on allowing you to efficiently manipulate and aggregate large arrays of numerical values.  While all of the operations `numpy` allows you do to could be done in pure Python - `numpy` implements it's algorithms in C/C++ instead - dramatically increasing speed while also reducing memory consumption.  Without `numpy` (and libraries like it), Python couldn't be a mainstream Data Science programming langauge - it is just too slow to deal with large data sets!

## Python Video

- [Algorithmic Complexity](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module18/)

## Reading (Python)
- **Guttag**:  Chapters 9-10
- **McKinney**:  Chapter 4.

## `numpy`
Additional Tutorial information goes here...
https://www.practicaldatascience.org/html/exercises/Exercise_numpy.html
https://www.w3resource.com/python-exercises/numpy/index.php


## Weekly Project
In Weekly Project 4, you'll explore the impact of utilizing better algorithms, and better tools (`numpy`) to improve the performance of your analyses.  You'll also learn how to perform basic timing measurements, so you can identify where to put your energy when attempting to speed up execution of your scripts.

[Full Project Description](https://github.com/scottfrees/cmps530-wp4)


## In-class Agenda
This week I'll be focusing on how to determine an algorithms complexity - focusing on linear - O(n), logarithmic  - O(logn), polynomial - O(N<sup>x</sup>) and other common classifications.  We'll also touch upon more of how `numpy` leverages the C/C++ extension systems of Python.