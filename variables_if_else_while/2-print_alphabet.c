#include <stdio.h>

/**
 * main - Entry point
 *
 * description - print the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabeth;

	for (alphabeth = 'a'; alphabeth <= 'z'; alphabeth++)
		putchar(alphabeth);
	putchar('\n');

	return (0);
}
