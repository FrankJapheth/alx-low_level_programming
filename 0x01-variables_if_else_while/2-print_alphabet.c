#include <stdio.h>

/**
 * main - prints alphabet letters in small caps
 * Return: 0 if no error
 */
int main(void)
{
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	unsigned long int i;

	for (i = 0; i < sizeof(alphabet); i++)
		putchar(alphabet[i]);

	putchar('\n');
	return (0);

}
