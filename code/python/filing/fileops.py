#!/usr/bin/python

import os

# make directories
def makedirs():
    if os.path.exists("example-dir") == False:
        os.mkdir("example-dir")
        os.mkdir("example-dir/sub-dir1")
        os.mkdir("example-dir/sub-dir2")

# create new file by opening file using mode x
def createfile():
    if os.path.isfile("example-dir/example-data.csv") == False:
        new_csv_file = open("example-dir/example-data.csv", "x")

# print directory and content 
def contentofdir():
    print(os.getcwd())
    print(os.listdir())

# Automatic Resource Handling - Context Manager mit with (no file.close() necessary)
def readwritefile():
    with open("firstfile.txt", 'w', encoding='utf-8') as textfile:
        textfile.write("First Line\n")
        textfile.write("Second Line ... ends here!\n")

# readline and writeline usage and walross operator
def readwritelines():
    with open("secondfile.txt", 'w', encoding='utf-8') as textfile:
        textfile.writelines(["First Line\n", "Second Line ... ends here!\n"])

# read content as lines
def readlines():
    file = open("secondfile.txt", encoding='utf-8')
    # use readline and use Walross-Operator :=
    count: int = 1
    while line_content := file.readline():
        print("Line", count, ":", line_content, end ="")
        count += 1

    file.close()



if __name__ == '__main__':
    print("hellodir")

    # create directories 
    makedirs()

    # create file
    createfile()

    # change directory
    os.chdir("example-dir")

    # what is our current directory
    contentofdir()

    # read and write file
    readwritefile()

    # readline and writeline 
    readwritelines()

    # readline 
    readlines()