# Console Input Output file for GNU C
This is conio.h compatible header file for gcc. Tried and tested on ubuntu linux from 9.10 to 19.04

# How to implement?
You don't need to any special installation for this file.
Simply copy the 'conio.h' file to your 'include' directory.
e.g. sudo cp conio.h /usr/include

# Hint - installation copied from conio4gcc: 
sudo make install copies conio.h to the include directory.
sudo make uninstall removes conio.h from the include directory.

# Using Example
It will work without copying the conio.h to /usr/include
First compile the example file
`gcc example.c -o example`
Run the example
`./example`

# Using with GNU C++ (g++)
GNU C++ requires namespaces so you must enable them in the header file before using them. Please uncomment line number 54 and 207 in conio.h