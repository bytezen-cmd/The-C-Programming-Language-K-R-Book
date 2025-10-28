# C Programming Exercises

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![K&R](https://img.shields.io/badge/Reference-K%26R%20C-orange.svg)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
[![Standard: C99](https://img.shields.io/badge/Standard-C99-green.svg)](https://en.wikipedia.org/wiki/C99)

A comprehensive collection of C programming exercises demonstrating fundamental concepts from *The C Programming Language* (K&R) and classical systems programming paradigms. These implementations explore character processing, text manipulation, data structures, and algorithmic techniques fundamental to systems-level programming.

## 📚 Table of Contents

- [Programs Overview](#programs-overview)
  - [Character and String Processing](#-character-and-string-processing)
  - [Line and Text Manipulation](#-line-and-text-manipulation)
  - [Code Processing Tools](#-code-processing-tools)
  - [Data Visualization](#-data-visualization)
  - [Temperature Conversion](#-temperature-conversion)
  - [Data Type and Numeric Operations](#-data-type-and-numeric-operations)
  - [Bit Manipulation](#-bit-manipulation)
  - [Testing and Demonstration](#-testing-and-demonstration)
- [Building and Running](#building-and-running)
- [Usage Examples](#usage-examples)
- [Learning Objectives](#learning-objectives)
- [Program Reference](#program-reference)
- [Common Debugging Strategies](#common-debugging-strategies)
- [Performance Considerations](#performance-considerations)
- [Memory Safety Guidelines](#memory-safety-guidelines)
- [Contributing](#contributing)
- [License](#license)

## Programs Overview

### 🔤 Character and String Processing

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **literal_space.c** | Converts tabs, backspaces, and backslashes to visible escape sequences | ⭐ Beginner | Character escaping, special character handling |
| **space_corrector.c** | Removes consecutive spaces, preserving only single spaces | ⭐ Beginner | State tracking, character comparison |
| **one_word_per_line.c** | Prints each word on a separate line | ⭐⭐ Intermediate | Finite state machine (IN/OUT states) |
| **b-t-n-counter.c** | Counts blanks, tabs, and newlines in input | ⭐ Beginner | Character classification, counter variables |
| **word_counter.c** | Counts lines, words, and characters | ⭐⭐ Intermediate | Multi-state tracking, concurrent counters |

**Expected Output Example (word_counter.c)**:
```bash
$ echo -e "hello world\ntest line" | ./word_counter
2 4 23
# 2 lines, 4 words, 23 characters
```

### 📏 Line and Text Manipulation

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **longest-line.c** | Finds and displays the longest line from input (max 1000 chars) | ⭐⭐ Intermediate | Array manipulation, string copying |
| **longer_than_80.c** | Prints only lines exceeding 80 characters | ⭐⭐ Intermediate | Line buffering, length validation |
| **remTrail.c** | Removes trailing whitespace from lines | ⭐⭐ Intermediate | Backward iteration, string trimming |
| **reverseS.c** | Reverses each line of input (max 1000 characters per line) | ⭐⭐⭐ Advanced | String reversal algorithm, buffer management |
| **fold.c** | Folds long lines at 80 characters, breaking at word boundaries | ⭐⭐⭐ Advanced | Buffer management, word boundary detection |

**Expected Output Example (reverseS.c)**:
```bash
$ echo "hello world" | ./reverseS
dlrow olleh
```

### 🔧 Code Processing Tools

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **commentRemover.c** | Removes both single-line (//) and multi-line (/* */) comments from C code | ⭐⭐⭐ Advanced | Lookahead parsing, nested state machines |
| **1-24.c** (Exercise 1-24) | Syntax checker: verifies balanced parentheses, brackets, and braces (ignores comments/strings) | ⭐⭐⭐⭐ Expert | Syntax validation, nested state tracking |
| **detab.c** | Replaces tabs with appropriate number of spaces (tab stops every 8 characters) | ⭐⭐ Intermediate | Tab expansion algorithm, position tracking |
| **entab.c** | Replaces sequences of spaces with tabs where appropriate | ⭐⭐⭐ Advanced | Tab compression, modular arithmetic |

**Expected Output Example (1-24.c)**:
```bash
$ echo "int main() { if (x > 0) { return 1; }" | ./1-24
Unbalanced braces: 1
```

### 📊 Data Visualization

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **character_frequency.c** | Creates a vertical histogram showing frequency of letters a-z | ⭐⭐⭐ Advanced | Array frequency counting, vertical display algorithm |
| **vertical_word_length_histogram.c** | Displays a vertical histogram of word lengths (supports words up to 50 chars) | ⭐⭐⭐⭐ Expert | Multi-pass algorithm, data visualization |

**Expected Output Example (character_frequency.c)**:
```bash
$ echo "hello world" | ./character_frequency
 #     
 #     
 #  #  
__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-
 a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z 
```

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
| **2-1.c** (Exercise 2-1) | Displays ranges of various data types using both `<limits.h>` and manual calculation | ⭐⭐ Intermediate | Type ranges, limits.h, pow() function |
| **2-2.c** (Exercise 2-2) | Alternative loop implementation without && or \|\| operators | ⭐⭐ Intermediate | Boolean arithmetic, operator alternatives |
| **2-3.c** (Exercise 2-3) | Hexadecimal to integer converter (handles 0x/0X prefix) | ⭐⭐⭐ Advanced | Base conversion, character-to-digit mapping |
| **2-4.c** (Exercise 2-4) | String squeeze function: removes all chars in s2 from s1 | ⭐⭐ Intermediate | String manipulation, strchr() usage |
| **2-5.c** (Exercise 2-5) | Returns first location where any char from s2 appears in s1 | ⭐⭐ Intermediate | String searching, nested iteration |

**Expected Output Example (2-3.c)**:
```bash
$ ./2-3
Enter the hexadecimal number: 0xFF
The integer value is: 255
```

### 🔀 Bit Manipulation

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **2-6.c** (Exercise 2-6) | Sets n bits of x at position p to rightmost n bits of y | ⭐⭐⭐ Advanced | Bitwise operations, mask creation |
| **2-7.c** (Exercise 2-7) | Inverts n bits of x starting at position p | ⭐⭐⭐ Advanced | XOR operations, bit inversion |
| **2-8.c** (Exercise 2-8) | Rotates x right by n bit positions | ⭐⭐⭐ Advanced | Circular bit shift, CHAR_BIT usage |
| **2-9.c** (Exercise 2-9) | Counts set bits using Brian Kernighan's algorithm | ⭐⭐⭐⭐ Expert | Two's complement arithmetic, bit manipulation optimization |
| **2-10.c** (Exercise 2-10) | Converts uppercase to lowercase using conditional expression | ⭐ Beginner | Ternary operator, ASCII arithmetic |

**Expected Output Example (2-9.c)**:
```bash
$ ./2-9
Enter x: 7
No of set bits: 3
# Binary: 111 has 3 set bits
```

### 🧪 Testing and Demonstration

| Program | Description | Difficulty | Key Concepts |
|---------|-------------|------------|--------------|
| **hello.c** | Classic "Hello, World!" with documented compiler error examples | ⭐ Beginner | Basic I/O, compiler diagnostics |
| **hello_unknown_escape_sequence.c** | Demonstrates behavior of unknown escape sequences | ⭐ Beginner | Escape sequence handling, compiler warnings |
| **EOF_value.c** | Displays the numeric value of EOF constant | ⭐ Beginner | EOF constant, macro expansion |
| **getchar_test.c** | Tests getchar() functionality and EOF detection | ⭐ Beginner | Input functions, boolean expressions |
| **3-1.c** (Exercise 3-1) | Compares performance of two binary search implementations | ⭐⭐⭐ Advanced | Binary search, algorithm optimization, timing |

**Expected Output Example (3-1.c)**:
```bash
$ ./3-1
Array: [0,1,2,3,4,5,6,7,8,9,10]
Searching for 7 with both versions...
old: 7
new: 7
Execution time (s): new = 0.00000100, old = 0.00000150
```

## Building and Running

### Prerequisites

- C compiler (gcc, clang, or compatible)
- Standard C library implementation
- POSIX-compatible environment (recommended for I/O redirection)
- GNU Make (optional, for batch compilation)

### Compilation

#### Standard Compilation
```bash
gcc -o program_name program_name.c
```

#### With C99 Standard (Recommended)
```bash
gcc -std=c99 -Wall -Wextra -o program_name program_name.c
```

#### Programs Requiring Math Library
```bash
gcc -std=c99 -Wall -o program_name program_name.c -lm
```

Programs requiring `-lm`: `2-1.c`, `2-3.c`

#### Optimization Flags
```bash
# For performance testing (e.g., 3-1.c)
gcc -std=c99 -O2 -o program_name program_name.c

# For debugging
gcc -std=c99 -g -Wall -Wextra -o program_name program_name.c
```

### Compilation Examples by Category

```bash
# Basic programs (no special requirements)
gcc -std=c99 -Wall -o hello hello.c
gcc -std=c99 -Wall -o temperature temperature.c

# Math library required
gcc -std=c99 -Wall -o ranges 2-1.c -lm
gcc -std=c99 -Wall -o htoi 2-3.c -lm

# Bit manipulation programs
gcc -std=c99 -Wall -o setbits 2-6.c
gcc -std=c99 -Wall -o invert 2-7.c
gcc -std=c99 -Wall -o rightrot 2-8.c
gcc -std=c99 -Wall -o bitcount 2-9.c

# Text processing tools
gcc -std=c99 -Wall -o commentRemover commentRemover.c
gcc -std=c99 -Wall -o syntax_checker 1-24.c
gcc -std=c99 -Wall -o detab detab.c
gcc -std=c99 -Wall -o entab entab.c

# Performance comparison
gcc -std=c99 -O2 -Wall -o binsearch 3-1.c
```

### Input Methods

Most programs read from standard input (stdin). Multiple input methods are supported:

#### 1. Interactive Input
```bash
./program_name
# Type input, press Ctrl+D (Unix/Linux) to send EOF
```

#### 2. File Redirection
```bash
./program_name < input.txt
./program_name < input.txt > output.txt
```

#### 3. Piping
```bash
echo "test input" | ./program_name
cat file.txt | ./program_name
```

#### 4. Program Chaining
```bash
./temperature | ./fold
cat source.c | ./commentRemover | ./1-24
echo "HELLO WORLD" | ./2-10
```

## Usage Examples

### Character and String Processing

#### Example 1: Character Frequency Analysis
```bash
$ echo "the quick brown fox jumps over the lazy dog" | ./character_frequency
```
Output: Vertical histogram showing frequency distribution of letters a-z.

#### Example 2: Space Normalization
```bash
$ echo "hello    world    test" | ./space_corrector
hello world test
```

#### Example 3: Word Extraction
```bash
$ echo "hello world test" | ./one_word_per_line
hello
world
test
```

### Line and Text Manipulation

#### Example 4: Finding Long Lines
```bash
$ ./longer_than_80 < source_code.c
```
Displays only lines exceeding 80 characters.

#### Example 5: Line Reversal
```bash
$ echo -e "hello\nworld" | ./reverseS
olleh
dlrow
```

#### Example 6: Line Folding
```bash
$ cat long_text.txt | ./fold > formatted.txt
```
Wraps lines at 80 characters, respecting word boundaries.

### Code Processing

#### Example 7: Syntax Validation
```bash
$ ./1-24 < program.c
All delimiters are balanced.
```

Or with errors:
```bash
$ echo "int main() { if (x > 0) { return 1; }" | ./1-24
Unbalanced braces: 1
```

#### Example 8: Comment Removal
```bash
$ ./commentRemover < input.c > output.c
```
Removes both single-line and multi-line comments.

#### Example 9: Tab Expansion/Compression
```bash
# Expand tabs to spaces
$ ./detab < tabbed_file.txt > spaces_file.txt

# Compress spaces to tabs
$ ./entab < spaces_file.txt > tabbed_file.txt
```

### Numeric Operations

#### Example 10: Hexadecimal Conversion
```bash
$ ./2-3
Enter the hexadecimal number: 0xFF
The integer value is: 255
```

#### Example 11: Type Ranges
```bash
$ ./2-1
Range of various types using <limits.h>

unsigned char : [0, 255]
signed char   : [-128, 127]
unsigned int  : [0, 4294967295]
signed int    : [-2147483648, 2147483647]
...
```

### Bit Manipulation

#### Example 12: Bit Counting
```bash
$ ./2-9
Enter x: 15
No of set bits: 4
# 15 = 1111 in binary
```

#### Example 13: Bit Rotation
```bash
$ ./2-8
Enter x: 8
Enter n: 1
Result: 4
# 8 (1000) rotated right by 1 = 4 (0100) on 4-bit representation
```

### String Operations

#### Example 14: String Squeeze
```bash
$ ./2-4
Enter string 1: hello world
Enter string 2: aeiou
String 1 after squeeze.
hll wrld
```

#### Example 15: Character Search
```bash
$ ./2-5
Enter string 1: hello world
Enter string 2: wo
Index of the occurence of any character of string 2 in string 1: 6
```

## Learning Objectives

### Core Competencies

#### I/O Operations
- Character-level I/O using `getchar()` and `putchar()`
- Formatted I/O with `printf()` and `scanf()`
- Line-oriented input with `fgets()`
- EOF handling and detection
- Input/output redirection

#### Control Flow
- `while`, `for`, and `do-while` loops
- Conditional statements (`if-else`, ternary operator)
- State machine implementation (IN/OUT states)
- Loop termination conditions
- Break and continue statements

#### Arrays and Strings
- Character array manipulation
- String operations (copying, comparing, searching)
- Multi-dimensional arrays (histograms)
- Buffer management and overflow prevention
- Null termination handling

#### Functions
- Function declaration and definition
- Parameter passing by value
- Return values and void functions
- Function decomposition principles
- Scope and lifetime of variables

#### Pointers
- Pointer arithmetic
- Array-pointer equivalence
- String library functions (`strchr()`, `strlen()`)
- Pass-by-reference simulation

### Advanced Concepts

#### State Machines
- Finite state automata for text processing
- Multi-state tracking (comment detection, quote handling)
- State transition logic
- Nested state management

#### Buffer Management
- Fixed-size buffer handling
- Line buffering techniques
- Circular buffer concepts (in rotation)
- Buffer overflow prevention

#### Character Classification
- ASCII value manipulation
- Character range checking
- Case conversion algorithms
- Escape sequence handling

#### Lookahead Processing
- Using `ungetc()` for input pushback
- Lookahead parsing for comment detection
- Token recognition

#### Number Systems
- Binary representation
- Hexadecimal conversion
- Two's complement arithmetic
- Bitwise operations (AND, OR, XOR, shifts)

#### Algorithm Design
- Binary search optimization
- Histogram generation algorithms
- String manipulation algorithms
- Bit manipulation tricks

### Software Engineering Practices

#### Defensive Programming
- Input validation
- Boundary checking
- Error handling
- Null pointer checks

#### Code Organization
- Separation of concerns
- Function modularity
- Named constants (`#define`)
- Clear variable naming

#### Testing Strategies
- Edge case identification
- EOF testing
- Buffer limit testing
- Invalid input handling

#### Documentation
- Inline comments
- Function documentation
- Limitation documentation
- Example usage

## Program Reference

### Quick Command Reference

```bash
# === Text Processing ===
cat file.txt | ./space_corrector         # Remove consecutive spaces
cat file.txt | ./one_word_per_line       # One word per line
cat file.txt | ./reverseS                # Reverse each line
cat file.txt | ./fold                    # Fold long lines at 80 chars
cat file.txt | ./remTrail                # Remove trailing whitespace

# === Code Analysis Tools ===
cat program.c | ./commentRemover         # Strip C comments
cat program.c | ./1-24                   # Check delimiter balance
cat file.txt | ./detab                   # Convert tabs to spaces
cat file.txt | ./entab                   # Convert spaces to tabs

# === Statistical Analysis ===
cat file.txt | ./word_counter            # Count lines, words, characters
cat file.txt | ./b-t-n-counter          # Count blanks, tabs, newlines
cat file.txt | ./character_frequency     # Letter frequency histogram
cat file.txt | ./vertical_word_length_histogram  # Word length histogram
cat file.txt | ./longest-line            # Find and display longest line
cat file.txt | ./longer_than_80          # Show lines > 80 characters

# === Conversions ===
./temperature                            # Fahrenheit to Celsius table
./c-f_table                             # Celsius to Fahrenheit table
./temp_reverse                          # Reverse temperature table
./function_temperature                  # Temperature with functions
./2-3                                   # Hex to decimal (interactive)
./2-1                                   # Display data type ranges

# === Bit Manipulation ===
./2-6                                   # Set bits
./2-7                                   # Invert bits
./2-8                                   # Rotate bits
./2-9                                   # Count set bits
echo "HELLO" | ./2-10                   # Convert to lowercase

# === String Operations ===
./2-4                                   # Squeeze strings (interactive)
./2-5                                   # Find character in string (interactive)
./3-2                                   # Escape/unescape special chars

# === Performance Testing ===
./3-1                                   # Binary search comparison
```

### Program Limitations

| Program | Maximum Input | Notes |
|---------|---------------|-------|
| longest-line.c | 1000 chars/line | Truncates longer lines |
| reverseS.c | 1000 chars/line | Buffer overflow risk beyond limit |
| fold.c | 80 chars/line target | Breaks at word boundaries |
| vertical_word_length_histogram.c | 50 chars/word | Ignores longer words |
| 2-3.c (htoi) | ~100 hex digits | Integer overflow for large values |
| 2-4.c, 2-5.c | 900 chars/string | Input validation recommended |
| longer_than_80.c | 1000 chars/line | Fixed buffer size |
| commentRemover.c | 20000 chars total | Memory limitation |

## Common Debugging Strategies

### Compilation Issues

#### Issue: Implicit Function Declaration
```bash
warning: implicit declaration of function 'pow'
```
**Solution**: Include `<math.h>` and link with `-lm`:
```bash
gcc -std=c99 -Wall -o program program.c -lm
```

#### Issue: Implicit Int Return Type
```bash
warning: return type defaults to 'int' [-Wimplicit-int]
```
**Solution**: Explicitly declare `main()` return type:
```c
int main(void) {
    // code
    return 0;
}
```

#### Issue: Format String Mismatch
```bash
warning: format '%d' expects argument of type 'int', but argument has type 'long unsigned int'
```
**Solution**: Use correct format specifier:
- `%d` for `int`
- `%u` for `unsigned int`
- `%ld` for `long`
- `%lu` for `unsigned long`
- `%zu` for `size_t`

### Runtime Issues

#### Issue: Program Doesn't Terminate
**Symptoms**: Program hangs waiting for input.

**Solution**: Send EOF signal:
- Unix/Linux/Mac: Press `Ctrl+D`
- Windows: Press `Ctrl+Z` then Enter

**Debugging**: Add debug output to verify loop conditions:
```c
while ((c = getchar()) != EOF) {
    fprintf(stderr, "Read char: %c (%d)\n", c, c);  // Debug output
    // process character
}
```

#### Issue: Buffer Overflow
**Symptoms**: Segmentation fault, corrupted output.

**Solution**: Always check array bounds:
```c
for (i = 0; i < MAX - 1 && (c = getchar()) != EOF; i++) {
    buffer[i] = c;
}
buffer[i] = '\0';  // Always null-terminate
```

#### Issue: Incorrect Character Count
**Symptoms**: Off-by-one errors in counting programs.

**Solution**: Verify loop conditions and increment locations:
```c
// Incorrect: increments before counting newline
while ((c = getchar()) != EOF) {
    nc++;
    if (c == '\n')
        nl++;
}

// Correct: order ensures newlines are counted
```

#### Issue: State Machine Errors
**Symptoms**: Incorrect word/character counting, missed state transitions.

**Debugging Strategy**:
```c
#define DEBUG 1

#if DEBUG
fprintf(stderr, "State: %d, Char: %c (%d)\n", state, c, c);
#endif
```

### Input/Output Issues

#### Issue: Unexpected Output Buffering
**Solution**: Flush output explicitly:
```c
printf("Enter input: ");
fflush(stdout);  // Force output before reading input
```

#### Issue: Lost Characters in Lookahead
**Context**: Programs like `commentRemover.c` using `getchar()` followed by `ungetc()`.

**Solution**: Always push back characters when not consumed:
```c
next = getchar();
if (c == '/' && next == '*') {
    // consume both characters
} else {
    putchar(c);
    ungetc(next, stdin);  // Push back lookahead
}
```

### Memory Issues

#### Issue: Uninitialized Variables
**Detection**: Enable warnings:
```bash
gcc -std=c99 -Wall -Wextra -Wuninitialized -o program program.c
```

**Solution**: Always initialize variables:
```c
int counter = 0;  // Explicit initialization
int array[100] = {0};  // Initialize array to zeros
```

#### Issue: Array Index Out of Bounds
**Detection**: Use address sanitizer:
```bash
gcc -std=c99 -g -fsanitize=address -o program program.c
./program
```

**Common Pattern**:
```c
// Incorrect: loop condition allows out-of-bounds access
for (i = 0; i <= MAX; i++)  // Should be i < MAX
    array[i] = 0;

// Correct:
for (i = 0; i < MAX; i++)
    array[i] = 0;
```

### Testing Strategies

#### Edge Case Testing

**1. Empty Input**
```bash
# Create empty file
touch empty.txt
./program < empty.txt
```

**2. Single Character**
```bash
echo "a" | ./program
```

**3. Maximum Length Input**
```bash
python3 -c "print('a' * 1000)" | ./program
```

**4. Special Characters Only**
```bash
printf "\t\n  \t\n" | ./b-t-n-counter
```

**5. No Newline at EOF**
```bash
printf "test" | ./program  # No trailing newline
```

#### Systematic Testing Approach

```bash
# Create test suite
mkdir tests
echo "hello world" > tests/simple.txt
echo "" > tests/empty.txt
python3 -c "print('a' * 1000)" > tests/long.txt
printf "\t\n  \t\n" > tests/special.txt

# Run tests
for test in tests/*.txt; do
    echo "Testing with $test:"
    ./program < "$test"
    echo "---"
done
```

## Performance Considerations

### Algorithm Complexity

| Program | Time Complexity | Space Complexity | Notes |
|---------|----------------|------------------|-------|
| longest-line.c | O(n) | O(m) | n = total chars, m = max line length |
| word_counter.c | O(n) | O(1) | Linear single-pass |
| character_frequency.c | O(n + k·m) | O(1) | k = 26 alphabet size, m = max frequency |
| vertical_word_length_histogram.c | O(n + w·m) | O(w) | w = max word length (50), m = max count |
| commentRemover.c | O(n) | O(1) | Single-pass with lookahead |
| 1-24.c | O(n) | O(1) | Single-pass syntax checker |
| 3-1.c (binsearch) | O(log n) | O(1) | Binary search |
| 2-9.c (bitcount) | O(k) | O(1) | k = number of set bits |
| fold.c | O(n) | O(w) | w = line buffer (80 chars) |
| reverseS.c | O(n·m) | O(m) | m = max line length |

### Optimization Techniques Demonstrated

#### 1. Brian Kernighan's Bit Counting (2-9.c)
```c
// O(k) where k = number of set bits
// Instead of O(n) where n = word size
while (x) {
    x &= (x - 1);  // Clears rightmost set bit
    count++;
}
```

**Performance**: For sparse bit patterns (few 1s), dramatically faster than checking each bit.

#### 2. Binary Search Optimization (3-1.c)
The program compares two implementations:

**Original** (from K&R):
```c
while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid])
        high = mid - 1;
    else if (x > v[mid])  // Two comparisons per iteration
        low = mid + 1;
    else
        return mid;
}
```

**Optimized**:
```c
while (low <= high && v[mid] != x) {
    if (x < v[mid])
        high = mid - 1;
    else
        low = mid + 1;  // Single comparison per iteration
    mid = (low + high) / 2;
}
```

**Trade-off**: Reduces comparisons inside loop but adds extra check at loop condition.

#### 3. Single-Pass Processing
Many programs demonstrate single-pass algorithms:
- **word_counter.c**: Counts lines, words, and characters in one pass
- **b-t-n-counter.c**: Counts three character types simultaneously
- **commentRemover.c**: Removes comments without building intermediate buffer

#### 4. Buffer Reuse
Programs like **fold.c** reuse buffers by shifting content instead of allocating new memory:
```c
// Instead of allocating new buffer, shift existing content
int j = 0;
for (int i = last_blank + 1; i <= pos; i++)
    line[j++] = line[i];
pos = j;
```

### Profiling Programs

To profile any program:

```bash
# Compile with profiling support
gcc -std=c99 -pg -o program program.c

# Run program
./program < large_input.txt > /dev/null

# Generate profile report
gprof program gmon.out > analysis.txt
```

### Performance Testing Example

```bash
# Generate large test file
python3 -c "
for i in range(100000):
    print('the quick brown fox jumps over the lazy dog ' * 10)
" > large_test.txt

# Time execution
time ./word_counter < large_test.txt
time ./character_frequency < large_test.txt

# Compare implementations
time ./3-1  # Binary search comparison
```

## Memory Safety Guidelines

### Buffer Overflow Prevention

#### Pattern 1: Fixed-Size Input
```c
#define MAXLINE 1000
char line[MAXLINE];

// Safe: prevents buffer overflow
for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
}
line[i] = '\0';  // Always null-terminate
```

#### Pattern 2: Dynamic Length Checking
```c
int length = 0;
while (s[length] != '\0')
    length++;

// Use length for bounds checking
for (int i = 0; i < length && i < MAX; i++) {
    // Safe access
}
```

#### Pattern 3: Safe String Copy
```c
// Unsafe: no bounds checking
void unsafe_copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')  // May overflow 'to'
        i++;
}

// Safe: with bounds checking
void safe_copy(char to[], char from[], int maxlen) {
    int i;
    for (i = 0; i < maxlen - 1 && from[i] != '\0'; i++)
        to[i] = from[i];
    to[i] = '\0';
}
```

### Common Vulnerabilities in These Programs

#### 1. Unvalidated Input Length
**Vulnerable Programs**: `2-4.c`, `2-5.c`, `reverseS.c`, `longest-line.c`

**Issue**: Programs assume input won't exceed buffer size.

**Mitigation**: Always use bounded loops:
```c
// Check bounds in all input loops
for (i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    buffer[i] = c;
```

#### 2. Off-by-One Errors
**Common Pattern**:
```c
// Incorrect: allows writing to buffer[MAX]
for (i = 0; i <= MAX && c != EOF; i++)  // Should be i < MAX
    buffer[i] = c;
```

#### 3. Missing Null Termination
**Issue**: String functions expect null-terminated strings.

**Solution**: Always terminate strings:
```c
char s[100];
// ... fill array ...
s[length] = '\0';  // Critical for printf, strchr, etc.
```

#### 4. Integer Overflow
**Context**: `2-3.c` (hexadecimal conversion)

**Issue**: Large hex values can overflow `int`.

**Mitigation**:
```c
// Check for overflow before multiplication
if (value > INT_MAX / 16) {
    fprintf(stderr, "Error: value too large\n");
    return -1;
}
value = value * 16 + digit;
```

### Memory Debugging Tools

#### 1. Valgrind (Memory Leak Detection)
```bash
# Compile with debug symbols
gcc -std=c99 -g -o program program.c

# Run with Valgrind
valgrind --leak-check=full ./program < input.txt
```

#### 2. AddressSanitizer (Buffer Overflow Detection)
```bash
# Compile with sanitizer
gcc -std=c99 -g -fsanitize=address -o program program.c

# Run program (crashes on memory errors with detailed report)
./program < input.txt
```

#### 3. GDB (Interactive Debugging)
```bash
# Compile with debug symbols
gcc -std=c99 -g -o program program.c

# Debug
gdb ./program
(gdb) run < input.txt
(gdb) backtrace  # On crash
(gdb) print variable_name
```

### Safe Coding Checklist

- [ ] All arrays have explicit size limits
- [ ] All loops check array bounds
- [ ] All strings are null-terminated
- [ ] Input validation for interactive programs
- [ ] No pointer arithmetic without bounds checking
- [ ] All `getchar()` loops check for EOF
- [ ] Buffer sizes accommodate null terminator (`size + 1`)
- [ ] No assumptions about input length
- [ ] Error handling for allocation (if used)
- [ ] Integer overflow checks for arithmetic operations

## Contributing

### Contribution Guidelines

This repository serves as a personal learning project for C programming fundamentals and Git workflow practice. While primarily maintained for educational purposes, contributions that enhance code quality, documentation, or pedagogical value are welcome.

#### Code Style Standards

**1. Formatting**
- Follow K&R C style conventions
- Indentation: 4 spaces (no tabs in code)
- Line length: Maximum 80 characters where practical
- Braces: K&R style (opening brace on same line for functions)

**2. Naming Conventions**
```c
// Constants: UPPERCASE with underscores
#define MAX_LINE 1000
#define IN 1

// Variables: lowercase with underscores
int char_count;
int current_state;

// Functions: lowercase with underscores
int get_line(char s[], int lim);
void copy_string(char to[], char from[]);
```

**3. Comments**
```c
// Single-line comments for brief explanations
/* Multi-line comments for longer explanations,
   algorithm descriptions, or complex logic */

// Explain WHY, not WHAT (code should be self-documenting)
// Bad:  i++;  // increment i
// Good: i++;  // move to next character position
```

**4. Function Structure**
```c
// Function declaration with explicit types
int get_line(char line[], int maxline);

int get_line(char line[], int maxline) {
    int c, i;
    
    // Variable initialization at top of function
    i = 0;
    
    // Function body
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF; i++)
        line[i] = c;
    
    // Explicit return
    return i;
}
```

#### Submission Process

**1. Program Additions**
When adding new programs:
- Create descriptive filename (lowercase, underscores for spaces)
- Include header comment with:
  ```c
  /*
   * Filename: program_name.c
   * Purpose: Brief description
   * Input: Description of expected input
   * Output: Description of output format
   * Limitations: Any size/input restrictions
   */
  ```
- Add entry to README.md in appropriate category
- Document any special compilation requirements
- Include example usage

**2. Bug Fixes**
- Clearly describe the bug in commit message
- Reference specific line numbers when applicable
- Include test case that demonstrates the fix
- Ensure fix doesn't break other functionality

**3. Documentation Improvements**
- Clarify ambiguous instructions
- Add missing examples
- Correct technical inaccuracies
- Improve readability

**4. Performance Optimizations**
- Benchmark before and after changes
- Document complexity improvements
- Ensure correctness is maintained
- Explain optimization technique used

#### Testing Requirements

Before submitting:
```bash
# 1. Compile without warnings
gcc -std=c99 -Wall -Wextra -Wpedantic -o program program.c

# 2. Test edge cases
echo "" | ./program              # Empty input
echo "a" | ./program             # Single character
python3 -c "print('a' * 1000)" | ./program  # Large input

# 3. Check with sanitizer
gcc -std=c99 -g -fsanitize=address -o program program.c
./program < test_input.txt

# 4. Verify output format
./program < test_input.txt > actual_output.txt
diff actual_output.txt expected_output.txt
```

#### Documentation Standards

**README.md Updates**
- Add program to appropriate category table
- Include difficulty rating (⭐ to ⭐⭐⭐⭐)
- List key concepts demonstrated
- Provide usage example with expected output
- Note any special requirements or limitations

**Code Comments**
- Document non-obvious algorithms
- Explain complex bit manipulations
- Note any K&R exercise references
- Include complexity analysis for algorithms

#### Commit Message Format

```
[Category] Brief description (50 chars or less)

More detailed explanation if needed. Explain:
- What changed and why
- Any breaking changes
- Related issue numbers

Examples:
- Added bounds checking to prevent overflow
- Fixed off-by-one error in loop condition
- Optimized algorithm from O(n²) to O(n log n)
```

Categories:
- `[Feature]` - New program or functionality
- `[Fix]` - Bug fix
- `[Docs]` - Documentation only
- `[Refactor]` - Code restructuring without behavior change
- `[Test]` - Test additions or modifications
- `[Perf]` - Performance improvements

#### Areas for Contribution

**High Priority**
- Memory safety improvements
- Additional test cases
- Performance optimizations
- Documentation clarity

**Medium Priority**
- Additional example programs
- Alternative implementations
- Makefile creation
- Cross-platform compatibility

**Low Priority**
- Code style consistency
- Comment improvements
- README formatting

### Learning Resources

For contributors unfamiliar with C programming concepts:

**Books**
- *The C Programming Language* (2nd Edition) by Kernighan & Ritchie
- *C Programming: A Modern Approach* by K. N. King
- *Expert C Programming* by Peter van der Linden

**Online Resources**
- [C Reference](https://en.cppreference.com/w/c)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

**Tools**
- [Compiler Explorer](https://godbolt.org/) - See assembly output
- [C Tutor](http://www.pythontutor.com/c.html) - Visualize execution
- [Valgrind](https://valgrind.org/) - Memory debugging

## Project Structure

```
.
├── .gitignore                           # Git ignore patterns
├── LICENSE.txt                          # MIT License
├── README.md                            # This file
│
├── hello.c                              # Basic programs
├── hello_unknown_escape_sequence.c
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
├── literal_space.c
├── character_frequency.c
├── vertical_word_length_histogram.c
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
├── 2-1.c                                # K&R Chapter 2 exercises
├── 2-2.c
├── 2-3.c
├── 2-4.c
├── 2-5.c
├── 2-6.c                                # Bit manipulation
├── 2-7.c
├── 2-8.c
├── 2-9.c
├── 2-10.c
│
├── 3-1.c                                # K&R Chapter 3 exercises
└── 3-2.c
```

## Frequently Asked Questions

### General Questions

**Q: Why do some programs have numbers in their names?**
A: Programs like `2-3.c` correspond to exercises from *The C Programming Language* (K&R). Format is `chapter-exercise.c`.

**Q: What C standard do these programs use?**
A: Programs are written for C99 standard. Some older programs may compile with earlier standards but C99 is recommended.

**Q: Can I use these programs in my coursework?**
A: These are educational examples. Understanding and modifying them for learning is encouraged; direct submission as coursework may violate academic integrity policies.

**Q: Why are some programs intentionally showing compiler warnings?**
A: Programs like `hello.c` demonstrate common errors and their compiler diagnostics for educational purposes.

### Technical Questions

**Q: Why does EOF have a numeric value?**
A: EOF is typically -1, outside the range of valid `char` values (0-255). See `EOF_value.c` for demonstration.

**Q: Why use `int` for character variables instead of `char`?**
A: To accommodate EOF (-1), which is outside the range of `unsigned char` (0-255). Standard pattern:
```c
int c;  // Must be int to detect EOF
while ((c = getchar()) != EOF)
    // process c
```

**Q: What's the difference between `'\n'` and `"\n"`?**
A: `'\n'` is a character literal (single char), `"\n"` is a string literal (array of 2 chars: newline + null terminator).

**Q: Why do some programs use `main()` without `int`?**
A: Older C standards allowed implicit `int` return type. Modern practice requires explicit `int main(void)` or `int main(int argc, char *argv[])`.

**Q: How do I send EOF from terminal?**
A: 
- Unix/Linux/Mac: `Ctrl+D`
- Windows: `Ctrl+Z` then `Enter`
- Or use input redirection: `./program < file.txt`

### Compilation Questions

**Q: What does "undefined reference to 'pow'" mean?**
A: Math functions require linking with math library: `gcc program.c -lm`

**Q: Why do I get "warning: format '%d' expects type 'int'"?**
A: Format specifier mismatch. Use correct specifier for type:
- `%d` for `int`
- `%u` for `unsigned int`
- `%ld` for `long`
- `%lu` for `unsigned long`
- `%zu` for `size_t`

**Q: How do I fix "control reaches end of non-void function"?**
A: Ensure all code paths return a value:
```c
int function(int x) {
    if (x > 0)
        return 1;
    // Warning: no return if x <= 0
    return 0;  // Add this
}
```

### Debugging Questions

**Q: My program hangs and doesn't terminate. Why?**
A: Likely waiting for EOF. Press `Ctrl+D` (Unix/Linux) or `Ctrl+Z` (Windows) or use input redirection.

**Q: Why do I get segmentation fault?**
A: Common causes:
1. Array index out of bounds
2. Accessing uninitialized pointer
3. Buffer overflow
4. Stack overflow (deep recursion)

Compile with `-g -fsanitize=address` for detailed error location.

**Q: Output appears garbled or incomplete. Why?**
A: Possible causes:
1. Missing null terminator on strings
2. Buffer overflow corrupting data
3. Uninitialized variables
4. Output buffering (try `fflush(stdout)`)

## Version History

### Current Version
- **Date**: 2025
- **Status**: Active development
- **Focus**: K&R C Programming Language exercises (Chapters 1-3)

### Roadmap

**Planned Additions**
- [ ] Makefile for batch compilation
- [ ] Additional Chapter 3 exercises
- [ ] Chapter 4 exercises (Functions and Program Structure)
- [ ] Chapter 5 exercises (Pointers and Arrays)
- [ ] Automated test suite
- [ ] CI/CD integration
- [ ] Performance benchmarking suite

**Possible Enhancements**
- [ ] Dynamic memory allocation examples
- [ ] Command-line argument processing
- [ ] File I/O operations
- [ ] Data structure implementations (linked lists, trees)
- [ ] Sorting and searching algorithms

## Acknowledgments

### Inspiration and References

- **Brian W. Kernighan and Dennis M. Ritchie** - *The C Programming Language* (2nd Edition), the definitive reference for C programming
- **Unix Philosophy** - Simple, composable tools that do one thing well
- **Open Source Community** - For continued education and knowledge sharing in systems programming

### Educational Philosophy

These programs prioritize:
1. **Clarity over cleverness** - Code should be understandable
2. **Fundamentals over frameworks** - Understanding core concepts
3. **Simplicity over sophistication** - KISS principle
4. **Correctness over optimization** - First make it work, then make it fast

## License

This project is licensed under the MIT License - see the [LICENSE.txt](LICENSE.txt) file for details.

### MIT License Summary

- ✅ Commercial use
- ✅ Modification
- ✅ Distribution
- ✅ Private use
- ❌ Liability
- ❌ Warranty

## Contact and Support

### Reporting Issues

For bugs, errors, or suggestions:
1. Check existing documentation
2. Verify compilation with recommended flags
3. Test with minimal input
4. Document steps to reproduce

### Disclaimers

**Educational Purpose**: These programs are designed for learning C programming fundamentals. They prioritize educational clarity over production-ready robustness.

**Buffer Limitations**: Many programs have fixed buffer sizes suitable for learning but not for production use with arbitrary input.

**Error Handling**: Error handling is minimal in some programs to focus on core concepts. Production code should include comprehensive error checking.

**Platform Assumptions**: Programs assume POSIX-compatible environment and may require modification for other platforms.

**Known Limitations**: Some programs have documented quirks or formatting issues noted in source comments, preserved for educational value.

## Additional Notes

### Development Environment

These programs were developed and tested in:
- **OS**: Ubuntu (Linux)
- **Compiler**: GCC (GNU Compiler Collection)
- **Editor**: Micro text editor
- **Shell**: Bash

### Compilation Best Practices

For learning and development:
```bash
gcc -std=c99 -Wall -Wextra -Wpedantic -g -O0 -o program program.c
```

Flags explained:
- `-std=c99`: Use C99 standard
- `-Wall -Wextra -Wpedantic`: Enable comprehensive warnings
- `-g`: Include debug symbols
- `-O0`: No optimization (for debugging)

For performance testing:
```bash
gcc -std=c99 -Wall -O2 -o program program.c
```

### Cross-Platform Considerations

**Line Endings**
- Unix/Linux: LF (`\n`)
- Windows: CRLF (`\r\n`)
- Mac (classic): CR (`\r`)

Most programs handle this transparently, but text processing programs may need adjustment for Windows compatibility.

**EOF Signal**
- Unix/Linux/Mac: `Ctrl+D`
- Windows: `Ctrl+Z` + Enter

**File Paths**
Programs using file operations (not in current set) would need path separator adjustments:
- Unix/Linux: `/`
- Windows: `\`

---

**Last Updated**: 2025

**Repository Purpose**: Personal learning project for C programming fundamentals and Git workflow practice.

**Status**: Active - Ongoing additions from K&R exercises
