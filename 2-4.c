#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

void squeeze(char s1[], char s2[]);

int main() {
	printf("The strings entered should not be longer than 900 characters. Currently don't use space in both the strings.\n");
	char s1[MAX_LENGTH], s2[MAX_LENGTH];
	printf("Enter string 1: ");
	fgets(s1, MAX_LENGTH, stdin);
	printf("\nEnter string 2: ");
	fgets(s2, MAX_LENGTH, stdin);
	printf("\nString 1 after squeeze.\n");
	squeeze(s1,s2);
	printf("%s\n",s1);
}

void squeeze(char s1[], char s2[]) {
	int length1 = 0, length2 = 0;
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	char finalString[MAX_LENGTH];
	int currentIndex = 0;
	for(int index = 0; index < length1; index++)
		if (strchr(s2,s1[index]) == NULL)
			finalString[currentIndex++] = s1[index];
	for (int index = 0; index < length1; index++)
		s1[index] = finalString[index];
}
