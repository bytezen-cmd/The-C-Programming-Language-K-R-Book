#include <stdio.h>
#include <stdio.h>

#define MAX_LIMIT 20000

int main(void) {
    int c, next;
    int in_single_comment = 0;
    int in_multi_comment = 0;

    while ((c = getchar()) != EOF) {
        next = getchar(); // look ahead at next character

        if (in_single_comment) {
            if (c == '\n') {
                in_single_comment = 0;
                putchar(c); // end of single-line comment
            }
        } 
        else if (in_multi_comment) {
            if (c == '*' && next == '/') {
                in_multi_comment = 0;
                getchar(); // consume '/'
            }
        } 
        else {
            if (c == '/' && next == '/') {
                in_single_comment = 1;
                getchar(); // skip second '/'
            } 
            else if (c == '/' && next == '*') {
                in_multi_comment = 1;
                getchar(); // skip '*'
            } 
            else {
                putchar(c);
                ungetc(next, stdin); // push back the lookahead
            }
        }
    }

    return 0;
}

