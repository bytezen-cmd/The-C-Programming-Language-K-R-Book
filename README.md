# C Programming Exercises

A comprehensive collection of C programming exercises covering fundamental concepts from *The C Programming Language* (K&R) and classic systems programming topics. These programs demonstrate essential skills in character processing, text manipulation, data structures, and algorithm implementation.

## 📚 Table of Contents

- [Programs Overview](#programs-overview)
- [Building and Running](#building-and-running)
- [Usage Examples](#usage-examples)
- [Learning Objectives](#learning-objectives)
- [Program Reference](#program-reference)
- [Contributing](#contributing)

## Programs Overview

### 🔤 Character and String Processing

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **literal_space.c** | Converts tabs, backspaces, and backslashes to visible escape sequences | Character escaping, special characters |
| **space_corrector.c** | Removes consecutive spaces, keeping only single spaces | State tracking, character comparison |
| **one_word_per_line.c** | Prints each word on a separate line | State machine (IN/OUT) |
| **b-t-n-counter.c** | Counts blanks, tabs, and newlines in input | Character classification, counters |
| **word_counter.c** | Counts lines, words, and characters | Multi-state tracking |

### 📏 Line and Text Manipulation

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **longest-line.c** | Finds and displays the longest line from input (max 1000 chars) | Array manipulation, string copy |
| **longer_than_80.c** | Prints only lines exceeding 80 characters | Line buffering, length checking |
| **remTrail.c** | Removes trailing whitespace from lines | Backward iteration, string trimming |
| **reverseS.c** | Reverses each line of input (max 1000 characters per line) | String reversal algorithm |
| **fold.c** | Folds long lines at 80 characters, breaking at word boundaries | Buffer management, word boundaries |

### 🔧 Code Processing Tools

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **commentRemover.c** | Removes both single-line (//) and multi-line (/* */) comments from C code | Lookahead parsing, state machine |
| **1-24.c** | Syntax checker: verifies balanced parentheses, brackets, and braces (ignores comments/strings) | Syntax validation, nested state tracking |
| **detab.c** | Replaces tabs with appropriate number of spaces (tab stops every 8 characters) | Tab expansion algorithm |
| **entab.c** | Replaces sequences of spaces with tabs where appropriate | Tab compression, position tracking |

### 📊 Data Visualization

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **character_frequency.c** | Creates a vertical histogram showing frequency of letters a-z | Array frequency counting, vertical display |
| **vertical_word_length_histogram.c** | Displays a vertical histogram of word lengths (supports words up to 50 chars) | Multi-pass algorithm, data visualization |

### 🌡️ Temperature Conversion

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **temperature.c** | Fahrenheit to Celsius conversion table (0°F to 300°F) | Basic loops, floating-point arithmetic |
| **c-f_table.c** | Celsius to Fahrenheit conversion table | Inverse conversion formula |
| **temp_reverse.c** | Temperature table in reverse order (300°F down to 0°F) | Descending loops |
| **function_temperature.c** | Temperature conversion using function abstraction | Function design, modularity |

### 🔢 Data Type and Numeric Operations

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **2-1.c** | Displays ranges of various data types using both `<limits.h>` and manual calculation | Type ranges, limits.h, pow() |
| **2-2.c** | Alternative loop implementation without && or \|\| operators | Boolean arithmetic tricks |
| **2-3.c** | Hexadecimal to integer converter (handles 0x/0X prefix) | Base conversion, hex parsing |
| **2-4.c** | String squeeze function: removes all chars in s2 from s1 | String manipulation, strchr() |
| **2-5.c** | Returns first location where any char from s2 appears in s1 | String searching, nested loops |

### 🧪 Testing and Demonstration

| Program | Description | Key Concepts |
|---------|-------------|--------------|
| **hello.c** | Classic "Hello, World!" with documented compiler error examples | Basic I/O, compiler diagnostics |
| **hello_unknown_escape_sequence.c** | Demonstrates behavior of unknown escape sequences | Escape sequence handling |
| **EOF_value.c** | Displays the numeric value of EOF constant | EOF constant, system constants |
| **getchar_test.c** | Tests getchar() functionality and EOF detection | Input functions |

## Building and Running

### Prerequisites

- C compiler (gcc, clang, or compatible)
- Standard C library
- POSIX-compatible environment recommended (for I/O redirection)

### Compilation

Compile any program using gcc or your preferred C compiler:

```bash
gcc -o program_name program_name.c
```

For programs using math functions (like 2-1.c, 2-3.c), link the math library:

```bash
gcc -o program_name program_name.c -lm
```

For programs with implicit return type warnings:

```bash
gcc -std=c99 -o program_name program_name.c
```

### Common Compilation Examples

```bash
# Basic program
gcc -o hello hello.c
./hello

# With math library
gcc -o ranges 2-1.c -lm
./ranges

# With C99 standard
gcc -std=c99 -o temperature temperature.c
./temperature

# Suppress warnings (not recommended for learning)
gcc -w -o program_name program_name.c
```

### Input Methods

Most programs read from standard input. You can provide input in several ways:

**1. Interactive input:**
```bash
./program_name
# Type your input
# Press Ctrl+D (Unix/Linux/Mac) or Ctrl+Z (Windows) to send EOF
```

**2. File redirection:**
```bash
./program_name < input.txt
./program_name < input.txt > output.txt
```

**3. Piping:**
```bash
echo "test input" | ./program_name
cat file.txt | ./program_name
```

**4. Chaining programs:**
```bash
./temperature | ./fold
cat source.c | ./commentRemover | ./1-24
```

## Usage Examples

### Example 1: Character Frequency Histogram
```bash
echo "the quick brown fox jumps over the lazy dog" | ./character_frequency
```
Output: A vertical bar chart showing frequency of each letter a-z.

### Example 2: Finding Long Lines
```bash
./longer_than_80 < source_code.c
```
Displays only lines longer than 80 characters from a C source file.

### Example 3: Syntax Checking
```bash
./1-24 < program.c
```
Reports any unbalanced parentheses, brackets, or braces:
```
Unbalanced braces: 1
```

### Example 4: Comment Removal
```bash
./commentRemover < input.c > output.c
```
Removes all C-style comments while preserving code.

### Example 5: Tab Operations
```bash
# Expand tabs to spaces
./detab < tabbed_file.txt > spaces_file.txt

# Compress spaces to tabs
./entab < spaces_file.txt > tabbed_file.txt
```

### Example 6: Hexadecimal Conversion
```bash
./2-3
# Enter: 0xFF
# Output: The integer value is: 255
```

### Example 7: String Operations
```bash
./2-4
# Enter string 1: hello world
# Enter string 2: aeiou
# Output: hll wrld
```

### Example 8: Data Type Ranges
```bash
./2-1
# Displays ranges of all basic C data types using both header constants and calculations
```

## Learning Objectives

These programs cover fundamental C programming concepts:

### Core Skills
- **I/O Operations**: Using `getchar()`, `putchar()`, `printf()`, `scanf()`, and `fgets()`
- **Control Flow**: Mastering `while`, `for`, `if-else`, and state machines
- **Arrays and Strings**: Character arrays, string manipulation, and buffer management
- **Functions**: Parameter passing, return values, and function decomposition
- **Pointers**: Array indexing, pointer arithmetic, and `strchr()` usage
- **Data Types**: Understanding ranges, type conversions, and numeric representations

### Advanced Concepts
- **State Machines**: Tracking program state for text processing (IN/OUT, comment states, quote states)
- **Buffer Management**: Handling fixed-size buffers and line processing
- **Character Classification**: Working with ASCII values and character ranges
- **Look-ahead Processing**: Reading ahead in input streams using `ungetc()`
- **Data Structures**: Using arrays for histograms and frequency counting
- **Number Systems**: Binary, hexadecimal, and decimal conversions
- **Bit Operations**: Understanding two's complement representation

### Software Engineering Practices
- **Edge Case Handling**: EOF detection, buffer overflow prevention, null termination
- **Code Organization**: Separating concerns with functions
- **Documentation**: Comments explaining behavior and limitations
- **Testing**: Understanding common errors and their messages
- **Defensive Programming**: Input validation and boundary checking

## Program Reference

### Quick Command Reference

```bash
# Text Processing
cat file.txt | ./space_corrector         # Remove extra spaces
cat file.txt | ./one_word_per_line       # One word per line
cat file.txt | ./reverseS                # Reverse each line
cat file.txt | ./fold                    # Fold long lines

# Code Tools
cat program.c | ./commentRemover         # Strip comments
cat program.c | ./1-24                   # Check syntax balance
cat file.txt | ./detab                   # Tabs to spaces
cat file.txt | ./entab                   # Spaces to tabs

# Analysis
cat file.txt | ./word_counter            # Count lines, words, chars
cat file.txt | ./b-t-n-counter          # Count blanks, tabs, newlines
cat file.txt | ./character_frequency     # Letter frequency histogram
cat file.txt | ./longest-line            # Find longest line

# Conversions
./temperature                            # F to C table
./c-f_table                             # C to F table
./2-3                                   # Hex to decimal (interactive)
./2-1                                   # Show data type ranges
```

### Important Notes

- **Buffer Limits**: Many programs have size limits (typically 1000 characters for lines, 50 for word lengths in histograms)
- **EOF Handling**: Most programs rely on EOF to terminate input:
  - Unix/Linux/Mac: Press `Ctrl+D`
  - Windows: Press `Ctrl+Z` then Enter
- **Math Library**: Programs 2-1.c and 2-3.c require linking with `-lm`
- **Style**: Code follows traditional K&R C conventions
- **Warnings**: Some programs intentionally demonstrate compiler warnings and errors (see comments in source files)
- **State Management**: Several programs use state machines for robust text processing
- **Known Issues**: Some programs (like vertical_word_length_histogram.c) have noted formatting quirks in comments

## Learning Path Recommendation

### Beginner Level
1. **hello.c** - Basic compilation and output
2. **EOF_value.c** - Understanding EOF
3. **getchar_test.c** - Basic input
4. **temperature.c** - Simple loops and arithmetic
5. **literal_space.c** - Character handling

### Intermediate Level
6. **b-t-n-counter.c** - Counting and conditionals
7. **space_corrector.c** - State tracking
8. **word_counter.c** - Multi-state logic
9. **one_word_per_line.c** - IN/OUT state machine
10. **longest-line.c** - Arrays and strings

### Advanced Level
11. **2-1.c** - Data types and ranges
12. **2-3.c** - Number system conversion
13. **2-4.c** & **2-5.c** - String manipulation
14. **commentRemover.c** - Complex state machine with lookahead
15. **1-24.c** - Nested state tracking for syntax validation
16. **character_frequency.c** & **vertical_word_length_histogram.c** - Data visualization

### Expert Level
17. **fold.c** - Advanced buffer management
18. **detab.c** & **entab.c** - Tab position algorithms
19. **reverseS.c** - String manipulation algorithms
20. **remTrail.c** - Backward iteration techniques

## Common Pitfalls and Solutions

### Issue: Program doesn't stop
**Solution**: Make sure to send EOF (Ctrl+D on Unix/Linux/Mac, Ctrl+Z on Windows)

### Issue: Compilation warnings about implicit int
**Solution**: Use `-std=c99` or add explicit `int` return type to `main()`

### Issue: Undefined reference to 'pow'
**Solution**: Link with math library: `gcc program.c -lm`

### Issue: Buffer overflow or unexpected output
**Solution**: Check input size limits documented in each program

### Issue: Program crashes with long input
**Solution**: Many programs have documented size limits (typically 1000 chars per line)

## Testing Strategies

### Test Cases to Try

1. **Empty input** - Send EOF immediately
2. **Single character** - Test minimal input
3. **Long lines** - Test buffer limits
4. **Special characters** - Test tabs, newlines, spaces
5. **Edge cases** - Maximum values, boundary conditions
6. **Malformed input** - Invalid formats for conversion programs

### Example Test Files

Create test files for different scenarios:

```bash
# test_empty.txt - Empty file
touch test_empty.txt

# test_long.txt - Long lines
python3 -c "print('a' * 100)" > test_long.txt

# test_special.txt - Special characters
printf "line1\t\ttabs\nline2  spaces\n\nline4" > test_special.txt
```

## Contributing

When adding new programs:
- Follow K&R style conventions
- Include descriptive comments
- Document any size limitations
- Add appropriate entries to this README
- Test with various inputs including edge cases
- Note any compiler warnings in comments
- Provide usage examples

## License

This project is licensed under the MIT License - see the [LICENSE.txt](LICENSE.txt) file for details.

## Resources

These exercises are inspired by:
- *The C Programming Language* (2nd Edition) by Brian W. Kernighan & Dennis M. Ritchie
- Classic Unix text processing utilities
- Fundamental computer science algorithms
- Systems programming best practices

## Acknowledgments

- Brian W. Kernighan and Dennis M. Ritchie for their seminal work on C
- The Unix philosophy of simple, composable tools
- The open-source community for continued education in systems programming

---

**Note**: This is an educational project. Code focuses on learning fundamentals rather than production-ready robustness. Some programs contain intentional compiler warnings to demonstrate common errors and their resolution.
