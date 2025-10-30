#include <stdio.h>
#include <string.h>

#define MAX 100

void itob(int n, char s[], int b);
void reverse(char s[]);


int main()
{
	int n, b;
	char s[MAX];
	printf("ENTER NUMBER: ");
	scanf("%d", &n);
	printf("ENTER BASE: ");
	scanf("%d", &b);
	itob(n, s, b);
	printf("RESULT: %s\n", s);
	return 0;
}

void reverse(char s[]) {
	int i, j, c;
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itob(int n, char s[], int b) {
	int i = 0;
	while(n) {
		s[i++] = (n % b) + '0';
		n /= b;
	}
	s[i] = '\0';
	reverse(s);
}
