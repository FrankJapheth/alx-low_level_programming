#include <stdio.h>

/**
  * main - prints alphabet characters in reverse order
  * Return: 0if no error
  */

int main(void)
{
	char reversAlphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = (int) sizeof(reversAlphabet) - 1;
	while (i >= 0)
	{
		putchar(reversAlphabet[i]);
		i--;
	}



	putchar('\n');
	return (0);
}
