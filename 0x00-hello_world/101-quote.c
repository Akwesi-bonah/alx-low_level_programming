#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry
 *
 * Description : print exactly "and the piece of art is usefull"
 *
 * Retrun: 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
