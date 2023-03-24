#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;

	printf("Enter the Starting and the ending number ");
	scanf("%d, %d", &a, &b);
	for (;a <= b; ++a)
	{
		for (c = 1; c <= 10; ++c)
		{
			printf("%d * %d = %d\n", a, c, a * c);
		}
		printf("_________________________________\n");
	}
}
