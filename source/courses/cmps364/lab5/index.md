# CMPS 364 - Lab 5

For this lab you will create a simple Python program that connects to your PostgreSQL account on ElephantSQL.  The program will manipulate a database the contains part of the data model we’ve seen in several of the textbook homework assignments dealing with naval ships and classes.

You need not start from scratch, I’ve provided a skeleton of the Python application for you.  Please download the [starter application](lab5.zip) and create the necessary additions to complete the lab.

Please submit db.py only.  As with all other labs, you may work in teams of up to 3 students.  Only one submission per team please, and make sure you add your names to db.py!

Failure to submit your file with db.py as it's name will result in automatic 10 point penalty.  The file, as it appears on Moodle, must be named db.py.

## Data Schema
We’ll support two entities - ship class and actual ships.

- **Class**:
    - Class - name of class of ships.  Generic string type
    - Type:    bb for battleship, bc for battle cruiser. Generic string type
    - Country:  Country of origin.  Generic string type
    - NumGuns:  Integer
    - Bore:    Diameter of gun barrel, in inches (real number)
    - Displacement:    Weight, in tons (real number)

- **Ship**:    
    - Name:         Name of specific ship.  (Generic string)
    - Class:            Class of the ship.  (Generic string)
    - Launched:        Date the ship was launched.

**IMPORTANT**:  The table names, columns names, and column orders listed above **ARE NOT OPTIONAL**.  You must create your table using these precise names and order of columns.  If you do not, there will be a mandatory 30 points taken off the lab grade (as a minimum).

**YOU SHOULD HAVE TWO TABLES, ONE NAMED *Class* and ONE NAMED *Ship*.  Do NOT DEVIATE FROM THIS.**

## Application Structure
The application is contained in 3 distinct files.  

- `ui.py`:  Contains the code to talk to the user through the command prompt.
- `db.py`: Contains all code that interacts with PostgreSQL using the psychopg2 module
- `config.ini`: Contains connection string data for your ElephantSQL account.
- `ships.csv`: Seed data for ships
- `classes.csv`: Seed data for classes

All of your work for this lab will be within db.py

## Part 1 - DB Creation
The db.py defines a function called `seed_database`.  This function is responsible for two things:
1. Create the tables if they do not exist
2. Check if there is data in the tables, and insert data found in the CSV files if it isn’t.

Note that the ui.py file calls this function right away.  Also note that there is a pre-built function called `load_seed_data` already provided for you.  When called (from `seed_database`), it will return a dictionary object containing the seed data that you can use to insert into your SQL table.
Please create the tables using the schema described above.  You must also place the following constraints on the data:

1. The class column in the Ship table is a foreign key into the Class table.
2. When a class is deleted, you must ensure that all ships from that class are also deleted, using the appropriate deletion cascading policy (See Module 8).

## Part 2 - User interaction
The ui.py file contains a menu logic to allow the user to choose the following operations:

```
1) List classes
2) List ships (displays class data alongside the ship information)
3) Add class
4) Add ship
5) Delete ship
6) Delete class
```

I have already provided a complete implementation of the UI - your job is to fill in the functions missing their implementations in db.py.  Please read the requirements of those functions carefully.

It is not necessary for you to alter ui.py for this lab.





