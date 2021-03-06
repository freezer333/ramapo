# CMPS 311 - Operating Systems - Spring 2020
**Meeting Time:** &nbsp;&nbsp;Mondays and Thursdays, 11:20am - 1:00pm

**Location:**  &nbsp;&nbsp;G-301
**Professor:**&nbsp;&nbsp;Scott Frees, Professor of Computer Science
** Contact Information**
Office&nbsp;&nbsp;G315
Phone&nbsp;&nbsp;(201) 684-7726
Email&nbsp;&nbsp;[sfrees@ramapo.edu](mailto:sfrees@ramapo.edu)
Office Hours &nbsp;&nbsp;Mondays and Thursdays 4-5pm and by appointment

## Course Description
A study of the design, use, and analysis of operating systems. The course will include a study of the supportive computer architecture, memory management, process management, information management, device control, operating systems structure, and evaluation.  

## Pre-Requisites
CMPS 231 Data Structures, CMPS 220 Assembly Language Programming, and MATH 237 Discrete Structures, CRWT 102 Crit. Reading & Writing 2

## Course Materials
**Textbook** &nbsp;&nbsp; [Modern Operating Systems (4th Edition)](http://www.amazon.com/Modern-Operating-Systems-4th-Edition/dp/013359162X) by Andrew S. Tanenbaum, Herbert Bos. *Note, the textbook is required for this course, and will be relavent to nearly each lecture.*
<img src='http://ecx.images-amazon.com/images/I/51dqadCuRiL._SX390_BO1,204,203,200_.jpg' width="200"/>
<hr class="print-page"/>

**You may use an electronic, rented, used, or new copy of the text book.  We will not be using any of the additional/bonus material associated with the purchase of a new textbook.  However, please make sure you have the 4th Edition!**

## Required Programming Environment
**Attention Microsoft Windows Users** - while we will touch upon the Win32 API, the vast majority of the programming you will do in this course will require you to write C and C++ code targeting the POSIX API, which is supported by MacOS and Linux.  You will absolutely be required to program in the POSIX environment, so if you do not currently use MacOS or Linux, you'll need to create an environment.  

If you are using Windows, you can install Linux alongside Windows without too much trouble.  You have a few options:

1. You could configure your computer to dual-boot into Windows or Linux.  This is an advanced option - please do so at your own risk!  I'd recommend using either Ubuntu or Linux Mint for easy installation.  I've provided some additional info on this [here](linux_install.html).
2. You could install Linux in a Virtual Machine, such as Virtual Box.  Again, you may choose any Linux distribution but I'd recommend Ubuntu or Mint if you are unfamiliar with Linux.
3.  The least invasive option, if you are using Windows 10, is to work with [Windows Subsystem for Linux](https://docs.microsoft.com/en-us/windows/wsl/about).  There is some helpful information  [here](https://docs.microsoft.com/en-us/windows/wsl/install-win10) on setting it up.

**Under no circumstance will late or incomplete work be accepted because you have failed to set up a viable POSIX programming environment**.  It is your responsibility to ensure you have access to either a Mac or Linux environment, and to know how to work with it.  I will help you, ask questions... and bring your laptop to office hours - **but you must be proactive**.

## Course Objectives
* Understand and Program Processes & Threads
* Understand and Evaluate Scheduling / Synchronization / Deadlock algorithms
* Understand Memory Management and Paging Systems used in a typical OS
* Understand and Program with File Systems and understand their implementation
* Understand Security issues involved with an OS
* Understand and evaluate different problems associated with Distributed Systems and Networking
* Understand modern OS directions and trends

<hr class="print-page"/>
## Lecture Schedule
Below is a tentative schedule for the course.  All topics and due dates are subject to change, based on our pace and possible College closing due to weather, etc.

**You must keep up with the readings** associated with each lecture.  

<div style="margin:0px;padding:0px;overflow:hidden">
    <iframe src="https://docs.google.com/spreadsheets/d/e/2PACX-1vQNUofDH6_I_L0noTcBD5N5bIe_fTmSpbsHTGsrKHKLLxo1-QciHvTCBVIs6AAW6HMhjIOpCLJ_jEED/pubhtml?gid=0&single=true" frameborder="0" style="overflow:hidden;overflow-x:hidden;overflow-y:hidden;height:1200px;width:100%;" height="100%" width="100%"></iframe>
</div>
<hr class="print-page"/>
<a name="modules"></a>

## Code Examples
Click [here](code/) for source code discussed in lectures throughout the semester.

## Printable Slides
Click [here](slides_pdf/) for PDF versions of the module slides for printing.


## Homework Assignments
Homework assignments are worth 100 points, and are turned in electronically, on Canvas.

* [Homework 1](hw/hw1)  - Due on 2/10/20
* [Homework 2](hw/hw2)  - Due on 2/13/20
* [Homework 3](hw/hw3)  - Due on 2/20/20
* [Homework 4](hw/hw4)  - Due on 3/12/20
* [Homework 5](hw/hw5)  - Due on 4/9/20

<hr class="print-page"/>

## Written Report (WI Component)
Writing will be integrated into the life of this course. You will receive comments, direction, and support as you work on strengthening your writing skills. Your writing will be evaluated and returned in a timely fashion, allowing you to incorporate my comments into your future work. For help outside the classroom, please see me during my office hours and/or work with a writing tutor in the Center for Reading and Writing (CRW), Room: L-211, x7557, crw@ramapo.edu.

You will write a written report on the history, evolution, and design of ONE of the following major operating systems in use today:

* Microsoft Windows
* Apple MacOS
* Linux
* Google Android
* Apple iOS

The paper will technical aspects of the platforms, but largely focus on the its history and development.  While technical details are must (for example, what type of filesystem does the OS use?), your efforts on this report should be directed on clearly articulating where the operating system came from (did it evolve from something else?), how it became what it is today (were there any releases that were failures, spectacular successes?), and where it is headed (is it on its way out, or is it primed to take over the world?).

* A first draft is due on **4/1/2020**.  This draft is expected to be a complete paper, and you will be graded on its quality.  I will offer advice for revisions.
* **Your final draft is due the last day of class (before finals)**.  Your grade is based on the quality of your writing, the depth in which you covered the subject, and how you responded to revision requests from your first draft.

## Late Policy
All assignments will be turned in electronically.  A late penalty of 5 points per day will be applied to all late assignments.  The required format/method of your electronic submissions will be outlined for each assignment.  Deviation from these requirements may result in a 5-point penalty.  

## Grading
| % | Activity
|------------------:|:---------------
|60%|Quizzes (20%, 20%, 20%)
|25%|Final Exam
|10%|Homework
|5%|Written Report (WI Requirement)

## Academic Integrity
Students are expected to read and understand Ramapo College’s Academic Integrity Policy, which can be found in the Ramapo College Catalog.  Members of the Ramapo College community are expected to be honest and forthright in their academic endeavors.  Students who are suspected of violating this policy will be referred to the Office of the Provost.

### ACADEMIC INTEGRITY SPECIFIC TO THIS COURSE  
For programming assignments (Homework Assignments), you may discuss ideas, however you may not allow others to see your source code or examine others’.  Sharing of source code is extremely easy to detect and is strictly prohibited.  

IF SHARING OF SOURCE CODE IS SUSPECTED, INTENTIONAL OR OTHERWISE, BOTH PARTIES WILL IMMEDIATELY BE REFERRED TO THE OFFICE OF THE PROVOST.

## Make-Up Exam Policy
Make-ups will not be given for the exams given during the semester.  Failure to attend class on those days will result in a zero.  Make-ups will only be given in extraordinary circumstances (college approved absence) such as a documented medical or religious absence.

## College-Wide Policies
Please see the College’s web page on policies that apply to all RCNJ courses, including this one.
https://www.ramapo.edu/fa/arc/college-wide-policies-courses

## Electronic Forms of Communication  
In accordance with College policy, I will use your Ramapo College email address (@ramapo.edu) to communicate with you about all course-related matters.
