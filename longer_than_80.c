#include <stdio.h>

#define CHECK_VAL 80
#define MAX_LINE 1000

int check_len(char line[], int check_val);

int main()
{
	int i, c;
	char line[MAX_LINE];
	
	while(1) {
		for(i = 0; i < MAX_LINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;

		if (c == EOF && i == 0)
			break;

		if (c == '\n')
			line[i++] = '\n';

		line[i] = '\0';

		if (check_len(line, CHECK_VAL))
			printf("%s", line); 
	}

	return 0;	
}

int check_len(char l[], int c) {
	int len = 0;
	while(l[len] != '\0')
		++len;
	return len >= c;
	
}
