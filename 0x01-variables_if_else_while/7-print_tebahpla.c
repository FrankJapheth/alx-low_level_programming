#include <stdio.h>

/**
  * main - prints alphabet characters in reverse order
  * Return: 0if no error
  */

int main(void)
{
	char reversAlphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i;
	unsigned long int j=0;

	for (i = 26; i>=j; i--)
		putchar(reversAlphabet[i]);

	putchar('\n');
	return (0);
}
