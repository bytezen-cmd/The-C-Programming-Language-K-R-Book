#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, max;
	int alph_array[26];

	for (int i = 0; i < 26; i++) {
		alph_array[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if ('a' <= c && c <= 'z')
			alph_array[c - 'a']++;
	}

	max = 0;
	for (int i = 0; i < 26; i++)
		if (alph_array[i] > max)
			max = alph_array[i];

	for (int level = max + 1; level > 0; level--) {
		for (int j = 0; j < 26; j++) {
			if (alph_array[j] >= level)
				printf(" # ");
			else {
				printf("   ");
			}
		}
		printf("\n");
	}

	for (int i = 0; i < 26; i++)
		printf("__-");

	printf("\n");

	for (int i = 0; i < 26; i++) {
			putchar(' ');
			putchar(i + 'a');
			putchar(' ');
	}

	printf("\n");
}
