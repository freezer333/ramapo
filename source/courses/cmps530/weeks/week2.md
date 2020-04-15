# Structured Programs and Data
This week is really a *Python bootcamp*.  If you have never seen Python before, there is quite a bit of material to cover this week.  Try your best to at least make it through Lists, and you can catch up next week when we look at Abstract Data Types.  **Please ask for help**.

[Back to topics](../topics.html)

## Python Videos
The following videos are part of my CMPS 130 course material.  For those of you who are very new to programming or Python, these may be helpful for you.  Note, they are geared towards entry level undergraduates - feel free to skim/fast-forward, or skip - these are simply provided as an additional resource to you.

There is a lot of material here - however understanding functions, tuples, lists, dictionaries is **incredibly** important - please make sure you are up to speed on these concepts!

- [Functions](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module05)
- [Recursion](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module06)
- [Global Variables](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module07)
- [Modules](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module08)
- [Reading and Writing Files](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module09)
- [Tuples](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module10)
- [Lists](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module11)
- [Dictionaries](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module12)
- [Testing and Debugging](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module13)
- [Exceptions and Assertions](https://pages.ramapo.edu/~sfrees/courses/cmps130/modules/module14)

## Reading (Python)
- **Guttag**:  Chapters 4-7
- **McKinney**:  Chapter 2-3
  - Note, the McKinney book is *optional* this week.  Chapter 2 begins to describe Jupyter notebooks, and we won't use them for a few more weeks.  Chapter 3 is really covering the same material  as Chapters 4-7 in Guttag.  
  - **If you already know Python**, use McKinney as a review, rather than the Guttag text.  If you don't already know Python, stick to Guttag and skip McKinney for this week.

## Weekly Project
MovieLense

Create a list of dictionary object representing a movie.  Each movie should have a dictionary key (movieID) and values of title and genres.  Make sure the genres string is parsed and stored as a tuple, rather than an inline string separated with | characters.  Also include the year as a primary data field, by parsing the title.

Load ratings, for each row, add the ratings (just the rating) to a list within the appropriate movie entry.

Load tags the same way - adding a tags entry to each movie.

For each movie, attach average rating

Find the following:
  - What is the average rating for movies with 1 genre, 2 genres, etc. - all the way to the largest number of genres.
  - What are the top 20 tags in terms of the average rating across each movie with the tag.  Compute average rating by finding all the movies with the specific tag, and then computing the mean of the average ratings field you already calculated for each movie.
  - Repeat the calculation above, but leave out tags that are associated with less than 5 movies.
  - Output a CSV containing all movies with the following columns:
    - A:  Movie ID
    - B:  Title 
    - C:  Year
    - D:  Average Rating
    - E:  Genres (Separated by |)
    - F:  Tags (Separated by |)
  - Output the same data as a JSON data file, where the lists (genre, tags) are output as regular lists, without delimiting characters.  
```
  with open('/home/ubuntu/test.json', 'w') as fout:
    json.dump(list , fout)
```
  
  - Which data format do you prefer?  CSV of JSON?  
  - What advantages / disadvantages do you see?

## In-class Agenda
This week's in-class meeting will largely be dedicated to functions, tuples, lists, and dictionaries.  Please make sure you are ready to ask questions!