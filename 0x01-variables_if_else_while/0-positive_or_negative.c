#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	/*This program will assign a random number
	 * to the variable n each time its executed
	 */
       int n;

        srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else 
		printf("%d is negative\n", n);
 	return (0);
}	
