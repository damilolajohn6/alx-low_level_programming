#include "main.h"

/**
* print_last_digit
* @m: An integer input
* Description: This function prints the last digit of a number
* Return: last digit of number m
*/
int print_last_digit(int m)
{
int n;

if (m < 0)
n = -1 * (m % 10);
else
n = m % 10;

_putchar((n % 10) + '0');
return (n % 10);
}
