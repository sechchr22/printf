#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
#include <limits.h>
/**
 * print_anul - to print just one %
 * @c: character %
 * Return: 1
*/
int print_anul(char c)
{
	_putchar(c);
	return (1);
}
/**
 * printd - to print a digit
 * @n: digit
 * Return: nothing
*/
void printd(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	a = n;
	if (a / 10)
	printd(a / 10);

	_putchar(a % 10 + '0');
}
/**
 * print_int - to print an integer
 * @lista: argument from variadic function
 * Return: Number of digits
*/
int print_int(va_list lista)
{
	int c, a;
	int digits = 0;

	c = va_arg(lista, int);
	a = c;

	/*printd(c);*/

	if (c == 0)
	{
		printd(c);
		digits = 1;
	}

	else
	{
		printd(c);

		while (c != 0)
		{
			c = c / 10;
			digits++;
		}

		if (a < 0)
		return (digits + 1);
	}

return (digits);
}
/**
 * victory - to find the right case and call the right
 * function to print what i want to print
 * @f: character format[i + 1]
 * @lista: argument from variadic function
 * @i: pointer that will store the address of i
 * Return: Total number of characters that i print
*/
int victory(char f, va_list lista, unsigned int *i)
{
	int count1 = 0, count2 = 0, count_victory = 0;

	switch (f)
	{
		case 'c':
				count1 = count1 + 1;
				count2 = count2 + print_char(lista);
				*i += 2;
				break;
		case 's':
				count1 = count1 + 1;
				count2 = count2 + print_string(lista);
				*i += 2;
				break;
		case '%':
				count1 = count1 + 1;
				count2 = count2 + print_anul(f);
				*i += 2;
				break;
		case 'i': case 'd':
				count1 = count1 + 1;
				count2 = count2 + print_int(lista);
				*i += 2;
				break;
	}

count_victory = count2 - (2 * count1);
return (count_victory);
}
