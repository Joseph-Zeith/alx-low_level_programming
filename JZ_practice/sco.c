#include <stdio.h>

int n = 100;
int main()
{
	void sample();
	printf("Value of n = %d\n", n);
	sample();
	printf("Value of n = %d\n", n);
}
void sample()
{
	void joghie();
	printf("Value of n = %d\n", n);
	joghie();
	printf("Value of n = %d\n", n);
}
void joghie()
{
	printf("Value of n = %d\n", n);
	n += 500;
	printf("Value of n = %d\n", n);
}
