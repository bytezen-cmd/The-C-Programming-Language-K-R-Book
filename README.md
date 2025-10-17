# C Programming Exercises

A comprehensive collection of C programming exercises covering fundamental concepts from *The C Programming Language* (K&R) and classic systems programming topics. These programs demonstrate essential skills in character processing, text manipulation, data structures, and algorithm implementation.

## 📚 Table of Contents

- [Programs Overview](#programs-overview)
- [Building and Running](#building-and-running)
- [Program Categories](#program-categories)
- [Usage Examples](#usage-examples)
- [Learning Objectives](#learning-objectives)

## Programs Overview

### 🔤 Character and String Processing

| Program | Description |
|---------|-------------|
| **literal_space.c** | Converts tabs, backspaces, and backslashes to visible escape sequences |
| **space_corrector.c** | Removes consecutive spaces, keeping only single spaces |
| **one_word_per_line.c** | Prints each word on a separate line |
| **b-t-n-counter.c** | Counts blanks, tabs, and newlines in input |
| **word_counter.c** | Counts lines, words, and characters |

### 📏 Line and Text Manipulation

| Program | Description |
|---------|-------------|
| **longest-line.c** | Finds and displays the longest line from input (max 1000 chars) |
| **longer_than_80.c** | Prints only lines exceeding 80 characters |
| **remTrail.c** | Removes trailing whitespace from lines |
| **reverseS.c** | Reverses each line of input (max 1000 characters per line) |
| **fold.c** | Folds long lines at 80 characters, breaking at word boundaries |

### 🔧 Code Processing Tools

| Program | Description |
|---------|-------------|
| **commentRemover.c** | Removes both single-line (//) and multi-line (/* */) comments from C code |
| **1-24.c** | Syntax checker that verifies balanced parentheses, brackets, and braces (ignores comments and strings) |
| **detab.c** | Replaces tabs with appropriate number of spaces (tab stops every 8 characters) |
| **entab.c** | Replaces sequences of spaces with tabs where appropriate |

### 📊 Data Visualization

| Program | Description |
|---------|-------------|
| **character_frequency.c** | Creates a vertical histogram showing frequency of letters a-z |
| **vertical_word_length_histogram.c** | Displays a vertical histogram of word lengths (supports words up to 50 chars) |

### 🌡️ Temperature Conversion

| Program | Description |
|---------|-------------|
| **temperature.c** | Fahrenheit to Celsius conversion table (0°F to 300°F) |
| **c-f_table.c** | Celsius to Fahrenheit conversion table |
| **temp_reverse.c** | Temperature table in reverse order (300°F down to 0°F) |
| **function_temperature.c** | Temperature conversion using function abstraction |

### 🧪 Testing and Demonstration

| Program | Description |
|---------|-------------|
| **hello.c** | Classic "Hello, World!" with documented compiler error examples |
| **hello_unknown_escape_sequence.c** | Demonstrates behavior of unknown escape sequences |
| **EOF_value.c** | Displays the numeric value of EOF constant |
| **getchar_test.c** | Tests getchar() functionality |

## Building and Running

### Compilation

Compile any program using gcc or your preferred C compiler:

```bash
gcc -o program_name program_name.c
./program_name
```

Example:
```bash
gcc -o longest longest-line.c
./longest
```

For programs with warnings about implicit return types, you can add the `-std=c99` or `-std=c11` flag:

```bash
gcc -std=c99 -o temperature temperature.c
./temperature
```

### Input Methods

Most programs read from standard input. You can provide input in several ways:

**Interactive input:**
```bash
./program_name
# Type your input
# Press Ctrl+D (Unix/Linux/Mac) or Ctrl+Z (Windows) to send EOF
```

**File redirection:**
```bash
./program_name < input.txt
```

**Piping:**
```bash
echo "test input" | ./program_name
cat file.txt | ./program_name
```

**Chaining programs:**
```bash
./temperature | ./fold
```

## Usage Examples

### Example 1: Character Frequency Histogram
```bash
echo "the quick brown fox jumps over the lazy dog" | ./character_frequency
```
Produces a vertical bar chart showing frequency of each letter.

### Example 2: Finding Long Lines
```bash
./longer_than_80 < source_code.c
```
Displays only lines longer than 80 characters from a C source file.

### Example 3: Syntax Checking
```bash
./1-24 < program.c
```
Reports any unbalanced parentheses, brackets, or braces.

### Example 4: Comment Removal
```bash
./commentRemover < input.c > output.c
```
Removes all comments from C code while preserving the rest.

### Example 5: Tab Expansion
```bash
./detab < tabbed_file.txt > spaces_file.txt
```
Converts tabs to spaces for consistent formatting.

## Learning Objectives

These programs cover fundamental C programming concepts:

### Core Skills
- **I/O Operations**: Using `getchar()`, `putchar()`, `printf()`, and `scanf()`
- **Control Flow**: Mastering `while`, `for`, `if-else`, and state machines
- **Arrays and Strings**: Character arrays, string manipulation, and buffer management
- **Functions**: Parameter passing, return values, and function decomposition
- **Pointers**: Array indexing and pointer arithmetic basics

### Advanced Concepts
- **State Machines**: Tracking program state for text processing (IN/OUT, comment states, quote states)
- **Buffer Management**: Handling fixed-size buffers and line processing
- **Character Classification**: Working with ASCII values and character ranges
- **Look-ahead Processing**: Reading ahead in input streams
- **Data Structures**: Using arrays for histograms and frequency counting

### Software Engineering Practices
- **Edge Case Handling**: EOF detection, buffer overflow prevention
- **Code Organization**: Separating concerns with functions
- **Documentation**: Comments explaining behavior and limitations
- **Testing**: Understanding common errors and their messages

## Important Notes

- **Buffer Limits**: Many programs have size limits (typically 1000 characters for lines, 50 for word lengths)
- **EOF Handling**: Most programs rely on EOF to terminate input (Ctrl+D on Unix/Linux/Mac, Ctrl+Z on Windows)
- **Style**: Code follows traditional K&R C conventions
- **Warnings**: Some programs intentionally demonstrate compiler warnings and errors (see comments in source)
- **State Management**: Several programs use state machines for robust text processing

## Requirements

- C compiler (gcc, clang, or compatible)
- Standard C library
- POSIX-compatible environment recommended (for I/O redirection)

## Learning Path Recommendation

1. Start with basic programs: **hello.c**, **temperature.c**
2. Practice I/O: **getchar_test.c**, **literal_space.c**
3. Work with state machines: **word_counter.c**, **one_word_per_line.c**
4. Tackle line processing: **longest-line.c**, **longer_than_80.c**
5. Advanced topics: **commentRemover.c**, **1-24.c**, histograms

## Contributing

When adding new programs:
- Follow K&R style conventions
- Include descriptive comments
- Document any size limitations
- Add appropriate entries to this README
- Test with various inputs including edge cases

## Resources

These exercises are inspired by:
- *The C Programming Language* by Kernighan & Ritchie
- Classic Unix text processing utilities
- Fundamental computer science algorithms

---

**Note**: This is an educational project. Code focuses on learning fundamentals rather than production-ready robustness.
