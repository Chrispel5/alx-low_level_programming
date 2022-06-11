#include "main.h"
/**
  * print_numbers - prints 0123456789\n
  *
  * Return: Always 0.
  */
void print_numbers(void)
{
	char c;
	for (c = '1'; c < '9'; c++)
	{
		_putchar(c);
	}
	_putchar("\n");
}
