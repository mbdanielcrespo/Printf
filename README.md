# **ft_printf: A Recreation of the printf Function**
## **Project Overview**
This project is a recreation of the printf function, a commonly used output function in C. The function is part of the standard library and is used for formatted output to the screen. The recreated function, named ft_printf, mimics the behavior of the original printf function to a certain degree.
The project is a part of the curriculum at 42 school.

## **Code Explanation**
The project consists of three main files: **'ft_printf_ptr.'**, **'ft_printf.h'**, and **'ft_printf.c'**.

### **ft_printf.h**
This is the header file for the project. It includes the function prototypes and necessary preprocessor directives for the project. The file defines two hexadecimal strings for lower and upper case hexadecimal numbers. It also includes the standard libraries needed for the project, such as unistd.h and stdarg.h, and the custom library libft.h.

### **ft_printf_ptr.c**
This file contains two functions, ```ft_write_ptr``` and ```ft_print_ptr```, which are used to handle pointer type arguments in the ```ft_printf``` function.

* ```ft_write_ptr```: This function recursively writes the hexadecimal representation of a pointer address. It uses a base of 16 and writes the hexadecimal characters to the output.

* ```ft_print_ptr```: This function handles the printing of pointer addresses. If the pointer is null, it prints "(nil)". Otherwise, it prints the hexadecimal representation of the pointer address, prefixed with "0x".

### **ft_printf.c**
This file contains the main function ft_printf and several helper functions.

* ```ft_print_hex```: This function prints an unsigned integer in hexadecimal format. It supports both lower case ('x') and upper case ('X') formats.

* ```ft_print_unsigned```: This function prints an unsigned integer.

* ```ft_is_format```: This function checks the format specifier and calls the appropriate function to handle the argument. It supports 'c', 's', 'i', 'u', 'd', 'x', 'X', '%', and 'p' format specifiers.

* ```ft_printf```: This is the main function. It takes a format string and a variable number of arguments. It iterates over the format string and prints the arguments as per the format specifiers. It returns the number of characters printed.

## Usage
To use the ft_printf function, include the **'ft_printf.h'** header file in your C program. Then, you can call the function in the same way as the standard printf function. The function supports the following format specifiers: 'c', 's', 'i', 'u', 'd', 'x', 'X', '%', and 'p'.

## Note
This project uses some functions from the libft library, a custom library created as part of the 42 school curriculum. The library includes some of the most important basic functions in C. The project also includes a Makefile for easy compilation of the code.
