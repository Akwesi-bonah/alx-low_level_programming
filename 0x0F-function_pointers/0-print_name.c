#include <stdio.h>
/**
 * print_name - print name
 * @name: name argument
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL ) return;

	f(name);
}
