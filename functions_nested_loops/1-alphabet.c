#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line.
 * Code by Prince Solomon
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
}gcc -o 1-alphabet -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c main.c 1-alphabet.c
