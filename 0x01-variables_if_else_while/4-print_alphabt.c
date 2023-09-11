#include <stdio.h>

/**
  * main - prints all alphabet letters except e and q
  * Return: 0 if no error
  */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i;

	for (i = 0; i < sizeof(alphabet); i++)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
