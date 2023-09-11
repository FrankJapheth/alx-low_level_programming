#include <stdio.h>

/**
  * main - prints alphabet characters in reverse order
  * Return: 0if no error
  */

int main(void)
{
	char reversAlphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
	unsigned long int i;
	i = 0;	
	while (i <= sizeof(reversAlphabet))
	{
		putchar(reversAlphabet[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
