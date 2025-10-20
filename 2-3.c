#include <math.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 150

int htoi(char hexadecimalString[]);

int main()
{
	printf("Enter at max a 100 digit long hexadecimal number. You may use the prefix 0x or 0X if you wish to. Preferably enter small numbers so as to not cause an integer overflow issue.\n");
	char hexadecimalString[MAX_LENGTH];
	printf("Enter the hexadecimal number: ");
	fscanf(stdin,"%s", hexadecimalString);
	if (hexadecimalString[0] == '0' && (hexadecimalString[1] == 'x' || hexadecimalString[1] == 'X')) {
		hexadecimalString[0] = '0';
		hexadecimalString[1] = '0';
	}
	int answer = htoi(hexadecimalString);
	printf("\nThe integer value is: %i\n", answer);
}

int htoi(char hexadecimalString[]) {
	int length = 0, value = 0;
	while(hexadecimalString[length] != '\0')
		length += 1;
	for(int index = 0; index < length; index++) {
		if (isdigit(hexadecimalString[index]))
			value += pow(16, length - index - 1) * (hexadecimalString[index] - '0');
		else if(hexadecimalString[index] >= 'a' && hexadecimalString[index] <= 'f')
			value += pow(16, length - index - 1) * (hexadecimalString[index] - 'a' + 10);
		else if(hexadecimalString[index] >= 'A' && hexadecimalString[index] <= 'F')
			value += pow(16, length - index - 1) * (hexadecimalString[index] - 'A' + 10);
	}
	return value;
}
