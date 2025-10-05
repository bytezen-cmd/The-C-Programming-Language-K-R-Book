#include <stdio.h>

#define MAX 1000
#define START 0

int main()
{
	int c, i;
	char line[MAX];
	
	while(1) {
		for(i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;
		line[i] = '\n';
		line[++i] = '\0';
		
		if (c == EOF)
			break;

		for(i; !(line[i] >= 'a' && line[i] <= 'z'); --i)
			;

		line[++i] = '\0';

		if (line[START] != '\n')
			printf("%s\n", line);
	}

	return 0;
}
