Bit Manipulation in C
This repository contains a series of tasks for practicing bit manipulation in C. Each task involves writing a function to perform specific operations related to binary numbers and bit manipulation.

Task 0: Binary to Unsigned Int Conversion
File: 0-binary_to_uint.c
Description: Write a function that converts a binary number to an unsigned int.
Prototype: unsigned int binary_to_uint(const char *b);
Return: Converted number, or 0 if:
Any char in the string b is not 0 or 1.
b is NULL.
Task 1: Print Binary Representation
File: 1-print_binary.c
Description: Write a function that prints the binary representation of a number.
Prototype: void print_binary(unsigned long int n);
Restrictions: Do not use arrays, malloc, or % or / operators.
Task 2: Get Bit at Given Index
File: 2-get_bit.c
Description: Write a function that returns the value of a bit at a given index.
Prototype: int get_bit(unsigned long int n, unsigned int index);
Return: Value of the bit at index index or -1 if an error occurred.
Task 3: Set Bit at Given Index
File: 3-set_bit.c
Description: Write a function that sets the value of a bit to 1 at a given index.
Prototype: int set_bit(unsigned long int *n, unsigned int index);
Return: 1 if it worked, or -1 if an error occurred.
Task 4: Clear Bit at Given Index
File: 4-clear_bit.c
Description: Write a function that sets the value of a bit to 0 at a given index.
Prototype: int clear_bit(unsigned long int *n, unsigned int index);
Return: 1 if it worked, or -1 if an error occurred.
Task 5: Flip Bits
File: 5-flip_bits.c
Description: Write a function that returns the number of bits you would need to flip to get from one number to another.
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
Restrictions: Do not use % or / operators.
Advanced Task 6: Endianness Check
File: 100-get_endianness.c
Description: Write a function that checks the endianness.
Prototype: int get_endianness(void);
Return: 0 if big endian, 1 if little endian.
Advanced Task 7: Crackme3
File: 101-password
Description: Find the password for a program and save it in the file 101-password. The file should contain the exact password, no new line, no extra space.
