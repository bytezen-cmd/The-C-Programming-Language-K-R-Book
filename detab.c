#include <stdio.h>

#define TAB 8

int main()
{
	int currCount = 1;
	int c;
	while((c = getchar()) != EOF) {
		
		if (c == '\t') {
			for(int i = 0; i < (TAB - (currCount % 4)); i++) {
				currCount += 1;
				putchar(' ');
			}
		} else if (c == '\n') {
			currCount = 0;
		} else
			putchar(c);
		currCount += 1;
	}
	
	return 0;
}
