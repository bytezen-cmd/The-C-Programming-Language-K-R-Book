#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, state;

	state = OUT;
	
	while( ( c = getchar() ) != EOF ) {

		if ( state == OUT && !( c == ' ' || c == '\t' || c == '\n'))
			state = IN;
		if ( state == IN && ( c == ' ' || c == '\t' || c == '\n')) {
			state = OUT;
			putchar('\n');
		}
		if (state == IN) {
			putchar(c);
			
		}
		
	}
}
