#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  * main - ...
 *   * @argc: ...
 *    * @argv: ...
 *     *
 *      * Return: ...
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int index, source;
	char *reg;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	index = atoi(argv[1]);
	reg = argv[2];
	source = atoi(argv[3]);

	if (get_reg_func(reg) == NULL || reg[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*reg == '/' && source == 0) ||
			(*reg == '%' && source == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_reg_func(reg)(index, source));

	return (0);
}
