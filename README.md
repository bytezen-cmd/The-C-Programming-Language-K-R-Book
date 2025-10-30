# C Programming Exercises

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![K&R](https://img.shields.io/badge/Reference-K%26R%20C-orange.svg)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
[![Standard: C99](https://img.shields.io/badge/Standard-C99-green.svg)](https://en.wikipedia.org/wiki/C99)

A comprehensive collection of C programming exercises demonstrating fundamental concepts from *The C Programming Language* (K&R) and classical systems programming paradigms. These implementations explore character processing, text manipulation, data structures, and algorithmic techniques fundamental to systems-level programming.

## 📚 Table of Contents

- [Quick Start](#quick-start)
- [Programs Overview](#programs-overview)
- [Building and Running](#building-and-running)
- [Usage Examples](#usage-examples)
- [Learning Resources](#learning-resources)
- [Contributing](#contributing)
- [License](#license)

## Quick Start

```bash
# Clone the repository
git clone <repository-url>
cd c-programming-exercises

# Compile a program
gcc -std=c99 -Wall -o hello hello.c

# Run it
./hello

# Or with input redirection
echo "test input" | ./program_name
```

## Programs Overview

### 🔤 Character and String Processing

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **literal_space.c** | Converts tabs, backspaces, and backslashes to visible escape sequences | ⭐ Beginner | Character escaping, special character handling |
| **space_corrector.c** | Removes consecutive spaces, preserving only single spaces | ⭐ Beginner | State tracking, character comparison |
| **one_word_per_line.c** | Prints each word on a separate line | ⭐⭐ Intermediate | Finite state machine (IN/OUT states) |
| **b-t-n-counter.c** | Counts blanks, tabs, and newlines in input | ⭐ Beginner | Character classification, counter variables |
| **word_counter.c** | Counts lines, words, and characters | ⭐⭐ Intermediate | Multi-state tracking, concurrent counters |

### 📏 Line and Text Manipulation

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **longest-line.c** | Finds and displays the longest line from input (max 1000 chars) | ⭐⭐ Intermediate | Array manipulation, string copying |
| **longer_than_80.c** | Prints only lines exceeding 80 characters | ⭐⭐ Intermediate | Line buffering, length validation |
| **remTrail.c** | Removes trailing whitespace from lines | ⭐⭐ Intermediate | Backward iteration, string trimming |
| **reverseS.c** | Reverses each line of input (max 1000 characters per line) | ⭐⭐⭐ Advanced | String reversal algorithm, buffer management |
| **fold.c** | Folds long lines at 80 characters, breaking at word boundaries | ⭐⭐⭐ Advanced | Buffer management, word boundary detection |

### 🔧 Code Processing Tools

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **commentRemover.c** | Removes both single-line (//) and multi-line (/* */) comments from C code | ⭐⭐⭐ Advanced | Lookahead parsing, nested state machines |
| **1-24.c** | Syntax checker: verifies balanced parentheses, brackets, and braces | ⭐⭐⭐⭐ Expert | Syntax validation, nested state tracking |
| **detab.c** | Replaces tabs with appropriate number of spaces (tab stops every 8 characters) | ⭐⭐ Intermediate | Tab expansion algorithm, position tracking |
| **entab.c** | Replaces sequences of spaces with tabs where appropriate | ⭐⭐⭐ Advanced | Tab compression, modular arithmetic |

### 📊 Data Visualization

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **character_frequency.c** | Creates a vertical histogram showing frequency of letters a-z | ⭐⭐⭐ Advanced | Array frequency counting, vertical display algorithm |
| **vertical_word_length_histogram.c** | Displays a vertical histogram of word lengths (supports words up to 50 chars) | ⭐⭐⭐⭐ Expert | Multi-pass algorithm, data visualization |

### 🌡️ Temperature Conversion

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **temperature.c** | Fahrenheit to Celsius conversion table (0°F to 300°F) | ⭐ Beginner | Basic loops, floating-point arithmetic |
| **c-f_table.c** | Celsius to Fahrenheit conversion table | ⭐ Beginner | Inverse conversion formula |
| **temp_reverse.c** | Temperature table in reverse order (300°F down to 0°F) | ⭐ Beginner | Descending loops |
| **function_temperature.c** | Temperature conversion using function abstraction | ⭐⭐ Intermediate | Function design, modularity principles |

### 🔢 Data Type and Numeric Operations

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **2-1.c** | Displays ranges of various data types using both `<limits.h>` and manual calculation | ⭐⭐ Intermediate | Type ranges, limits.h, pow() function |
| **2-2.c** | Alternative loop implementation without && or \|\| operators | ⭐⭐ Intermediate | Boolean arithmetic, operator alternatives |
| **2-3.c** | Hexadecimal to integer converter (handles 0x/0X prefix) | ⭐⭐⭐ Advanced | Base conversion, character-to-digit mapping |
| **2-4.c** | String squeeze function: removes all chars in s2 from s1 | ⭐⭐ Intermediate | String manipulation, strchr() usage |
| **2-5.c** | Returns first location where any char from s2 appears in s1 | ⭐⭐ Intermediate | String searching, nested iteration |
| **3-2.c** | Escape/unescape special characters (\\n, \\t) | ⭐⭐ Intermediate | String transformation, escape sequences |
| **3-3.c** | Expands shorthand notations like a-z to full character ranges | ⭐⭐⭐ Advanced | Range expansion, character sequences |
| **3-4.c** | Improved itoa() that handles INT_MIN correctly | ⭐⭐⭐ Advanced | Two's complement, edge case handling |
| **3-5.c** | Converts integer to string representation in any base | ⭐⭐⭐ Advanced | Base conversion, recursion alternative |
| **3-6.c** | itoa() with minimum field width (padding with zeros) | ⭐⭐ Intermediate | Field width formatting, string padding |

### 🔀 Bit Manipulation

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **2-6.c** | Sets n bits of x at position p to rightmost n bits of y | ⭐⭐⭐ Advanced | Bitwise operations, mask creation |
| **2-7.c** | Inverts n bits of x starting at position p | ⭐⭐⭐ Advanced | XOR operations, bit inversion |
| **2-8.c** | Rotates x right by n bit positions | ⭐⭐⭐ Advanced | Circular bit shift, CHAR_BIT usage |
| **2-9.c** | Counts set bits using Brian Kernighan's algorithm | ⭐⭐⭐⭐ Expert | Two's complement arithmetic, bit manipulation optimization |
| **2-10.c** | Converts uppercase to lowercase using conditional expression | ⭐ Beginner | Ternary operator, ASCII arithmetic |

### 🧪 Testing and Demonstration

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **hello.c** | Classic "Hello, World!" with documented compiler error examples | ⭐ Beginner | Basic I/O, compiler diagnostics |
| **hello_unknown_escape_sequence.c** | Demonstrates behavior of unknown escape sequences | ⭐ Beginner | Escape sequence handling, compiler warnings |
| **EOF_value.c** | Displays the numeric value of EOF constant | ⭐ Beginner | EOF constant, macro expansion |
| **getchar_test.c** | Tests getchar() functionality and EOF detection | ⭐ Beginner | Input functions, boolean expressions |
| **3-1.c** | Compares performance of two binary search implementations | ⭐⭐⭐ Advanced | Binary search, algorithm optimization, timing |

## Building and Running

### Prerequisites

- C compiler (gcc, clang, or compatible)
- Standard C library implementation
- POSIX-compatible environment (recommended for I/O redirection)

### Compilation

#### Standard Compilation
```bash
gcc -std=c99 -Wall -Wextra -o program_name program_name.c
```

#### Programs Requiring Math Library
```bash
gcc -std=c99 -Wall -o program_name program_name.c -lm
```

Programs requiring `-lm`: `2-1.c`, `2-3.c`, `3-4.c`

#### Optimization Flags
```bash
# For performance testing (e.g., 3-1.c)
gcc -std=c99 -O2 -o program_name program_name.c

# For debugging
gcc -std=c99 -g -Wall -Wextra -o program_name program_name.c
```

### Input Methods

Most programs read from standard input (stdin). Multiple input methods are supported:

#### Interactive Input
```bash
./program_name
# Type input, press Ctrl+D (Unix/Linux/Mac) or Ctrl+Z (Windows) to send EOF
```

#### File Redirection
```bash
./program_name < input.txt
./program_name < input.txt > output.txt
```

#### Piping
```bash
echo "test input" | ./program_name
cat file.txt | ./program_name
```

#### Program Chaining
```bash
./temperature | ./fold
cat source.c | ./commentRemover | ./1-24
echo "HELLO WORLD" | ./2-10
```

## Usage Examples

### Character Processing Examples

```bash
# Count blanks, tabs, and newlines
$ printf "hello\tworld\n\ntest" | ./b-t-n-counter
2       1       6

# Remove consecutive spaces
$ echo "hello    world    test" | ./space_corrector
hello world test

# One word per line
$ echo "hello world test" | ./one_word_per_line
hello
world
test
```

### Text Manipulation Examples

```bash
# Reverse each line
$ echo -e "hello\nworld" | ./reverseS
olleh
dlrow

# Find lines longer than 80 characters
$ ./longer_than_80 < source_code.c

# Fold long lines at 80 characters
$ cat long_text.txt | ./fold > formatted.txt
```

### Code Processing Examples

```bash
# Check syntax (balanced delimiters)
$ echo "int main() { if (x > 0) { return 1; }" | ./1-24
Unbalanced braces: 1

# Remove comments from C code
$ ./commentRemover < input.c > output.c

# Convert tabs to spaces
$ ./detab < tabbed_file.txt > spaces_file.txt
```

### Conversion Examples

```bash
# Hexadecimal to decimal
$ ./2-3
Enter the hexadecimal number: 0xFF
The integer value is: 255

# Display data type ranges
$ ./2-1
Range of various types using <limits.h>

unsigned char : [0, 255]
signed char   : [-128, 127]
...
```

### Bit Manipulation Examples

```bash
# Count set bits
$ ./2-9
Enter x: 15
No of set bits: 4

# Rotate bits right
$ ./2-8
Enter x: 8
Enter n: 1
Result: 4
```

### Visualization Examples

```bash
# Character frequency histogram
$ echo "the quick brown fox jumps over the lazy dog" | ./character_frequency
 #     
 #     
 #  #  
__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-
 a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z 
```

## Learning Resources

### Core Concepts Demonstrated

- **I/O Operations**: Character-level and formatted I/O, EOF handling
- **Control Flow**: Loops, conditionals, state machines
- **Arrays and Strings**: Manipulation, searching, copying
- **Functions**: Declaration, definition, parameter passing
- **Pointers**: Array-pointer equivalence, pointer arithmetic
- **Bit Manipulation**: Bitwise operations, masks, shifts
- **Algorithm Design**: Binary search, histogram generation, text processing

### Recommended Books

- *The C Programming Language* (2nd Edition) by Kernighan & Ritchie
- *C Programming: A Modern Approach* by K. N. King
- *Expert C Programming* by Peter van der Linden

### Online Resources

- [C Reference](https://en.cppreference.com/w/c)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

## Common Issues and Solutions

### Compilation Issues

**Implicit function declaration warning:**
```bash
# Solution: Include <math.h> and link with -lm
gcc -std=c99 -Wall -o program program.c -lm
```

**Format string mismatch:**
- Use `%d` for `int`, `%u` for `unsigned int`, `%ld` for `long`, `%zu` for `size_t`

### Runtime Issues

**Program hangs waiting for input:**
- Send EOF: `Ctrl+D` (Unix/Linux/Mac) or `Ctrl+Z` (Windows)

**Buffer overflow:**
- Always check array bounds in loops
- Ensure null-termination of strings

### Debugging

```bash
# Compile with debug symbols
gcc -std=c99 -g -o program program.c

# Use GDB for debugging
gdb ./program

# Use AddressSanitizer for memory errors
gcc -std=c99 -g -fsanitize=address -o program program.c
./program
```

## Program Limitations

| Program | Maximum Input | Notes |
|---------|---------------|-------|
| longest-line.c | 1000 chars/line | Truncates longer lines |
| reverseS.c | 1000 chars/line | Buffer overflow risk beyond limit |
| fold.c | 80 chars/line target | Breaks at word boundaries |
| vertical_word_length_histogram.c | 50 chars/word | Ignores longer words |
| 2-3.c (htoi) | ~100 hex digits | Integer overflow for large values |
| 2-4.c, 2-5.c | 900 chars/string | Input validation recommended |
| commentRemover.c | 20000 chars total | Memory limitation |

## Contributing

This repository serves as a personal learning project for C programming fundamentals. Contributions that enhance code quality, documentation, or pedagogical value are welcome.

### Code Style Guidelines

- Follow K&R C style conventions
- Indentation: 4 spaces (no tabs)
- Line length: Maximum 80 characters where practical
- Use descriptive variable names
- Include header comments explaining purpose, input, output, and limitations

### Testing Before Submission

```bash
# Compile without warnings
gcc -std=c99 -Wall -Wextra -Wpedantic -o program program.c

# Test edge cases
echo "" | ./program              # Empty input
echo "a" | ./program             # Single character
python3 -c "print('a' * 1000)" | ./program  # Large input

# Check with sanitizer
gcc -std=c99 -g -fsanitize=address -o program program.c
./program < test_input.txt
```

## Project Structure

```
.
├── LICENSE.txt                          # MIT License
├── README.md                            # This file
├── .gitignore                           # Git ignore patterns
│
├── hello.c                              # Basic programs
├── EOF_value.c
├── getchar_test.c
│
├── temperature.c                        # Temperature conversions
├── c-f_table.c
├── temp_reverse.c
├── function_temperature.c
│
├── b-t-n-counter.c                      # Character processing
├── word_counter.c
├── space_corrector.c
├── one_word_per_line.c
├── character_frequency.c
│
├── longest-line.c                       # Line/text manipulation
├── longer_than_80.c
├── remTrail.c
├── reverseS.c
├── fold.c
│
├── commentRemover.c                     # Code processing
├── 1-24.c
├── detab.c
├── entab.c
│
├── 2-1.c through 2-10.c                # K&R Chapter 2 exercises
└── 3-1.c through 3-6.c                 # K&R Chapter 3 exercises
```

## License

This project is licensed under the MIT License - see the [LICENSE.txt](LICENSE.txt) file for details.

## Acknowledgments

- **Brian W. Kernighan and Dennis M. Ritchie** - *The C Programming Language* (2nd Edition)
- **Unix Philosophy** - Simple, composable tools that do one thing well
- **Open Source Community** - For continued education and knowledge sharing

## Version History

- **Current**: Active development
- **Focus**: K&R C Programming Language exercises (Chapters 1-3)

### Roadmap

**Planned Additions:**
- Makefile for batch compilation
- Additional exercises from Chapters 4-5
- Automated test suite
- Performance benchmarking suite

---

**Last Updated**: 2025

**Repository Purpose**: Personal learning project for C programming fundamentals and Git workflow practice.

**Status**: Active - Ongoing additions from K&R exercises
