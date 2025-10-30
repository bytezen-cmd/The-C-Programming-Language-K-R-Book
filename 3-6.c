#include <stdio.h>

#define WIDTH 100

void itoa(int n, char s[], int width);

int main() {
	char s[WIDTH];
	int n;
	printf("The max width by default is set to 100. If you want to make any changes feel free to make changes to the source code.\n");
	printf("Enter number: ");
	scanf("%d", &n);
	itoa(n, s, WIDTH);
	printf("RESULT: %s\n", s);
	
	return 0;
}

void itoa(int n, char s[], int width) {
	s[width - 1] = '\0';
	s[0] = (n < 0) ? '-' : '0';
	int i, sign;
	if ((sign = n) < 0)
		n = -n;
	i = width - 2;
	while(n) {
		s[i--] = n % 10 + '0';
		n /= 10;
	}
	while(i > 1) 
		s[i--] = '0';
}
