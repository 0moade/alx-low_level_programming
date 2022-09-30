#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: argument count
 *@argv: Argument vector for values
 * Return: Always to 0
 */
int main(int argc, char *argv[])
{
	int(a);

	for (a=0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return(0);
}
