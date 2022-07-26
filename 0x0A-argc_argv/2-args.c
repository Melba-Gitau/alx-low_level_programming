#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguements a program receives.
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
