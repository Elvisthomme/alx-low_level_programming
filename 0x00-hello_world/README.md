# Welcome to the Project: 0x00. C - Hello, World

## Concepts
> > For this project, students are expected to learn the basic of C language

## Resources
> > man or help:
- gcc
- printf (3)
- puts
- putchar

## Learning Objectives
> > After this project I am able to explain to anyone, without the help of Google:

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program


### Requirements

#### C: ####
* Allowed editors: vi, vim, emacs
* All the files can be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All the files end with a new line
* There are no errors and no warnings during compilation
* I am not allowed to use system
* My code is using the Betty style. It can be checked using betty-style.pl and betty-doc.pl

#### Shell Scripts: ####
* Allowed editors: vi, vim, emacs
* All my scripts can be tested on Ubuntu 20.04 LTS
* All my scripts are exactly two lines long ($ wc -l file should print 2)
* All my files end with a new line
* The first line of all my files are exactly #!/bin/bash



## Tasks

<h3 align='right'>mandatory</h3>

##### 0.proprocessor #####
>> This script runs a C file through the preprocessor and save the result into another file.

> * The C file name will be saved in the variable _$CFILE_
> * The output should be saved in the file c
> * File: [0-preprocessor][1]

##### 1.Compiler #####
> > This script compiles a C file but does not link.

> * The C file name will be saved in the variable _$CFILE_
> * The output file should be named the same as the C file, but with the extension .o instead of .c.
> * File: [1.compiler][2]

##### 2.Assembler #####
> > This script generates the assembly code of a C code and save it in an output file.

> * The C file name will be saved in the variable _$CFILE_
> * The output file should be named the same as the C file, but with the extension .s instead of .c.
> * File: [1.assembler][3]

##### 3.Name #####
> > This script compiles a C file and creates an executable named _cisfun_.

> * The C file name will be saved in the variable _$CFILE_
> * File: [3-name][4]

##### 4.Hello, puts #####
> > This program prints exactly _"Programming is like building a multilingual puzzle_, followed by a new line.

> * Use the function puts
> * I am not allowed to use printf
> * The program end with the value 0
> * File: [4-puts.c][5]

##### 5.Hello, printf #####
> > This C program prints exactly _with proper grammar, but the outcome is a piece of art,_, followed by a new line.

> * Use the function printf
> * I am not allowed to use the function puts
> * The program should return 0
> * The program compile without warning when using the -Wall gcc option
> * File: [5-printf.c][6]

##### 6. Size is not grandeur, and territory does not make a nation #####
> > This C program prints the size of various types on the computer it is compiled and run on.

> * It produce exactly this output
```bash
$ gcc 6-size.c -m32 -o size32 2> /tmp/32
$ gcc 6-size.c -m64 -o size64 2> /tmp/64
$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ echo $?
0
```
> * Warnings are allowed
> * The program return 0
> * You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc optionhh
> * File: [6-size.c][7]

<h3 align='right'>advanced</h3>

##### 7.Intel #####
> > This script generates the assembly code (Intel syntax) of a C code and save it in an output file.

> * The C file name will be saved in the variable _$CFILE_.
> * The output file should be named the same as the C file, but with the extension .s instead of .c.
> * File: [100-intel][8]

##### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity #####
> > This C program prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

> * I am not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
> * The program return 1
> * The program compile without any warnings when using the -Wall gcc option
> * File: [101-quote.c][9]

[1]: 0-preprocessor
[2]: 1-compiler
[3]: 2-assembler
[4]: 3-name
[5]: 4-puts.c
[6]: 5-printf.c
[7]: 6-size.c
[8]: 100-intel
[9]: 101-quote.c
