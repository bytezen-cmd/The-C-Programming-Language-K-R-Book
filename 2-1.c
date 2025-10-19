#include <stdio.h>
#include <limits.h>
#include <math.h>
	
int main() 
{
    printf("Range of various types using <limits.h>\n\n");
    printf("unsigned char : [%u, %u]\n", 0, UCHAR_MAX);
    printf("signed char   : [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned int  : [%u, %u]\n", 0, UINT_MAX);
    printf("signed int    : [%d, %d]\n", INT_MIN, INT_MAX);
    printf("unsigned long : [%d, %lu]\n", 0, ULONG_MAX);
    printf("signed long   : [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned short: [%u, %u]\n", 0, USHRT_MAX);
    printf("signed short  : [%d, %d]\n", SHRT_MIN, SHRT_MAX);

    printf("\nRange via manual calculation\n\n");
    printf("unsigned char : [%u, %.0lf]\n", 0, pow(2, sizeof(unsigned char)*8) - 1);
    printf("signed char   : [%.0lf, %.0lf]\n", -pow(2, sizeof(signed char)*8 - 1), pow(2, sizeof(signed char)*8 - 1) - 1);
    printf("unsigned int  : [%u, %.0lf]\n", 0, pow(2, sizeof(unsigned int)*8) - 1);
    printf("signed int    : [%.0lf, %.0lf]\n", -pow(2, sizeof(signed int)*8 - 1), pow(2, sizeof(signed int)*8 - 1) - 1);
    printf("unsigned long : [%lu, %.0lf]\n", 0UL, pow(2, sizeof(unsigned long)*8) - 1);
    printf("signed long   : [%.0lf, %.0lf]\n", -pow(2, sizeof(signed long)*8 - 1), pow(2, sizeof(signed long)*8 - 1) - 1);
    printf("unsigned short: [%u, %.0lf]\n", 0, pow(2, sizeof(unsigned short)*8) - 1);
    printf("signed short  : [%.0lf, %.0lf]\n", -pow(2, sizeof(signed short)*8 - 1), pow(2, sizeof(signed short)*8 - 1) - 1);

    return 0;
}


