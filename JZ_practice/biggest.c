#include <stdio.h>

int main()
{
	int getbiggest(int, int, int);
	int a, b, c, biggest;
	printf("Enter any three numbers");
	scanf("%d%d%d", &a, &b, &c);
	biggest = getbiggest(a, b, c);
	printf("The biggest value = %d\n", biggest);
}
int getbiggest(int a, int b, int c)
{
	if (a > b)
	if (a > c)
		return a;
	else
		return b;
	if (c > b)
		return c;
	else
		return b;
}

