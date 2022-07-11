#include "main.h"
/**
*puts_half - function that prints half a string
*@str: this is input string
*/
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;
	if (index % 2 == 1)
		half++;
	
	while (half < index)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
