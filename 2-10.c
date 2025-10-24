#include <stdio.h>

char lower(int c);

int main()
{
	int c;
	while((c = getchar()) != EOF)
		putchar(lower(c));
	return 0;
}

char lower(int c) {
	return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : (c);
}

