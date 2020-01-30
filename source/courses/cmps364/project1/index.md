# Project 1

For this assignment you will build the database portion of a complete web application written in Python and the Flask framework. 

## Step 1 - Get the code and start running it!

I have provided you a complete web application, which provides the user interface and calls numerous database functions that you will need to implement.  You can download the zip file of the application at the following link:

[https://pages.ramapo.edu/~sfrees/courses/cmps364/project1/project1.zip](https://pages.ramapo.edu/~sfrees/courses/cmps364/project1/project1.zip)

Once you download the file, extract it into a convenient directory and then navigate to it in your command prompt or terminal.  

Next, you will need to install the Flask web application framework.  Detailed instructions can be found here - [https://flask.palletsprojects.com/en/1.1.x/installation/](https://flask.palletsprojects.com/en/1.1.x/installation/)

In particular, `cd` into the project1 directory you've downloaded and extracted, create the virtual environment, activate it, and install flask with `pip`.

Once you have done that, you can start the application:

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

## Database Configuration Requirement
Your applications **must** utilize a `config.ini` file to hold the connection string for the database.  **I will be testing your code with my own database**, and I will do so by providing an alternative `config.ini` file.  

*If you hardcode your own connection string, or require me to edit your python code in any way in order to run with my database, I will **not** grade your project*.

I have provided a sample `config.ini` file, you should simply add your connection string there.  You may include your `config.ini` file in your program submission, however it is not necessary.  I will replace yours with mine.

```ini
[database]
postgres_connection = postgres://your_pg_string
```

Below is sample code for retrieving the connection string (you'll need to do this when establishing a connection string to the database).

```python
from urllib.parse import urlparse, uses_netloc
import configparser

config = configparser.ConfigParser()
config.read('config.ini')
connection_string = config['database']['postgres_connection']

# connection_string may no be used to connect to the database.
```

## Table Names
You **must** name the three tables in your application as follows:
- products
- customers
- orders

**Failure to name your tables correctly will result in A ZERO for your project.**

## Grader
For your convenience, I have included a `grader.py` program.  This command line program can be run directly.  It connects to the database defined in your `config.ini` file and does the following:

1. Deletes the tables involved in the project
2. Runs a series of inserts, updates, and deletes using the methods in your database.py file.
3. Outputs a score.

The grader results are *provisional*, your actual grade might vary - as I will use a grader with different data - but you can be reasonably confident that your grade will be similar.

**Do not edit the grading program**.  If you application requires changes to the grader, you have not done your job - which is to create the methods in `database.py` such that they conform with my specifications.  

The grader program is an alternative to testing using the web UI, but your program should work through the provided UI as well.

*I will test your program with a modified grader program, with different data, and more complexity*.
