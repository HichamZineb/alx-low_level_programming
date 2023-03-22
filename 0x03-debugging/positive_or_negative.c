#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - prints if i is negative, positive or zero
 *@i: the number to add
 */

void positive_or_negative(int i)

{
	if (i > 0)
		printf("%d is positive\n", i);
		else if (i == 0)
		{
			printf("%d is zero\n", i);
		}
	else
		{
		printf("%d is negative\n", i);
		}
}
