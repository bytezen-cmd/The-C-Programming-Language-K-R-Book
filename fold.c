#include <stdio.h>

#define FOLD 80     // fold after 80 characters

int main(void) {
    int c;
    int pos = 0;         // current position
    int last_blank = -1; // last blank position
    char line[FOLD + 1]; // buffer to hold characters

    while ((c = getchar()) != EOF) {
        line[pos] = c;

        if (c == ' ' || c == '\t')
            last_blank = pos;

        if (c == '\n') {
            // end of line, just print
            for (int i = 0; i <= pos; i++)
                putchar(line[i]);
            pos = 0;
            last_blank = -1;
        } 
        else if (pos == FOLD) {
            if (last_blank >= 0) {
                // break line at last blank
                for (int i = 0; i < last_blank; i++)
                    putchar(line[i]);
                putchar('\n');
                // move remaining characters to start
                int j = 0;
                for (int i = last_blank + 1; i <= pos; i++)
                    line[j++] = line[i];
                pos = j;
                last_blank = -1;
            } else {
                // no blank found, break at fold point
                for (int i = 0; i < FOLD; i++)
                    putchar(line[i]);
                putchar('\n');
                pos = 0;
            }
        } else {
            pos++;
        }
    }

    // print leftover characters
    for (int i = 0; i < pos; i++)
        putchar(line[i]);

    return 0;
}

