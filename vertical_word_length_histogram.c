#include <stdio.h>


/*The program runs somewhat, It is quite wanky and there multiple issues in the format of the output. 
I don't seem to understand how to get a better
looking output, some details are missing but yeah who cares. It is very hard so, fuck you.*/
#define IN 1
#define OUT 0

int main()
{
	int c, state, wlength, max;
	int lwords[50];
	wlength = 0;
	
	for (int i = 0; i < 50; ++i) {
		lwords[i] = 0;
	}

	printf("PLEASE DON'T ENTER A WORD OF GREATER LENGTH THEN 50\n");
	state = OUT;
	
	while((c = getchar()) != EOF) {
		
		if (state == IN && (c == ' ' || c == '\n' || c == '\t')) {
			state = OUT;
			if (wlength > 0 && wlength < 51){
				++lwords[wlength - 1];
			}
			wlength = 0;
		}

		if (state == IN && !(c == ' ' || c == '\n' || c == '\t'))
					++wlength;
			
		if (state == OUT && !(c == ' ' || c == '\n' || c == '\t'))
			state = IN;
			
	}

	if (wlength > 0 && wlength < 51){
					++lwords[wlength - 1];
	}

	max = 0;
	for (int i = 0; i < 50; ++i) {
			if (max < lwords[i]) {
				max = lwords[i];
			}
	}

	for (int i = 0; i < max; ++i) {
		for (int j = 0; j < 50; ++j) {
			if (lwords[j] == max) {
				printf(" # ");
				--lwords[j];
			} else {
				printf("   ");
			}
		}
		printf("\n");
		max = 0;
			for (int i = 0; i < 50; ++i) {
					if (max < lwords[i]) {
						max = lwords[i];
					}
			}
	}

	printf("\n");
	for (int i = 0; i < 50; ++i) {
		printf("---");
	}
	printf("\n");
	printf("\n");
	for (int i = 0; i < 50; ++i) {
		printf("%2d ",i+1);
	}
	printf("\n");

	
}
