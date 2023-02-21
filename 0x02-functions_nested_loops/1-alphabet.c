#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.	 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}





#include "main.h"


	/**
	 * main - check the code
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    print_alphabet();
	    return (0);
	}








#include "main.h"
/**
 * print_alphabet - print all the alphabets in lowercase
 */


void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
