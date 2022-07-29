#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * calloc -> calloc library internally implemented
 * @nmemb: param 1
 * @size: param 2
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory alllocated if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p = NULL)
	{
		return NULL;
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}
