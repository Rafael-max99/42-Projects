_This project has been created as part of the 42 curriculum by <rlaurean>._

# Description

The get_next_line project is a fundamental task at 42 that challenges students to create a function that reads a line from a file descriptor. The goal is to design a function that, when called in a loop, allows the user to read an entire text file one line at a time until the end of the file (EOF).

This project introduces the concept of static variables in C and focuses on efficient memory management, particularly handling the buffer size and potential memory leaks when dealing with multiple file descriptors.

# Instructions

Compilation
The function is designed to be compiled with a specific buffer size. You can compile your code using:
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c

Usage
To use get_next_line in your own project:

Include the header: #include "get_next_line.h"

Call the function in a loop:
char *line;
int fd = open("test.txt", O_RDONLY);

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}

# Algorithm Explanation & Justification

The core challenge of get_next_line is that the read() function might fetch more characters than needed for a single line (it reads up to BUFFER_SIZE).

The Static Variable Strategy
I chose to use a static char * variable as a persistent stash.

Reading: The function reads from the file descriptor into a temporary buffer.

Stashing: The content of the buffer is joined to the static variable.

Extraction: The algorithm searches for a newline character (\n) within the static stash.

If found: Everything up to the \n is returned as the line, and the remaining part is saved back into the static variable for the next call.

If not found: The function continues reading until a \n appears or EOF is reached.

Justification: This approach ensures that no data is lost between function calls. By using a static variable, the function "remembers" what it read previously, which is essential when the read() call pulls parts of the next line into the current buffer.

Handling Multiple File Descriptors
In the bonus version of the project, the challenge was to allow get_next_line to manage multiple file descriptors at the same time. For example, reading one line from fd 3, then one from fd 4, and then back to fd 3 without losing the reading thread of either.

The Implementation: Instead of a single static char *stash, I implemented an array of pointers using the file descriptor as the index:
static char *stash[FD_LIMIT];

Justification: This allows the function to store a unique "leftover" string for every possible file descriptor. When the function is called with a specific fd, it only accesses the data stored at stash[fd], ensuring total isolation between different files. I chose a fixed limit (usually 1024 or OPEN_MAX) as it is the most efficient way to access the data in $O(1)$ time complexity.

Updated "Features" Section
Dynamic Buffer: Works perfectly regardless of the BUFFER_SIZE value (from 1 to 1,000,000+).

Memory Efficiency: No global variables; only one static variable is used (per file descriptor).

Multi-FD Support (Bonus): Ability to read from different file descriptors interleaved without losing the reading position in any of them.

Clean Management: Properly handles EOF (End Of File) and empty files, ensuring all allocated memory is freed when no longer needed.

pdated "Instructions" for Bonus
To compile the bonus version, include the _bonus files:
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c main.c

# Resources
Unix System Calls: read, open, close documentation (man pages).

Static Variables in C: GeeksforGeeks - Static Variables.

42 Docs: Internal community documentation on memory management.

AI Usage Disclosure
For this project, AI was used in the following ways:

Code Optimization: AI was used to help debug a memory leak issue in the string concatenation logic (ft_strjoin modifications).

Documentation: I used AI to help structure this README and ensure the English grammar was professional and clear.

Logic Verification: I prompted an AI to explain the edge cases of static variables when handling multiple file descriptors (for the bonus part).

