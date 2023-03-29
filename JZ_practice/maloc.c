#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *values;
	values = (int *)malloc(sizeof(int) * 3);
	int b;
	for (b = 0; b < 3; ++b)
	{
		printf("Values[%d] = ", b);
		scanf("%d", &values[b]);
	}
	printf("\n.............................................\n");
	int k;
	for (k = 3; k < 5; ++k)
	{
		printf("values[%d] = ", k);
		scanf("%d", &values[k]);
		values = (int *)realloc(values, sizeof(int) * 5);
	}
	printf("\n...............................................\n");
	for (k = 0; k < 5; ++k)
	{
		printf("values[%d] = %d\n", k, values[k]);
	}
}
