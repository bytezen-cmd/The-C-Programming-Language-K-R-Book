# C Programming Exercises

A collection of C programming exercises and examples, primarily based on classic introductory C programming concepts. These programs demonstrate fundamental concepts like I/O operations, control flow, functions, arrays, and string manipulation.

## Programs

### Basic Examples
- **hello.c** - Classic "Hello, World!" program with error handling examples
- **EOF_value.c** - Displays the value of EOF
- **getchar_test.c** - Tests getchar() functionality

### Temperature Conversion
- **temperature.c** - Fahrenheit to Celsius conversion table
- **c-f_table.c** - Celsius to Fahrenheit conversion table
- **temp_reverse.c** - Temperature table in reverse order (300°F to 0°F)
- **function_temperature.c** - Temperature conversion using functions

### Character and String Processing
- **literal_space.c** - Converts tabs, backspaces, and backslashes to visible escape sequences
- **space_corrector.c** - Removes consecutive spaces from input
- **one_word_per_line.c** - Prints each word on a separate line
- **b-t-n-counter.c** - Counts blanks, tabs, and newlines in input

### Line Processing
- **longest-line.c** - Finds and prints the longest line from input
- **longer_than_80.c** - Prints lines longer than 80 characters
- **remTrail.c** - Removes trailing whitespace from lines
- **reverseS.c** - Reverses each line of input (max 1000 characters)

### Data Analysis and Visualization
- **word_counter.c** - Counts lines, words, and characters
- **character_frequency.c** - Creates a vertical histogram of letter frequencies (a-z)
- **vertical_word_length_histogram.c** - Displays a vertical histogram of word lengths

## Building and Running

Compile any program using gcc:
```bash
gcc -o program_name program_name.c
./program_name
```

For example:
```bash
gcc -o hello hello.c
./hello
```

## Input/Output

Most programs read from standard input and write to standard output. You can:
- Type input directly and press Ctrl+D (Unix/Linux/Mac) or Ctrl+Z (Windows) to send EOF
- Redirect input from a file: `./program < input.txt`
- Pipe output: `echo "test input" | ./program`

## Notes

- Several programs have size limits (typically 1000 characters for lines)
- The histogram programs work best with reasonable input sizes
- Some programs include comments documenting compiler warnings and expected behavior
- Code style follows traditional K&R C conventions

## Requirements

- C compiler (gcc, clang, etc.)
- Standard C library

## Learning Resources

These programs cover fundamental C programming concepts including:
- Basic I/O with `printf()`, `getchar()`, and `putchar()`
- Control structures (while, for, if-else)
- Arrays and strings
- Functions and parameter passing
- Character handling and ASCII manipulation
- State machines for text processing
