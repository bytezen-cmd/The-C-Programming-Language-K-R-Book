#include <stdio.h>

int bitcount(unsigned x);

int main()
{
	printf("Enter x: ");
	unsigned x;
	scanf("%u", &x);
	printf("No of set bits: %i\n", bitcount(x));
	return 0;
}

int bitcount(unsigned x) {
	int b;
	while(x) {
		x &= x-1;
		b++;
	}
	return b;
}

/*
In a two’s complement system, the expression `x &= (x - 1)` clears the rightmost set bit (i.e., the least significant bit that is 1) in `x`.

Here’s why:

Case 1: The rightmost bit of `x` is 1  
    - Subtracting 1 flips this bit to 0, and all lower bits (none, in this case) remain unchanged.  
    - Performing `x & (x - 1)` clears this bit to 0.

Case 2: The rightmost bit of `x` is 0  
    - The subtraction propagates a borrow, flipping bits until it reaches the nearest 1 (turning it to 0) and turning the bits after it to 1.  
    - The bitwise AND between `x` and `x - 1` clears that rightmost 1 bit while leaving other bits unaffected.

In both cases, the result of `x &= (x - 1)` is `x` with its rightmost set bit removed.

*/

/*
For understanding:

x = 101
x-1 = 100
x &= x-1
x = 100

y = 110
y-1 = 101
y &= y-1
y = 100
*/
