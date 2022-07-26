#include <stdio.h>
/**
 * main - Write a program that prints the number of arguements passed into it
 * @args: This is the arguement count
 * @argv: This is the vector count
 * Return: This is return to 0
 */
int main(int args, char *argv[])
{
	print("%d\n", args - 1);
	(void)argv;
	return (0);
}
