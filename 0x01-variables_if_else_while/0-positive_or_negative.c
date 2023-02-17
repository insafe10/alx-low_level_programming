#include <stdlib.h>
#include <time.h>
/**
 * main assign a random number to teh variable n each time it's executed
 * if the number is greater than 00 is posistive , ig the number is 0 is zero
 * if the number is less than 0 is negative followed by a new line 
 * Return 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
        {
	       printf("%d is positive\n", n);
	} 
	else if (n < 0)
       	{ 
               printf("%d is negative\n", n);
        }
	 else 
        {
               printf("%d is zero\n", n);
        
	}
	 return (0);
	}
