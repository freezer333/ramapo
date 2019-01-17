# Project 1

For this assignment you will build the database portion of a complete web application written in Python and the Flask framework.  Most of the assignment is limited to writing Python that interacts with PostgreSQL, however the last 15 points will require you to build out a new web page in the application as well.

## Step 1 - Get the code and start running it!

I have provided you a complete web application, which provides the user interface and calls numerous database functions that you will need to implement.  You can download the zip file of the application at the following link:

[https://pages.ramapo.edu/~sfrees/courses/cmps364/project1/project1.zip](https://pages.ramapo.edu/~sfrees/courses/cmps364/project1/project1.zip)

Once you download the file, extract it into a convenient directory and then navigate to it in your command prompt or terminal.  

Next, you will need to install the Flask web application framework.  Detailed instructions can be found here - [http://flask.pocoo.org/docs/0.12/installation/](http://flask.pocoo.org/docs/0.12/installation/)

Note that for our purposes, you are likely to be perfectly fine with the simple method of installation - described here: [http://flask.pocoo.org/docs/0.12/installation/#system-wide-installation](http://flask.pocoo.org/docs/0.12/installation/#system-wide-installation)

Once you have that, you can start the application:

```
$ export FLASK_APP=pcs.py
$ flask run
* Running on http://127.0.0.1:5000/
```

Browse to the application by entering http://localhost:5000 in your web browser.  The application is driven by “mock” data, which will be replaced with your code.

Whenever you make changes to your code, you must stop the server (Ctrl+C) and restart it, by executing ‘flask run’.

## Step 2 - Implement the functions in database.py

Your job is to implement all functions defined in the database.py file.  These functions are being called by the web application, and already have default implementations.  

I recommend you start with the initialize function.  You must connect to PostgreSQL (ElephantSQL) and create 3 tables - CUSTOMERS, PRODUCTS, and ORDERS - if they do not already exist.  You can see the desired schema by examining the customers, products, and orders arrays at the top of database.js - which are “mock” data.  Be sure to delete those arrays as you begin implementing your code however.

