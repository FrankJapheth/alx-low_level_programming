#include <stdio.h>

/**
  * main - prints base 10 digits from 0
  * Return: 0 if no error
  */

int main(void)
{
	int base10Digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	unsigned long int i;

	for (i = 0; i < 10; ++i)
		printf("%d", base10Digits[i]);

	printf("\n");
	return (0);
}
