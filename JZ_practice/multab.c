#include <stdio.h>

int main()
{
	int j;
	int g = 1;

	printf("Enter your number of choice to calculate,please ");
	scanf("%d\n", &j);
	while (g <= 10)
	{
		printf("%d * %d = %d\n", j, g, j * g);
		++g;
	}
}
