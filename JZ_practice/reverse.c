#include <stdio.h>

int main()
{
	int x, r;

	printf("Enter the number to be reversed ");
	scanf("%d\n", &x);

	for(;x != 0; x = x/10)
	{
		r = x % 10;
		printf("%d\n", r);
	}
}
