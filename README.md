# 🖨️ ft_printf

![42 Badge](https://img.shields.io/badge/42-ft__printf-brightgreen)
![Score](https://img.shields.io/badge/Score-100%2F100-success)
![Language](https://img.shields.io/badge/Language-C-blue)
![Status](https://img.shields.io/badge/Status-Completed-success)

<p align="center">
  <img src="https://raw.githubusercontent.com/byaliego/42-project-badges/main/badges/ft_printfe.png" alt="ft_printf Badge" width="150" height="150">
</p>

## 📝 Introduction

**ft_printf** is a 42 School project that involves recoding the famous C library function `printf()`. This project is an opportunity to discover variadic functions and improve code organization through a complex task.

> "By reimplementing printf, you'll learn about handling multiple types of arguments, string formatting, and precise memory management."

The primary goal is to create a function that mimics the behavior of the standard printf function, handling various format specifiers and conversion options.

## 🎯 Project Objectives

- Implement a function that formats and prints data to stdout
- Handle variable arguments in C
- Process multiple format specifiers
- Develop a robust string parsing mechanism
- Apply proper memory management techniques

## 📋 Function Prototype

```c
int ft_printf(const char *format, ...);
```

## ✅ Implemented Format Specifiers

| Specifier | Description | Example |
|-----------|-------------|---------|
| **%c** | Single character | `ft_printf("%c", 'X')` → `X` |
| **%s** | String of characters | `ft_printf("%s", "hello")` → `hello` |
| **%p** | Pointer address in hexadecimal | `ft_printf("%p", ptr)` → `0x7ffeeb9a52e0` |
| **%d** | Decimal (base 10) integer | `ft_printf("%d", 42)` → `42` |
| **%i** | Integer in base 10 | `ft_printf("%i", 42)` → `42` |
| **%u** | Unsigned decimal integer | `ft_printf("%u", 42)` → `42` |
| **%x** | Hexadecimal (base 16) lowercase | `ft_printf("%x", 42)` → `2a` |
| **%X** | Hexadecimal (base 16) uppercase | `ft_printf("%X", 42)` → `2A` |
| **%%** | Percent sign | `ft_printf("%%")` → `%` |

## 🧩 Project Structure

The project consists of three main files:

```
ft_printf/
├── Makefile
├── ft_printf.c       # Main implementation with helper functions
├── ft_printf_ptr.c   # Functions for handling pointer printing
└── ft_printf.h       # Header with prototypes and hex strings
```

## 🛠️ Code Explanation

### **ft_printf.h**
This header file includes:
- Function prototypes for all functions in the project
- Hexadecimal string definitions for lowercase and uppercase
- Standard library includes (`unistd.h`, `stdarg.h`)
- Custom `libft.h` library include

### **ft_printf_ptr.c**
Contains specialized functions for handling pointer arguments:

| Function | Description |
|----------|-------------|
| **ft_write_ptr** | Recursively writes a pointer's hexadecimal representation |
| **ft_print_ptr** | Manages pointer output formatting - prints "(nil)" for NULL or "0x" prefix followed by address |

### **ft_printf.c**
Contains the main function and helper functions:

| Function | Description |
|----------|-------------|
| **ft_print_hex** | Converts and prints unsigned integer in hexadecimal (lowercase or uppercase) |
| **ft_print_unsigned** | Handles printing of unsigned integers |
| **ft_is_format** | Analyzes format specifier and routes to appropriate handler function |
| **ft_printf** | Main function that parses format string and processes variable arguments |

## 🧠 Skills Developed

- Working with variadic functions in C
- Advanced string parsing and formatting
- Type conversion and handling
- Code organization in a modular structure
- Recursive implementation techniques
- Memory efficiency in string handling

---

<div align="center">
  
  ### 📊 Project Stats
  
  | Metric | Value |
  |--------|-------|
  | Final Score | 100/100 |
  | Format Specifiers | 9 |
  | Files | 3 |
  | Dependencies | libft |
  
</div>

<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/42-000000?style=for-the-badge&logo=42&logoColor=white" alt="42">
</p>
