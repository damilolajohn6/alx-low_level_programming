#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  * main - A proogram that prints the minimum number of coins to
 *   * make change for an amount of money
 *    * @argc: The arguements' counter
 *     * @argv: The argument's values
 *      * Return: 1 if the number of arguments passed is not exactly
 *       * or 0 in otherwise
 */

int main(int argc, char *argv[])
{
	int coinsValues[] = {25, 10, 5, 2, 1};
	int coins, numberOfCoins, value, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}

	numberOfCoins = 0;
	value = coins;
	for (i = 0; i < 5; ++i)
	{
		numberOfCoins += value / coinsValues[i];
		if ((value % coinsValues[i]) == 0)
			break;
		value %= coinsValues[i];
	}
	printf("%d\n", numberOfCoins);
	return (0);
}
