# Academic Plagiarism in Computer Science
Academic integrity is at the core of all courses you take.  I have no doubt that you understand at a basic level whether you are turning in your own work, or simply turning in someone else’s.  You’ve hopefully been taught the basics in grade school, high school, and perhaps here at Ramapo as well.

Unfortunately, each semester I give F’s to students because they violate basic academic integrity principles.  Most of the time, the student is 100% aware they are cheating, and frankly I have absolutely no sympathy for them.  In some cases however, beginners in programming fail to see the parallels between academic integrity in computer science and integrity in other courses.  It's not an excuse, but I do feel bad when failing them.

I hope this document provides clarity.  If anything is unclear after reading this, I urge you to make an appointment with me so I can explain further.  **Ignorance of the principles outlined in this document is not an excuse for academic dishonesty.  It is your responsibility to know the rules (i.e. read this document).**  There will be no exceptions, and violators will be disciplined immediately - typically by receiving a zero on the assignment (first offense) or automatic failure of the course (second offense).

## Cheating, by analogy
Let’s imagine you are taking a history course, and you are asked to write a 3 page paper summarizing how the assassination of Archduke Franz Ferdinand in June of 1914 eventually led to the outbreak of World War 1.  Your instructor provides you a textbook, lectures on the subject, and also allows you to use any external resources you wish.

Proper use of source materials would certainly include quotations (properly cited), along with your own text that is synthesized from the knowledge you obtain from source material.

**Academic Plagiarism** would include the following:
1. Asking someone else (such as a professional historian, or someone who previously took the class) to write your paper for you.  In this case, even if you “understand” all the content of the essay, it’s plagiarism nonetheless.
1. Lifting vast quantities of content directly from several resources and simply pasting them together.  Someone doing this isn’t turning in their own work, they are merely gluing a few sources together.
2. Turning in a copy of the Wikipedia article found online.  In this case - sure, you’ve “used external resources”, but you haven't synthesized it and create your own work, you’ve simply copied it and claimed it as your own!  Note this includes copy/pasting an online article on WW1 and then making minor changes such as:
 - adding some spelling mistakes,
 - removing a few minor sentences,
 - separating a paragraph into a few paragraphs by hitting the “enter” key on your keyboard

These types of superficial changes are quite easy for anyone to see through, and in fact makes it all the more glaring that you in fact very well knew what you were doing was wrong!

I trust that most of you understand the above.  I also trust that most of you realize that when you copy an essay from somewhere, it’s **mind-numbingly easy for anyone reading the essays to see that they are the same**.  Even when the essays are about an indisputable set of events, where everyone is writing about the same events and drawing the same conclusions, **no rational person would believe that two people could develop a 3 page paper independently yet somehow have the nearly the same text**.  They either (1) copied from each other or (2) copied from a third party (a common friend who likes WW1 history, a copy of an essay found at a website geared to “help” students, or a real external source - i.e. Wikipedia).  Each of these possibilities is unacceptable.

## Cheating, in Computer Science
No one would believe that there is only "one solution" acceptable for the WW1 paper - there are many permutations of sentances/words/paragraphs that when put together can form an excellent essay.

Beginner programmers often see a programming problem as different though - as having “one solution”.  When asked to write a program that reads in a bunch of numbers and prints out all the unique ones (i.e. the all the numbers the user entered, with no repeats), frequently students view this problem as having one distinct solution.  They sometimes see copying a program as something that could never be detected.  They think along the lines of “since there is only one solution, how could my professor know I copied it?”.  Sometimes they change variable names, or add some tabs and comments - but they don’t change anything substantial because if they change the part that is the “one solution”, then they’d have it wrong!

Once you’ve been programming for a while you’ll realize this is pure fantasy.  There are literally thousands of different programs that could be written to solve the given problem.  Put 100 expert programmers in a room, and they will turn in 100 different programs.  Their differences won’t be limited to variable names, comments, and spacing - they will be major differences, recognizable immediately to an experienced programmer (such as someone who teaches Computer Science at a college).

While no two program would be alike, they might very well have the same “ideas”.  For example, one solution might be to read all the numbers, then sort the numbers, and then remove all consecutive duplicates.

- Input:   	`4 5 21 3 6 2 3 4 5 3`
- Sorted:	  `2 3 3 3 4 4 5 5 6 21`
- Deleted:	`2 3 4 5 6 21`

Two programmers who shared this “idea” with each other would likely come up with similar solutions.  In fact, sorting is so common that they might even sort the exact same way, because they each might use the same sort code that is presented in their textbook.  This is similar to two people writing an essay about the same exact topic, and having the same quotation them.  Sharing ideas is OK.  Using readily available “pieces” like sorting is OK.  Be assured though, sharing ideas and sorting routines would not yield identical programs.  Just as essays about the same topic with the same quotes aren’t identical - neither are programs.  The phrase "your own words", in the context of a history paper, is well understood - they give the paper you are writing a certain “fingerprint” that will be unique, based on your writing style, choices of words and sentence structure, etc.  Programming is exactly the same thing - everyone has a different way of structuring their code, writing their logic, etc.  To a novice, this "fingerprint" is subtle, often invisible.  To an experienced programmer, it's obvious.

Moving along, the “unique number” problem can be solved in many other ways as well - in fact the method I just discussed isn’t optimal.  A better way would be to grow the “unique” list as the user entered values - each time searching the list to see if the number was already added, and only adding to the list if it had not been present already.  An entirely different approach, and it's entirely likely two students could use the same approach.  It’s acceptable to share this idea, and even to copy some “search” code from lecture slides or an online resource.  Once again, two people using the same approach, with the same search code, will not turn in identical programs.

Be aware that there are also ways to solve this problem that immediately send up some red flags that you might be doing something that crosses the bounds of “fair use” and “your own words”.  Let’s say you were given this problem in a CS 1 course and turned in a solution that uses C++ templated STL maps to hold unique numbers which solves the problem more efficiently.  At Ramapo, we teach these concepts in later courses - it is more advanced than anything we do in CS 1.  If you turn in this program, I will conclude one of three things:

1.  **You’ve copied a solution off the internet, and you don’t even understand that the method used wasn’t discussed in class**.  In this case, I’ll likely be able to tell the difference, and you’ll get a 0.  Don’t do this.
2.  **You have received help from someone who is far more advanced at programming than is needed for CS 1**.  There is nothing terribly wrong with this, but if you don’t understand the code, you’ve done yourself an immense disservice.  It’s unlikely (but not unheard of) that I’ll ask you to stop by my office and quiz you on STL maps.  But if I did, and you didn’t know what they were and how they worked, you’ve cheated.  *I’ll call your bluff if I need to - know what you are turning in.*
3.  **You are an outstanding student and you’ve learned STL maps on your own to solve the problem**.  If this is the case, I’d expect you to be performing at a similar level on most of your assignments.  If you have a track record, I won’t even blink an eye - great job!  If you’ve been lost the entire semester, and one day turn in professional level code, you aren’t fooling anyone.  If you turn in professional-level homework solutions, but can’t write a basic program on exams, you aren’t fooling anyone either.

## Bottom Line:
Write your programs yourself.   **Period.**

There are an infinite number of programming problems I can give you.  If you find a complete solution online, it means someone has posted the solution to MY homework problem.  Turning it in is cheating, and you are exceptionally likely to be caught.  Same thing with getting a solution from a previous student… I have those solutions too.  If you are getting so much help from another student or friend that you can’t write the program alone if you had to, then you will fail the exams - you are just cheating yourself.  In all of my courses your exams are worth far more than homeworks - cheating on homework foolish, it doesn’t pay off.  
