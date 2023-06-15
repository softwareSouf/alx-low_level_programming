### I/O System Calls and File Descriptors
This project involves creating functions that interact with files using the I/O system calls: open, close, read, and write. It also requires an understanding of file descriptors, which are integer values that refer to open files.

### Learning Objectives
By the end of this project, you should be able to:

### Explain what file descriptors are and how they work
Describe the purpose of the three standard file descriptors (stdin, stdout, stderr) and their POSIX names
Use the open, close, read, and write system calls to create, open, close, read, and write files
Understand the flags O_RDONLY, O_WRONLY, and O_RDWR
Set file permissions when creating a file with open
Explain what a system call is and how it differs from a function
### Requirements
All code should follow the Betty style and pass the betty-style.pl and betty-doc.pl checks
Code should be compiled using gcc and the flags -Wall -Werror -Wextra -pedantic -std=gnu89
No global variables should be used
Only malloc, free, and exit from the C standard library are allowed
Allowed system calls are read, write, open, and close
Only up to 5 functions are allowed per file
A README.md file is required at the root of the project directory
The README.md file should include a description of the project, learning objectives, and any instructions necessary to run the code
A header file main.h is required with prototypes for all functions and the _putchar function
All header files should have include guards
Symbolic constants (POSIX) should be used where applicable
Files
The following files are required for this project:

### Mandatory
0-read_textfile.c: A function that reads a text file and prints it to the standard output
1-create_file.c: A function that creates a file with specified permissions
2-append_text_to_file.c: A function that appends text to the end of a file
3-cp.c: A program that copies the content of one file to another file
### Advanced
100-elf_header.c: A program that displays the information contained in the ELF header of an ELF file
main.h: Header file with function prototypes and _putchar prototype
How to Use
To use the functions and program in this project, follow these steps:

### Clone the repository
Compile the files using gcc and the required flags
Run the program or use the functions as desired
Clean up using the make clean command
For example, to compile and run the 0-read_textfile.c function:

### shell
Copy code
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-read_textfile.c -o readfile
$ ./readfile file.txt
This will print the contents of file.txt to the standard output.

### Authors
This project was created by me  for the Holberton School curriculum.
