# C Programming Exercises

A collection of C programming exercises and examples, primarily based on classic introductory C programming concepts. These programs demonstrate fundamental concepts like I/O operations, control flow, functions, arrays, and string manipulation.

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
