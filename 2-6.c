#include <stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y);
int main()
{
	unsigned x;
	printf("Enter x: \n");
	scanf("%u", &x);
	int p, n;
	printf("\nEnter p: \n");
	scanf("%i", &p);
	printf("\nEnter n: \n");
	scanf("%i", &n);
	unsigned y;
	printf("\nEnter y: \n");
	scanf("%u", &y);
	printf("\nResult: %u", setbits(x,p,n,y));
	
}
unsigned setbits(unsigned x, int p, int n, unsigned y) {
	unsigned mask = ~0;
	mask = mask << n;
	mask = ~mask;
	y = y & mask;
	mask = mask << p;
	mask = ~mask;
	x = x & mask;
	x = x | y;
	return x;	
}
