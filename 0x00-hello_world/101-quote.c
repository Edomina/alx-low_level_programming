#include <stdio.h>
#include <unistd.h>
/**
 * Descrption: main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)

{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
