# CMPS 364 Spring 2015

## Database Design

**Meeting Time:  **&nbsp;&nbsp;Thursdays, 6pm-9:15pm

**Location:  **&nbsp;&nbsp;ASB Room 426

**Professor:**&nbsp;&nbsp;Scott Frees, Professor of Computer Science

** Contact Information**
Office&nbsp;&nbsp;G315
Phone&nbsp;&nbsp;(201) 684-7726
Email&nbsp;&nbsp;[sfrees@ramapo.edu](mailto:sfrees@ramapo.edu)

## Course Description
This course provides in-depth treatment of relational database design, the Structured Query Language (SQL), along with non-traditional databases such as key and document stores.
The first portion of the semester is dedicated to relational schema design, emphasizing normalization, ER and UML modeling, and aspects of the SQL DDL for creating constraints and relationships between data models.
The second segment of the semester is focused on SQL and query design. We will use the H2 database through the Java programming language, utilizing JDBC.
The third portion of the class is dedicated to a variety of different technologies related to data representation, storage, and retieval. This includes XML/XSLT, JSON and MongoDB, and the Redis key-store database.
While the course will include discussions on database security, data protection, and administration, the primary focus of the course is software development using databases.
## Pre-Requisites

CMPS 231 Data Structures

## Course Materials

**Textbook** &nbsp;&nbsp; [Database Systems - The Complete Book - 2nd Edition](http://www.amazon.com/Database-Systems-Complete-Book-Edition/dp/0131873253) by Garcia-Molina, Ullman, Widom

<img src='http://ecx.images-amazon.com/images/I/51JtltOJPVL.jpg' width="200"/>

*Note, the textbook is required for this course, and will be relavent to nearly each lecture.*

## Programming Environment
This course will require you to write SQL and Java code. A simple text editor is all that is necessary, however installing a good programming editor is highly recommended. In addition, you will also need to install H2. H2 is a Java-based database implementation which is compatable with all major operating systems (Windows, Mac OS X, Linux) as long as Java has been installed on the system.  It is highly recommended that you have access to your own computer to do your development on.

When we begin programming with Java, you are encouraged to download [eclipse](http://www.eclipse.org/downloads/). Please make sure you download and install the newest version of the standard edition (or the another more specialized edition). We will go over the creation of programs in eclipse during class time.

## Course Objectives
* Theoretical basis for relational database design
* Entity Relationship Diagrams
* UML Diagrams
* Structured Query Language (SQL)
* Advanced RDBMS topics such as
* Constraints and Triggers
* Views
* Index implementation
* Programming against Databases using Java (JDBC, JPA)
* XML and XPATH/XSLT
* Use of Document-store database (MongoDB)

## Lecture Schedule
Below is a tentative schedule for the course.  All topics and due dates are subject to change, and if there is a difference between what is stated here and on Moodle, please always consider Moodle to be correct (and let me know so I can correct the mismatch!).

**You must keep up with the readings** associated with each lecture.  

| Date | Lecture Topic | Slides | Reading |
|------:|---------------|-------------|----|--|
| 1/22/2015	| Lecture 1 | [Course Introduction](http://tinyurl.com/mq67r9j)<br>[Database Overview](http://tinyurl.com/ll5bn8r) | Chapter 1 |
| 1/29/2015	| Lecture 2 | [Relations and Schemas](http://tinyurl.com/n2mxjwz) | Chapter 2.1-2.5|
| 2/5/2015	| Lecture 3 | [Introduction to SQL and H2](http://tinyurl.com/l4nmcpy) |  |
| 2/12/2015	| Lecture 4 | [Functional Dependencies, BCNF, 4th Normal Form](http://tinyurl.com/lnl4ml4) |  Chapter 3|
| 2/19/2015	|  | Exam 1 | Chapters 1-3
| 2/26/2015	| - | No Class  | - |
| 3/5/2015	| - | Class Cancelled due to weather  | - |
| 3/12/2015	| Lecture 5 | [UML and ER Diagrams](https://docs.google.com/presentation/d/1DP8JnWb7iL7tJxiqEku6HedWdgKDtPz5ZDLoBetJk3U/pub?start=false&loop=false&delayms=3000&slide=id.g262409d0f_025) / [Query Logic and SQL](https://docs.google.com/presentation/d/1b7hu1Dnnrv5XBkJCm2L5MmkQyZ05H19p9V_s1xDWdhI/pub?start=false&loop=false&delayms=3000) | Chapter 4.1-4.8, Chapter 5.1-5.2|
| 3/19/2015	|  | Spring Break | |
| 3/26/2015	| Lecture 6 | [Query Logic and SQL](https://docs.google.com/presentation/d/1b7hu1Dnnrv5XBkJCm2L5MmkQyZ05H19p9V_s1xDWdhI/pub?start=false&loop=false&delayms=3000) | Chapter 5.1-5.2 and 6|
|  4/2/2015	| Lecture 7| [SQL - continued](https://docs.google.com/presentation/d/1b7hu1Dnnrv5XBkJCm2L5MmkQyZ05H19p9V_s1xDWdhI/pub?start=false&loop=false&delayms=3000&slide=id.g2628f3916_111) and [Java and JDBC Programming](https://docs.google.com/presentation/d/1JWVBILNsJMk07-uaBKJr3fOY-r5a7Ab0lgxfW-vf1sc/pub?start=false&loop=false&delayms=3000) | Chapter 6 and [Java Tutorial](http://docs.oracle.com/javase/tutorial/java/)|
| 4/9/2015	| Lecture 8 |[Java and JDBC Programming](https://docs.google.com/presentation/d/1JWVBILNsJMk07-uaBKJr3fOY-r5a7Ab0lgxfW-vf1sc/pub?start=false&loop=false&delayms=3000) and Exam 2 |[Java Tutorial](http://docs.oracle.com/javase/tutorial/java/)|
| 4/16/2015	| Lecture 9-10 | [Constraints, Assertions, and Triggers](https://docs.google.com/presentation/d/1J7tPs-Cw1mEInE4IzwQsbO4oFD9D-763QgenB4qw5X4/pub?start=false&loop=false&delayms=3000), [Views and Indexes](https://docs.google.com/presentation/d/1JFWHtyh0-7FtfMohYpBp4bFhmWzu8T-MDzJ50ZeMOS4/pub?start=false&loop=false&delayms=3000) | Chapter 7, 8, and 14
| 4/23/2015	| Lecture 11 | [XML and Xpath](https://docs.google.com/presentation/d/1O8gvKb77FkL7Rtl8yKeDgMQM9Q7OlWuq_uDLon556cw/pub?start=false&loop=false&delayms=3000) | Chapter 11-12|
| 4/30/2015	| Lecture 12 | [Alternative Database Technologies](https://docs.google.com/presentation/d/1GHgI9iAZvfsNobjx4VaEMwU8bgRgSd8h6kKG3drViEA/pub?start=false&loop=false&delayms=3000) | |

** Final Exam is scheduled for Thursday, May 7 from 6:30 p.m. to 9:30 p.m **

## Homework Assignments
Homework assignments are worth between 50 and 100 points, and are turned in electronically as well.  

* [Homework 1](hw/hw1.html)  - Due on 2/5/15
* [Homework 2](hw/hw2.html)  - Due on 2/16/15
* [Homework 3](hw/hw3.html)  - Due on 3/26/15
* [Homework 4](hw/hw4.html)  - Due on 4/9/15
* [Homework 5](hw/hw5.pdf)  - Due on 4/30/15

## Late Policy
All assignments will be turned in electronically.  A late penalty of 5 points per day will be applied to all late assignments.  The required format/method of your electronic submissions will be outlined for each assignment.  Deviation from these requirements may result in a 5-point penalty.  

## Attendance Policy
Attendance will be recorded by the instructor and, along with class participation, will be a determining factor in making border-line final grade decisions

## Grading

| % | Activity | Frequency/Description
|------------------:|:---------------|-------
|25%|Homework | 5 assignments
|40%|Exams | 2 exams during the semester
|35%|Final Exam | Comprehensive

## Academic Integrity
Students are expected to read and understand Ramapo College’s Academic Integrity Policy, which can be found in the Ramapo College Catalog.  Members of the Ramapo College community are expected to be honest and forthright in their academic endeavors.  Students who are suspected of violating this policy will be referred to the Office of the Provost.

### ACADEMIC INTEGRITY SPECIFIC TO THIS COURSE  
For programming assignments (Homework Assignments), you may discuss ideas, however you may not allow others to see your source code or examine others’.  Sharing of source code is extremely easy to detect and is strictly prohibited.  

IF SHARING OF SOURCE CODE IS SUSPECTED, INTENTIONAL OR OTHERWISE, BOTH PARTIES WILL IMMEDIATELY BE REFERRED TO THE OFFICE OF THE PROVOST.
