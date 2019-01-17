# CMPS 364 - Lab 7

This lab focuses on using MongoDB’s aggregation framework.  Start by [downloading the lab7.zip](lab7.zip) file from the course web site.

The zip file contains two documents - `data.json` and `lab7.py`

- `data.json` - contains JSON data that lab7.py will populate.
- `lab6.py` - you will edit this file to complete all 5 aggregation problems.

The complete instructions for the lab are found inside lab7.py.  Please note that you should change the connection string to either a local mongodb server running on your machine or your mlab account.

**IT IS EXTREMELY important that you uncomment out the insert statement in each loop that processes your aggregation response.  If you do not uncomment it, the results of your program are not saved.  I will be using the saved results when I run your program in order to grade your work!  No inserts... no grade!**

Please only submit your lab7.py file.  I will run it with a different data set to grade it.

You may work in teams up to 3.

DO NOT change any code related to creating the database / collections.  Your aggregation pipelines must work with the same data as I’ve provided.