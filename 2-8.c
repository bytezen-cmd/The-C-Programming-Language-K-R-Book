#include <stdio.h>
#include <limits.h>

unsigned rightrot(unsigned x, int n);

int main()
{
	unsigned x;
	printf("Enter x: ");
	scanf("%u", &x);
	printf("Enter n: ");
	int n;
	scanf("%i", &n);
	printf("Result: %u\n", rightrot(x,n));
}

unsigned rightrot(unsigned x, int n) {
	int bits = sizeof(x) * CHAR_BIT;
	return (x >> n) | (x << (bits - n));
}
