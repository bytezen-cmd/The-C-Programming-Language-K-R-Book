#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

void expand(char s1[], char s2[]);

int main() {
    char s1[MAX], s2[2*MAX];
    int c, index = 0;
    printf("Enter string (Ctrl+D to end):\n");

    while ((c = getchar()) != EOF && index < MAX - 1) {
        s1[index++] = c;
    }
    s1[index] = '\0';
    if (s1[index - 1] == '\n') s1[index - 1] = '\0';

    expand(s1, s2);
    printf("Expanded: %s\n", s2);
    return 0;
}

void expand(char s1[], char s2[]) {
    size_t i, j = 0;
    size_t len = strlen(s1);

    for (i = 0; i < len; i++) {
        if (isalnum(s1[i]) && s1[i+1] == '-' && isalnum(s1[i+2]) && i + 2 < len) {
            for (int c = s1[i]; c <= s1[i+2]; c++) {
                s2[j++] = (char)c;
            }
            i += 2;
        } else if (s1[i] != '-') {
            s2[j++] = s1[i];
        }
    }
    s2[j] = '\0';
}

