#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
	unsigned x;
	printf("Enter x: ");
	scanf("%u", &x);
	printf("Enter p: ");
	int p;
	scanf("%i", &p);
	printf("Enter n: ");
	int n;
	scanf("%i", &n);
	printf("Result: %u\n", invert(x,p,n));
}

unsigned invert(unsigned x, int p, int n) {
	return x ^ (~(~0U << n) << p);
}
