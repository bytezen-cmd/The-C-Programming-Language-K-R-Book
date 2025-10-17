#include <stdio.h>

#define TAB 8

int main()
{
	int c, spaceCount = 0, pos = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			spaceCount += 1;
			if ((spaceCount + pos) % TAB == 0){
				putchar('\t');
				spaceCount = 0;
			}
		} else {
			while (spaceCount > 0) {
				putchar(' ');
				spaceCount -= 1;
			}
			putchar(c);
			if (c == '\n')
				pos = 0;
			else
				pos += 1;
		}
	}

	return 0;
	
}
