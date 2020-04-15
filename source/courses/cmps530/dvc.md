# What is DVC?
DVC stands for "Data Version Control".  It serves a number of purposes - first and formost to keep track of data sets being shared among teams of people.  It's pretty much like `git`, but for data files - as `git` doesn't work all that well with large files (anything above 2GB, for example, is not supported by Github).

DVC provides a myriad of features for creating workflows and pipelines - particularly aimed at solving common problems when working on Machine Learning tasks.  You may end up using DVC more extensively in future courses - however in this course we will use it in a very simple way.  

I will use DVC to distribute data sets to you.

## DVC Installation
[Download and Install DVC](https://dvc.org/doc/install)

The installer for DVC is straightforward for Windows, MacOS, and Linux.  Please simply follow the instructions on the website.  I recommend using the standalone installer, rather than installing using `conda` or `pip`.

## AWS CLI
DVC allows you to acquire data sets from remote repositories.  Throughout the semester I will generally put all of our data sets on an Amazon Web Services S3 bucket.  In order to access this, you will need to install the Amazon Web Services (AWS) Command Line Interface (CLI).

[Download and Install AWS CLI](https://aws.amazon.com/cli/)

After you install the CLI, you must configure it with specific access keys and location information.  I have created read-only access keys for our course, **the access key can be found on Canvas**.  Enter `us-east-2` for region, and `json` for output format.

```
>  aws configure
AWS Access Key ID [None]:      <enter access key ID>
AWS Secret Access Key [None]:  <enter secret access key>
Default region name [None]:    us-east-2
Default output format [None]:  json
```

## Using DVC
I will distribute all of our weekly projects, assignments, and exams via `git` repositories.  In some cases, the repositories will have almost nothing in them - other than the project description and `.dvc` files for data sets.  In early projects, I'll provide some code for you as well.

`.dvc` files are what DVC uses to track data set files.  In addition, there will be a `.dvc` directory, which holds critical information such as *where* DVC gets the data from (in our case, an AWS S3 bucket).  Since your projects will already have these files in them when I distribute (or more accurately, when you clone the `git` repository), you just need to run `dvc pull` from the repositories directory to acquire the data.

```
dvc pull
```

You won't be pushing/publishing data - so for this class, this is all you need.





