#include <stdio.h>
#define MAX 1000

void reverse(char reversed[], char line[]);
int main()
{
	printf("DON'T ENTER STRINGS EXCEEDING 1000 CHARACTERS");
	int c, i;
	char line[MAX], reversed[MAX];

	i = 0;
	
	while((c = getchar()) != EOF) {
		if (i < MAX - 1)
			line[i++] = c;

		if (c == '\n' || i == MAX - 1) {
			line[i] = '\0';
			reverse(reversed, line);
			printf("%s", reversed);
			i = 0; 
		}	
	}
	return 0;
}

void reverse(char reversed[], char line[]) {

	int i, j;
	
	for(i = 0; line[i] != '\0'; ++i)
		;

	if(i > 0 && line[i -1] != '\n') {
		i--;
		reversed[i] = '\n';
		reversed[i+1] = '\0';
	} else {
		reversed[i] = '\0';
	}

	for(j = 0; j < i; ++j)
		reversed[j] = line[i - j - 1];
}
