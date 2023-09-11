#include <ctype.h>
#include <stdio.h>

/**
  * main - prints alphabet in small letters then in capital letters
  * Return: 0 if no error
  */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i;

	for (i = 0; i < sizeof(alphabet); i++)
		putchar(alphabet[i]);

	for (i = 0; i < sizeof(alphabet); i++)
		putchar(toupper(alphabet[i]));

	putchar('\n');
	return (0);
}
