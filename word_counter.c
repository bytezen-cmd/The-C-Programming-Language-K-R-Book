#include <stdio.h>

#define OUT 0
#define IN 1

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		++nc;
		if (c = '\n')
			++nl;
		
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
		
	}

	printf("%d %d %d\n", nl, nw, nc);
}

/*
 * To try to find bugs in the program I will try to place words distantly placed apart, I will put lots of spaces
 * afterwards and tabs to, only to hit enter, I will leave some line blank afterwards and in between to check for bugs.
 */
