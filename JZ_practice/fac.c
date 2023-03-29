#include <stdio.h>

int main()
{
	int x;
	long y;

	long calcfact(int);
	printf("Enter the number");
	scanf("%d", &x);
	y = calcfact(x);
	printf("The factorial of %d = %ld\n", x, y);
}

	long calcfact(int x)
{
	long f = 1;
	while (x >= 2)
	{
		f = f * x;
		--x;
	}
	return f;
}
