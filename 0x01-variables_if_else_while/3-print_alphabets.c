#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
