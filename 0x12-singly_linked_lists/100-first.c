#include "lists.h"

void pre_main(void)__attribute__ ((constructor));

/**
 * pre_main - this function executes before the main
 */

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
