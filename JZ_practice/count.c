#include <stdio.h>

int main()
{
	int n, count;
	float biggest;
	float lowest;

	printf("Enter the size of the array ");
	scanf("%d", &n);
	float values[n];

	for (count = 0; count < n; ++count)
	{
		printf("values[%d] = ", count);
		scanf("%f", &values[count]);
	}
	biggest = values[0];
	for (count = 0; count < n; ++count)
	{
		if (values[count] > biggest)
		{
			biggest = values[count];
		}
	}
	lowest = values[0];
	for (count = 0; count < n; ++count)
	{
		if (values[count] < lowest)
		{
			lowest = values[count];
		}
	}
	printf("lowest value = %.2f\n", lowest);
	printf("biggest value  = %.2f\n", biggest);
	printf("range value = %.2f\n", biggest - lowest);
}
