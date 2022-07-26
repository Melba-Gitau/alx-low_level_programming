#include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into it
 * @args: This is the arguement count
 * @argv: This is the arguement vector
 * Return: This is return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
