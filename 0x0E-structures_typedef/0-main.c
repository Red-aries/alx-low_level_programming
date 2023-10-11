
We're moving to Discord!
In a few days, we will be leaving Slack in favor of Discord 🎉
Click here for more information
0x0E. C - Structures, typedef
C
 By: Julien Barbier
 Weight: 1
 Ongoing second chance project - started Oct 9, 2023 6:00 AM, must end by Oct 11, 2023 6:00 AM
 An auto review will be launched at the deadline
In a nutshell…
Auto QA review: 0.0/44 mandatory
Altogether:  0.0%
Mandatory: 0.0%
Optional: no optional tasks


Resources
Read or watch:

0x0d. Structures.pdf
struct (C programming language)
Documentation: structures
0x0d. Typedef and structures.pdf
typedef
Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
The Lost Art of C Structure Packing (Advanced - not mandatory)
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are structures, when, why and how to use them
How to use typedef
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are printf, malloc, free and exit.
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
Don’t forget to push your header file
All your header files should be include guarded
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Poppy
mandatory
Score: 0.0% (Checks completed: 0.0%)


Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
