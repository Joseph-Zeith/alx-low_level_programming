#include <stdio.h>

/* counting  numbers from 1 - 100 */

int main(void)
{
	int n = 1;

	do

	{
		printf("%d\t", n);
		++n;
	}
	while (n <= 100);
	/* end of the loop block */
	printf("\n The control is out of the loop block\n");
}


