#include <stdio.h>

int n = 100;
int main()
{
	int n = 500;
	printf("The value of n = %d\n", n);
	{
		extern int n;
		printf("The value of n = %d\n", n);
	}
}
