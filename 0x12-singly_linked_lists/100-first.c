#include <stdio.h>

/**
* before_main - Function that runs before the main function.
*
* Description: Prints out a message before the main function is executed.
* This function is marked with the constructor attribute to ensure it runs
* before the main function.
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

