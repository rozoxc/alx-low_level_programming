# libdynamic

## Overview

`libdynamic` is a dynamic library containing various utility functions. These functions provide common operations on characters, strings, and arrays. The library is designed to be linked dynamically at runtime, offering flexibility and code reuse across different programs.

## Functions

- `int _putchar(char c)`: Writes a character to the standard output.

- `int _islower(int c)`: Checks if a character is lowercase.

- `int _isalpha(int c)`: Checks if a character is alphabetic.

- `int _abs(int n)`: Computes the absolute value of an integer.

- `int _isupper(int c)`: Checks if a character is uppercase.

- `int _isdigit(int c)`: Checks if a character is a digit.

- `int _strlen(char *s)`: Computes the length of a string.

- `void _puts(char *s)`: Writes a string to the standard output.

- `char *_strcpy(char *dest, char *src)`: Copies a string.

- `int _atoi(char *s)`: Converts a string to an integer.

- `char *_strcat(char *dest, char *src)`: Concatenates two strings.

- `char *_strncat(char *dest, char *src, int n)`: Concatenates n characters of two strings.

- `char *_strncpy(char *dest, char *src, int n)`: Copies n characters of a string.

- `int _strcmp(char *s1, char *s2)`: Compares two strings.

- `char *_memset(char *s, char b, unsigned int n)`: Sets n bytes of a memory area to a specific value.

- `char *_memcpy(char *dest, char *src, unsigned int n)`: Copies n bytes from source to destination.

- `char *_strchr(char *s, char c)`: Locates the first occurrence of a character in a string.

- `unsigned int _strspn(char *s, char *accept)`: Computes the length of a prefix substring.

- `char *_strpbrk(char *s, char *accept)`: Searches a string for any of a set of bytes.

- `char *_strstr(char *haystack, char *needle)`: Locates a substring in a string.

## Usage

To use `libdynamic` in your program, you need to link it dynamically at runtime. Include the header file `dynamic.h` in your source code, and link with the library during compilation.

```c
#include "dynamic.h"

int main() {
    // Your code using functions from libdynamic
    _putchar('A');
    return 0;
}

