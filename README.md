*This project has been created as part of the 42 curriculum by
meljanat.*

# Description

Libft is a C library created as part of the 42 curriculum. Its goal is
to recreate a set of standard C library functions and implement
additional utility functions, providing a reusable library for future C
projects.

The project is divided into three parts:

1.  **Libc functions:** reimplementations of selected standard C library
    functions, using the `ft_` prefix.
2.  **Additional functions:** string manipulation, integer conversion,
    callback-based string operations, and output functions.
3.  **Linked lists:** functions for creating, modifying, traversing, and
    deleting singly linked lists.

# Instructions

## Compilation

The library is built at the root of the repository as `libft.a`.

Run the following commands from the repository root:

``` sh
make
```

The Makefile must compile the source files with `cc` and the flags
`-Wall -Wextra -Werror`, and create the static library using `ar`.

Available Makefile rules:

``` sh
make        # Build the library
make all    # Build the library
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Rebuild the library
```

## Using the library

Include the library header in your C source file:

``` c
#include "libft.h"
```

Compile your program with the library:

``` sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run it:

``` sh
./program
```

# Resources

## References

-   The `man` pages for the corresponding standard C library and system
    functions.
-   The GNU C Library documentation:
    https://www.gnu.org/software/libc/manual/
-   The Linux manual pages: https://man7.org/linux/man-pages/
-   The Open Group Base Specifications:
    https://pubs.opengroup.org/onlinepubs/9699919799/

## AI usage

AI was used as a learning and support tool to explain C concepts related
to the project, clarify function behavior and memory management, and
review implementation details for potential issues. The explanations and
review covered the mandatory functions and the linked-list operations.
The implementation and understanding of the code remain the learner's
responsibility.

# Library Description

## Part 1 --- Libc functions

These functions reproduce the behavior of selected standard C library
functions under the `ft_` prefix.

  -----------------------------------------------------------------------
  Function                            Description
  ----------------------------------- -----------------------------------
  `ft_isalpha`                        Checks whether a character is
                                      alphabetic.

  `ft_isdigit`                        Checks whether a character is a
                                      decimal digit.

  `ft_isalnum`                        Checks whether a character is
                                      alphabetic or a decimal digit.

  `ft_isascii`                        Checks whether a value is an ASCII
                                      character.

  `ft_isprint`                        Checks whether a character is
                                      printable.

  `ft_strlen`                         Calculates the length of a string.

  `ft_memset`                         Fills a memory area with a
                                      specified byte.

  `ft_bzero`                          Sets a memory area to zero.

  `ft_memcpy`                         Copies a specified number of bytes
                                      between memory areas.

  `ft_memmove`                        Copies bytes between memory areas,
                                      including overlapping areas.

  `ft_strlcpy`                        Copies a string into a destination
                                      buffer of a specified size.

  `ft_strlcat`                        Appends a string to a destination
                                      buffer of a specified size.

  `ft_toupper`                        Converts a lowercase letter to
                                      uppercase.

  `ft_tolower`                        Converts an uppercase letter to
                                      lowercase.

  `ft_strchr`                         Locates the first occurrence of a
                                      character in a string.

  `ft_strrchr`                        Locates the last occurrence of a
                                      character in a string.

  `ft_strncmp`                        Compares two strings up to a
                                      specified number of characters.

  `ft_memchr`                         Locates the first occurrence of a
                                      byte in a memory area.

  `ft_memcmp`                         Compares two memory areas byte by
                                      byte.

  `ft_strnstr`                        Locates a substring within a
                                      string, searching at most a
                                      specified number of bytes.

  `ft_atoi`                           Converts the initial portion of a
                                      string to an integer.

  `ft_calloc`                         Allocates memory for an array and
                                      initializes the allocated bytes to
                                      zero.

  `ft_strdup`                         Allocates and returns a duplicate
                                      of a string.

  -----------------------------------------------------------------------

## Part 2 --- Additional functions

  -----------------------------------------------------------------------
  Function                            Description
  ----------------------------------- -----------------------------------
  `ft_substr`                         Allocates and returns a substring
                                      starting at a given index, with a
                                      maximum length.

  `ft_strjoin`                        Allocates and returns the
                                      concatenation of two strings.

  `ft_strtrim`                        Allocates and returns a copy of a
                                      string with specified characters
                                      removed from its beginning and end.

  `ft_split`                          Splits a string using a delimiter
                                      and returns a NULL-terminated array
                                      of independently allocated strings.

  `ft_itoa`                           Allocates and returns a string
                                      representing an integer, including
                                      negative numbers.

  `ft_strmapi`                        Applies a function to each
                                      character of a string, passing its
                                      index and character, and stores the
                                      results in a new string.

  `ft_striteri`                       Applies a function to each
                                      character of a string, passing its
                                      index and the character's address
                                      so it can be modified.

  `ft_putchar_fd`                     Writes a character to a specified
                                      file descriptor.

  `ft_putstr_fd`                      Writes a string to a specified file
                                      descriptor.

  `ft_putendl_fd`                     Writes a string followed by a
                                      newline to a specified file
                                      descriptor.

  `ft_putnbr_fd`                      Writes an integer to a specified
                                      file descriptor.

  -----------------------------------------------------------------------

## Part 3 --- Linked lists

The linked-list functions use the following node structure:

``` c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

The `content` member stores a pointer to the node's data. The `next`
member points to the next node, or to `NULL` when the node is the last
one.

  -----------------------------------------------------------------------
  Function                            Description
  ----------------------------------- -----------------------------------
  `ft_lstnew`                         Allocates and returns a new node
                                      containing the supplied content,
                                      with `next` initialized to `NULL`.

  `ft_lstadd_front`                   Adds a node at the beginning of a
                                      list.

  `ft_lstsize`                        Counts and returns the number of
                                      nodes in a list.

  `ft_lstlast`                        Returns the last node of a list.

  `ft_lstadd_back`                    Adds a node at the end of a list.

  `ft_lstdelone`                      Deletes a node's content using a
                                      supplied deletion function, then
                                      frees the node without deleting its
                                      successor.

  `ft_lstclear`                       Deletes and frees a node and all
                                      its successors using a supplied
                                      deletion function, then sets the
                                      list pointer to `NULL`.

  `ft_lstiter`                        Applies a supplied function to the
                                      content of each node in a list.

  `ft_lstmap`                         Applies a supplied function to each
                                      node's content and creates a new
                                      list from the results. The supplied
                                      deletion function is used to clean
                                      up content when needed.

  -----------------------------------------------------------------------
