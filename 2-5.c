#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int any(char s1[], char s2[]);

int main()
{
	printf("Don't Enter very long lines.\n");
	char s1[MAX_LENGTH], s2[MAX_LENGTH];
	printf("Enter string 1: ");
	fgets(s1, MAX_LENGTH, stdin);
	printf("\nEnter string 2: ");
	fgets(s2, MAX_LENGTH, stdin);
	printf("Index of the occurence of any character of string 2 in string 1 ( output is -1 if not found ): %i\n",any(s1, s2));
}

int any(char s1[], char s2[]) {
	for (size_t index = 0; index < strlen(s1); index++)
		for (size_t next = 0; next < strlen(s2); next++)
			if (s1[index] == s2[next])
				return index;
	return -1;
}
