_This project has been created as part of the 42 curriculum by <rlaurean>._

# Description
The ft_printf project is a fundamental challenge at 42 that requires us to recode the libc's printf function. The goal is to mimic the behavior of the original function, handling various format specifiers and managing variable arguments using the stdarg.h library.

This version includes the Bonus features, allowing for advanced formatting through flags, field width, and precision. The final output is a library (libftprintf.a) that provides a robust and versatile tool for formatted output in C.

Supported Specifiers:
%c, %s, %p, %d, %i, %u, %x, %X, %%.

Bonus Features (Flags & Formatting)
This implementation handles any combination of the following:

Flags: -, 0, ., #, (space), and +.

Field Width: Minimum number of characters to be printed.

Precision: Specific behavior for strings (max length) and integers (minimum digits).

# Instructions
Compilation
The Makefile handles the compilation of both mandatory and bonus parts:

Compile the library: make

Usage
#include "ft_printf.h"

int main()
{
    // Example using bonus flags:
    ft_printf("Hex with prefix: %#x\n", 255);        // Output: 0xff
    ft_printf("Signed int with space: % d\n", 42);   // Output:  42
    ft_printf("Padded with zeros: %05d\n", 42);      // Output: 00042
    return (0);
}

# Algorithm and Data Structures
The Algorithm: Parsing State Machine
Because of the bonus requirements, a simple if/else dispatch is insufficient. I implemented a State Machine-style Parser:

Parsing Structure: When a % is found, the function enters a parsing loop that extracts:

Flags: Sets boolean values in a formatting struct.

Width/Precision: Converts numeric strings into integers to define padding rules.

Specifier: Identifies the final conversion type.

Formatting Logic: Before printing, the code calculates the "actual" length of the data versus the "requested" width.

It applies Precision first (adding leading zeros to numbers or truncating strings).

It then applies Width (adding spaces or zeros as padding).

It handles Flag Priority (e.g., - overrides 0, and + overrides space).

Modular Output: Each specifier has a dedicated function that receives the struct containing all active flags, ensuring the logic remains clean and debuggable.

Data Structures
The Config Struct: To manage the bonus complexity, I used a struct to store the state of the flags.

# Resources
Documentation & Articles
Secrets of Printf - A deep dive into the internal logic of the function.

C Programming - stdarg.h - Official reference for variadic macros.

IEEE Std 1003.1 printf - Formal specifications for flags and width.

AI Usage
I utilized AI (specifically Gemini) for the following tasks:

Bonus Logic Structuring: Helping design the struct and the priority hierarchy of flags (e.g., how 0 is ignored when a - or precision is present in certain types).

Complex Formatting Debugging: Generating edge-case test tables for combined flags like %#010x.

Refactoring: Suggesting ways to reduce the cyclomatic complexity of the parsing function to stay within the 42 Norm requirements.
