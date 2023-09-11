#include <stdio.h>

/**
  * main - prints alphabet characters in reverse order
  * Return: 0if no error
  */

int main(void)
{
	char reversAlphabet[28] = "0abcdefghijlmnopqrstuvwxyz";
	unsigned long int i;
	unsigned long int j;

	i = sizeof(reversAlphabet) - 1;
	j = 0;
	while (i > j)
	{
		putchar(reversAlphabet[i]);
		i--;
	}

	putchar('\n');
	return (0);
}
