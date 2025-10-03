#include <stdio.h>

main()
{
	int lower, upper, step;
	float celsius, fahrenheit;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius to Fahrenheit table\n");

	celsius = lower;

	while (celsius <= upper) {
		fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahrenheit);
		celsius += step;
	}
}
