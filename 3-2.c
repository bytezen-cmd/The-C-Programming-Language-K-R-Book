#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

void escape(char s[], char t[]);
void reverseEscape(char t[], char s[]);

int main(){
	printf("Enter string. Maximum length allowed: 500 characters including tabs, spaces and newlines.\n");
	char s[MAXLEN];
	int c, index = 0;
	while((c = getchar()) != EOF)
		s[index++] = c;
	s[index] = '\0';
	char t[MAXLEN];

	printf("escape function\n");
	escape(s, t);
	printf("s = %s\nt = %s\n", s, t);
	printf("reverseEscape function\n");
	reverseEscape(t, s);
	printf("s = %s\nt = %s\n", s, t);

	return 0;
}

void escape(char s[], char t[]) {
    size_t length = strlen(s);
    size_t index = 0;
    for (size_t i = 0; i < length; i++) {
        if (s[i] == '\n') {
            t[index++] = '\\';
            t[index++] = 'n';
        } else if (s[i] == '\t') {
            t[index++] = '\\';
            t[index++] = 't';
        } else {
            t[index++] = s[i];
        }
    }
    t[index] = '\0';
}

void reverseEscape(char t[], char s[]) {
    size_t length = strlen(t);
    size_t index = 0;
    size_t i;
    for (i = 0; i < length; i++) {
        if (t[i] == '\\' && t[i+1] == 'n') {
            s[index++] = '\n';
            i++;
        } else if (t[i] == '\\' && t[i+1] == 't') {
            s[index++] = '\t';
            i++;
        } else {
            s[index++] = t[i];
        }
    }
    s[index] = '\0';
}
