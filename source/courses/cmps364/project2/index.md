# Project 2

For this assignment you be working on essentially the same program from Project 1 - just this time using MongoDB along with a bit of Redis.  As before, you’ll use the provided Flask application as a starter, and you are required to provide the database portion.

You can download the zip file of the application at the following link:

[https://pages.ramapo.edu/~sfrees/courses/cmps364/project2/project2.zip](https://pages.ramapo.edu/~sfrees/courses/cmps364/project2/project2.zip)

Once you download the file, extract it into a convenient directory and then navigate to it in your command prompt or terminal.  Please refer to Project 1 for information about running your application - it is the very same procedure for this assignment.

## Step 2 - Implement the functions in database.py (80 Points)

Your job is to implement all functions defined in the database.py file.  These functions are being called by the web application, and already have default implementations.  

The purely database code part of the assignment is worth 80 points.  

## Step 3 - Caching with Redis (20 Points)

The sales report is essentially a list of products, with totals corresponding to all orders of that product (total number of product and the date of last purchase).  That implies that to create a sales report, you need to retrieve orders for each product - and then use those to calculate the totals to be displayed on the UI.

This isn’t terribly time consuming, but it's’ the type of issue that can become slow - especially if there are many products.  The reason for this is that MongoDB doesn’t support the type of aggregation commands you’d need to do this with one query*.  You are forced to make separate calls to Mongo to retrieve the order list of each product.  In situations like this, caching often makes a lot of sense.  Things like sales reports often don’t need to be updated in real time, and won’t change until the underlying data changes.

### Implement your cache as follows:

Step 1:  When the sales report function is called, use MongoDB to retrieve a list of all product.

Step 2:  Search Redis for a hash (dictionary) with the key equal to the product’s ID.  

If not present:  Query MongoDB for all orders associated with the product. Construct a dictionary with the name, number of sales, price, and last date of sale.  Store this dictionary as a hash in Redis, under the product ID key.

Otherwise (if found): If the hash is there, simply use that (see next step).

Whether the information came from Redis or Mongo, at this point you will have one dictionary object for each product.  Shape the data as necessary and return a list for a valid Sales Report.

### Cache invalidation.

Typically caches need to be invalidated.  Redis includes TTL (Time to Live) functionality that can automatically invalidate records (removes them) after a given period of time.  In our case, we will only invalid the cache when the underlying data changes.

Each time an order is created (or deleted in any way), delete the Redis key associated with the given product ID.  This way the next time the sales report is retrieved, a fresh calculation must be made for that product.

* Mongo DB does, indeed, have an aggregation framework - which could have been used here.  Do not use this part of MongoDB for this assignment (we’ll do this in class at the end of the semester).

