#include "main.h"
/**
* rev_string - prints a reverse string
* @s: A pointer to an int that will be changed
* Return: void
*/

void rev_string(char *s)
{
	char *start_C, *end_C, C;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	count = length;

	start_C = s;
	end_C = s;

	for (i = 0; i < count - 1; i++)
	{
		end_C++;
	}
	for (i = 0; i < count / 2; i++)
	{
		C = *end_C;
		*end_C = *start_C;
		*start_C = C;
		start_C++;
		end_C--;
	}
}
