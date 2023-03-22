#include <stdio.h>

int main(void)
{
	int i = 1000;

	for (;i >= 500; printf("%d\t", i),  i -=5)
		printf(" Joghie");
	printf("\n End of the for loop\n");
}

