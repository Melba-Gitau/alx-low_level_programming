#include <stdio.h>
/**
 * main - write a program that prints its name, followed by a new line..
 * If you rename the program, it will print the new name line.
 * compile it again
 * You should not remove the path before the name of the program
 * @argc: This is the arguement count
 * @argv: This is the arguement vector
 * Return: this return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
