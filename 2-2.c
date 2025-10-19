#include <stdio.h>

int main()
{
	int c;
	int lim = 100;
	for(int i = 0; ((i < lim - 1) * ((c = getchar()) != '\n') * (c != EOF)) == 1; i++) {
		putchar(c);
	}
	return 0;
}
