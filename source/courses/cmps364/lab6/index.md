# CMPS 364 - Lab 6

Sometimes the best way to see the differences and commonalities between databases is to use the alternatives in the same program.  

For this lab you be doing precisely the same thing you did in Lab 5, but this time with MongoDB instead of PostgreSQL.  Instead of ElephantSQL, you should be using your own mLab account.  

Just like last time - you need not start from scratch, I’ve provided a skeleton of the Python application for you.  Please download the [starter application](lab6.zip) and create the necessary additions to complete the lab.  The ui.py file from Lab 5 is exactly as it was - and the function calls defined in db.py are too - we just need to implement db.py in MongoDB now!

Please submit db.py only.  As with all other labs, you may work in teams of up to 3 students.  Only one submission per team please, and make sure you add your names to db.py!
Data Schema

We’ll support two entities - ship class and actual ships.

- `classes` Collection:
  - `class`: name of class of ships.  Generic string type
  - `type`: bb for battleship, bc for battle cruiser. Generic string type
  - `country`: Country of origin.  Generic string type
  - `numGuns`: Integer
  - `bore`: Diameter of gun barrel, in inches (real number)
  - `displacement`: Weight, in tons (real number)

- `ships` Collection:        
  - `name`:  Name of specific ship.  Generic string
  - `class`: Class of the ship.  Generic string
  - `launched`: Date the ship was launched.

**Important** Do not deviate from the naming conventions I have provided.  NOTE THAT THEY ARE DIFFERENT THAN WAS FOUND IN LAB 5.  An automatic 30 point deduction will be applied if you use different collection names, or different document property names.



## Application Structure

The application is contained in 3 distinct files.  
- ui.py - Contains the code to talk to the user through the command prompt.
- db.py - Contains all code that interacts with MongoDB using the pymongo module
- config.ini - Contains connection string data for your mLab account.
- ships.csv - Seed data for ships
- classes.csv - Seed data for classes

You should create, but not submit, your config.ini.  All of your work for this lab will be within db.py  

## Part 1 - DB Creation

Recall that databases and collections are created automatically, on first write, in MongoDB.  Since there is no schema, there is no setup.  The db.py defines a function called `seed_database`.  This function is responsible for only one thing: Check if there is data in the tables, and insert data found in the CSV files if it isn’t.

Note that the ui.py file calls this function right away.  Also note that there is a pre-built function called `load_seed_data` already provided for you.  When called (from `seed_database`), it will return a dictionary object containing the seed data that you can use to insert into your collections.

Note that while there is no formal schema, we have code that assumes objects returned by the functions in db.py have a certain set of properties.  You must ensure you are returning data with the correct properties, and the correct format.

**Also note that while MongoDB does not offer Foreign Keys, you still need to make sure that when a class is deleted, all ships with that class are also deleted!**

## Part 2 - User interaction

The ui.py file contains a menu logic to allow the user to choose the following operations:

1. List classes
2. List ships (displays class data alongside the ship information)
3. Add class
4. Add ship
5. Delete ship
6. Delete class

I have already provided a complete implementation of the UI - your job is to fill in the functions missing their implementations in db.py.  Please read the requirements of those functions carefully.

It is not necessary for you to alter ui.py for this lab.