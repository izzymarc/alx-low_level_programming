# 0x07. C - Advanced Pointers, Arrays, and Strings

This project explores deeper concepts of pointers, arrays, and string manipulations in C programming.

## Functions & Files:

- `0-memset.c`: A function to fill memory with a specific byte.
  
- `1-memcpy.c`: A function for copying a memory area.
  
- `2-strchr.c`: A function designed to locate a specific character within a string.
  
- `3-strspn.c`: A function that measures the length of the initial segment of a string that consists entirely of bytes in another string.
  
- `4-strpbrk.c`: A function that seeks out the first occurrence in a string where any byte matches any byte in another string.
  
- `5-strstr.c`: A function that identifies and locates a substring within a string.
  
- `7-print_chessboard.c`: A function to display a chessboard.
  
- `8-print_diagsums.c`: A function that calculates and prints the sums of the two main diagonals in a square matrix of integers.
  
- `100-set_string.c`: A function to set the value within a pointer pointing to a char.
  
- `main.h`: A header file containing the prototypes of the functions in the project.
  
- `_putchar.c`: Contains the implementation for the `_putchar` function.

## Advanced Task:

- **101-crackme_password**: Contains the password required for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
  - **Setup**:
    - Install the required `openssl` library:
      ```bash
      sudo apt install libssl-dev
      ```
    - Modify the source list:
      ```bash
      sudo vim /etc/apt/sources.list
      ```
    - Add the line: 
      ```bash
      deb http://security.ubuntu.com/ubuntu xenial-security main
      ```
    - Update and install necessary packages:
      ```bash
      sudo apt update && sudo apt install libssl1.0.0
      ```

**OR**

### Alternative Approach for Task 9:
1. Open the file:
   ```bash
   vi -b 101-crackme_password
   ```
2. Once inside the `vi` editor, without entering insert mode:
   - Execute `:set binary` 
   - Then `:set noeol` 
3. Now, enter insert mode (`i`) and input `abc123`.
4. Exit and save the changes: 
   ```bash
   esc :wq
   ```

Finally, you can proceed with git operations like `git add .` and others as needed.
