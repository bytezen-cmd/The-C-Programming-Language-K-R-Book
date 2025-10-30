#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

#define MAX 12

void reverse(char s[]);
void itoa(int n, char s[]);

int main() {
	printf("Smallest Integer: %d\n", INT_MIN);
	printf("Enter the number you want to convert to a string: ");
	int n;
	char s[MAX];
	scanf("%d", &n);
	itoa(n, s);
	printf("RESULT: %s\n", s);
	return 0;
}

void reverse(char s[]) {
	int c, i, j;
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}	
}

void itoa(int n, char s[]) {
	float sign;
	sign = (float)n;
	int i;
	long z;
	if (fabs(sign) != sign)
		z = -(long)n;
	else
		z = (long)n;
	i = 0;
	do {
		s[i++] = z % 10 + '0';
	} while ((z /= 10) > 0);
	if (fabs(sign) != sign)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

