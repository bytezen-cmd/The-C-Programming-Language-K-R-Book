#include <stdio.h>
#include <string.h>
#define MAX 1000
int strrindex(char s[], char t[]);
int main()
{	
	int c, index1 = 0, index2 = 0;
	printf("Please keep the string at most 900 characters long.\n");
	printf("Please enter the string: ");
	char s[MAX];
	while ((c = getchar()) != EOF && c != '\n') {
		s[index1++] = c;
	}
	s[index1] = '\0';
	printf("Please enter the string whose occurence, we have to find: ");
	char t[MAX];
	while ((c = getchar()) != EOF && c != '\n') {
			t[index2++] = c;
		}
		t[index2] = '\0';
	int answer = strrindex(s, t);
	printf("The rightmost occurence is at ( -1 indicates that there was no occurence ): %d\n", answer);
	return 0;
}
int strrindex(char s[], char t[]) {
	int i = 0, j = 0;
	for (i = (int)strlen(s) - (int)strlen(t); i >= 0; i--) {
		char temp1[MAX], temp2[MAX];
		for (j = 0; j < (int)strlen(t); j++) {
			
			temp1[j] = s[i + j];
			temp2[j] = t[j];
		}
		temp1[++j] = '\0';
		temp2[++j] = '\0';
		int val = 1;
		for (size_t k = 0; k < strlen(temp1); k++)
			if (temp1[k] != temp2[k])
				val = 0;
		if (val)
			return i;
	}
	return -1;
}
