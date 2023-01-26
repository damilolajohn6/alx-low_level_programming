#include <stdio.h>

void __attribute__((constructor)) index(void);

/**
 * hare - Prints a string before the
 *   main function is executed.
 */
void index(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
