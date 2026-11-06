*This project has been created as part of the 42 curriculum by anel-kam.*

# Libft

## Description

Libft is the first project of the 42 curriculum. Its goal is to recreate a collection of standard C library functions and additional utilities to build a reusable personal library.

This project introduces fundamental concepts such as memory management, pointers, strings, and linked lists.

## Instructions

### Compilation

```bash
make        # Compile functions
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

The project generates `libft.a`, a static library.

### Usage

Include the header in your C source file:

```c
#include "libft.h"
```

Compile the program with the library:

```bash
cc main.c -L. -lft -o program
```

## Library Contents

Libft contains the following function categories:

| Category | Functions |
|---|---|
| Character | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| String | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi`, `ft_itoa` |
| File descriptors | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Linked lists | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

The library provides reusable implementations of these functions, with particular attention to correct behavior, memory allocation, and memory safety.

## Resources

- [C Reference](https://www.geeksforgeeks.org/)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- 42 Intra and project subject.

### AI Usage

AI was used as a learning assistant to understand C concepts. It also helped clarify compilation and Makefile concepts.

---

**Language:** C | **Compiler:** CC | **Build:** Makefile | **Library:** `libft.a`
