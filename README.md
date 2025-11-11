# C Programming Exercises

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![K&R](https://img.shields.io/badge/Reference-K%26R%20C-orange.svg)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
[![Standard: C99](https://img.shields.io/badge/Standard-C99-green.svg)](https://en.wikipedia.org/wiki/C99)

A comprehensive collection of C programming exercises demonstrating fundamental concepts from *The C Programming Language* (K&R). These implementations explore character processing, text manipulation, bit operations, and classical algorithms essential to systems programming.

## Quick Start

```bash
# Clone repository
git clone <repository-url>
cd c-programming-exercises

# Compile a program
gcc -std=c99 -Wall -o program_name program_name.c

# Run with input
./program_name < input.txt
echo "test" | ./program_name
```

## Programs Overview

### Character & String Processing

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **literal_space.c** | Converts tabs, backslashes to visible escape sequences | ⭐ |
| **space_corrector.c** | Removes consecutive spaces | ⭐ |
| **one_word_per_line.c** | Prints each word on separate line | ⭐⭐ |
| **b-t-n-counter.c** | Counts blanks, tabs, newlines | ⭐ |
| **word_counter.c** | Counts lines, words, characters | ⭐⭐ |

### Line & Text Manipulation

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **longest-line.c** | Finds longest line (max 1000 chars) | ⭐⭐ |
| **longer_than_80.c** | Prints lines exceeding 80 chars | ⭐⭐ |
| **remTrail.c** | Removes trailing whitespace | ⭐⭐ |
| **reverseS.c** | Reverses each line | ⭐⭐⭐ |
| **fold.c** | Folds long lines at word boundaries | ⭐⭐⭐ |

### Code Processing Tools

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **commentRemover.c** | Removes single/multi-line comments | ⭐⭐⭐ |
| **1-24.c** | Validates balanced parentheses/brackets/braces | ⭐⭐⭐⭐ |
| **detab.c** | Replaces tabs with spaces (tab stops at 8) | ⭐⭐ |
| **entab.c** | Replaces spaces with tabs | ⭐⭐⭐ |

### Data Visualization

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **character_frequency.c** | Vertical histogram of letter frequencies | ⭐⭐⭐ |
| **vertical_word_length_histogram.c** | Vertical histogram of word lengths | ⭐⭐⭐⭐ |

### Temperature Conversion

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **temperature.c** | Fahrenheit to Celsius table | ⭐ |
| **c-f_table.c** | Celsius to Fahrenheit table | ⭐ |
| **temp_reverse.c** | Temperature table in reverse | ⭐ |
| **function_temperature.c** | Temperature with function abstraction | ⭐⭐ |

### Data Types & Numeric Operations

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **2-1.c** | Data type ranges using `<limits.h>` | ⭐⭐ |
| **2-2.c** | Loop without && or \|\| operators | ⭐⭐ |
| **2-3.c** | Hexadecimal to integer converter | ⭐⭐⭐ |
| **2-4.c** | Squeeze function: removes chars from string | ⭐⭐ |
| **2-5.c** | Find first occurrence of any char from set | ⭐⭐ |
| **3-2.c** | Escape/unescape special characters | ⭐⭐ |
| **3-3.c** | Expands ranges like a-z to characters | ⭐⭐⭐ |
| **3-4.c** | Improved itoa() handling INT_MIN | ⭐⭐⭐ |
| **3-5.c** | Integer to string in any base | ⭐⭐⭐ |
| **3-6.c** | itoa() with minimum field width | ⭐⭐ |

### Bit Manipulation

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **2-6.c** | Sets n bits at position p | ⭐⭐⭐ |
| **2-7.c** | Inverts n bits at position p | ⭐⭐⭐ |
| **2-8.c** | Right rotates bits by n positions | ⭐⭐⭐ |
| **2-9.c** | Counts set bits (Brian Kernighan's algorithm) | ⭐⭐⭐⭐ |
| **2-10.c** | Converts uppercase to lowercase | ⭐ |

### Searching & Utility

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **3-1.c** | Binary search performance comparison | ⭐⭐⭐ |
| **4-1.c** | Finds rightmost occurrence of substring | ⭐⭐ |

### Testing & Demonstration

| Program | Description | Difficulty |
|---------|-------------|-----------|
| **hello.c** | Classic "Hello, World!" | ⭐ |
| **EOF_value.c** | Displays EOF constant value | ⭐ |
| **getchar_test.c** | Tests getchar() and EOF detection | ⭐ |

## Building & Running

### Prerequisites

- C compiler (gcc, clang)
- Standard C library
- POSIX environment

### Compilation

**Standard:**
```bash
gcc -std=c99 -Wall -o program_name program_name.c
```

**With math library** (for 2-1.c, 2-3.c, 3-4.c):
```bash
gcc -std=c99 -Wall -o program_name program_name.c -lm
```

**With debugging:**
```bash
gcc -std=c99 -g -Wall -Wextra -o program_name program_name.c
```

### Input Methods

**Interactive:**
```bash
./program_name
# Press Ctrl+D (Unix/Mac) or Ctrl+Z (Windows) for EOF
```

**File redirection:**
```bash
./program_name < input.txt
./program_name < input.txt > output.txt
```

**Piping:**
```bash
echo "test" | ./program_name
cat file.txt | ./program_name
```

**Program chaining:**
```bash
./temperature | ./fold
cat source.c | ./commentRemover | ./1-24
```

## Usage Examples

### Character Processing

```bash
# Count blanks, tabs, newlines
$ printf "hello\tworld\n\ntest" | ./b-t-n-counter
2       1       6

# Remove consecutive spaces
$ echo "hello    world" | ./space_corrector
hello world

# One word per line
$ echo "hello world test" | ./one_word_per_line
hello
world
test
```

### Text Manipulation

```bash
# Reverse each line
$ echo -e "hello\nworld" | ./reverseS
olleh
dlrow

# Fold long lines
$ cat long_text.txt | ./fold > formatted.txt

# Remove trailing spaces
$ ./remTrail < file.txt
```

### Code Processing

```bash
# Check syntax
$ echo "int main() { if (x > 0) { return 1; }" | ./1-24
Unbalanced braces: 1

# Remove comments
$ ./commentRemover < input.c > output.c

# Convert tabs to spaces
$ ./detab < tabbed_file.txt > spaces_file.txt
```

### Conversion & Bit Operations

```bash
# Hexadecimal to decimal
$ ./2-3
Enter the hexadecimal number: 0xFF
The integer value is: 255

# Count set bits
$ ./2-9
Enter x: 15
No of set bits: 4

# Display data type ranges
$ ./2-1
Range of various types using <limits.h>
unsigned char : [0, 255]
signed char   : [-128, 127]
```

### Visualization

```bash
# Character frequency histogram
$ echo "the quick brown fox" | ./character_frequency
 #     #  
 #  #  # #
__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-
 a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
```

## Key Algorithms & Concepts

**Character Processing:** FSM patterns (IN/OUT states), lookahead techniques

**String Manipulation:** Concatenation, reversal, searching, escaping

**Bit Operations:** Masks, shifts, XOR, two's complement arithmetic

**Text Processing:** Line buffering, word boundaries, tab expansion

**Data Structures:** Arrays for frequency counting, custom implementations

**Searching:** Binary search with optimization comparisons

## Program Limitations

| Program | Limit | Note |
|---------|-------|------|
| longest-line.c | 1000 chars/line | Truncates longer lines |
| reverseS.c | 1000 chars/line | Buffer overflow risk |
| vertical_word_length_histogram.c | 50 chars/word | Ignores longer words |
| 2-3.c (htoi) | ~100 hex digits | Integer overflow possible |
| commentRemover.c | 20000 chars total | Memory limitation |

## Common Issues & Solutions

**Missing math library:**
```bash
# Error: undefined reference to `pow'
gcc -std=c99 -Wall -o program program.c -lm
```

**Format specifiers:**
- Use `%d` for `int`, `%u` for `unsigned`, `%ld` for `long`, `%zu` for `size_t`

**EOF handling:**
- Send EOF: `Ctrl+D` (Unix/Linux/Mac) or `Ctrl+Z` (Windows)

**Debugging:**
```bash
gcc -std=c99 -g -fsanitize=address -o program program.c
./program < test_input.txt
```

## Code Style

- K&R C conventions
- 4-space indentation (no tabs)
- Descriptive variable names
- Self-documenting code with minimal comments
- Maximum 80 characters per line where practical

## Learning Resources

### Recommended Reading

- *The C Programming Language* (2nd Ed.) - Kernighan & Ritchie
- *C Programming: A Modern Approach* - K.N. King
- *Expert C Programming* - Peter van der Linden

### Online References

- [C Reference](https://en.cppreference.com/w/c)
- [GNU C Library](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C](https://beej.us/guide/bgc/)

## Project Organization

```
.
├── LICENSE.txt
├── README.md
├── .gitignore
├── hello.c, hello_unknown_escape_sequence.c
├── temperature.c, c-f_table.c, temp_reverse.c
├── b-t-n-counter.c, word_counter.c, space_corrector.c
├── longest-line.c, longer_than_80.c, remTrail.c, reverseS.c
├── commentRemover.c, 1-24.c, detab.c, entab.c
├── character_frequency.c, vertical_word_length_histogram.c
├── 2-1.c through 2-10.c
├── 3-1.c through 3-6.c
├── 4-1.c
└── EOF_value.c, getchar_test.c
```

## Contributing

When adding new solutions:

1. Follow K&R C style conventions
2. Compile without warnings: `gcc -std=c99 -Wall -Wextra`
3. Test with edge cases (empty input, large input)
4. Include header comments with purpose and limitations
5. Add usage examples to documentation

## License

MIT License - see [LICENSE.txt](LICENSE.txt)

**Copyright © 2025 Himansh Mewada**

## Acknowledgments

- **Kernighan & Ritchie** - *The C Programming Language*
- **Unix Philosophy** - Composable tools doing one thing well
- **Open Source Community** - Knowledge and best practices

---

**Last Updated**: 2025  
**Status**: Active - Ongoing K&R exercises (Chapters 1-4)  
**Purpose**: Personal learning and Git workflow practice
