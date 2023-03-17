#include <unisted.h>
/**
 * _puts - print a string to stdout
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s)
		putchar(*s++);
}
