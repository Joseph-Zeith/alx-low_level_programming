#include <stdio.h>

int main()
{
	int *ptr;
	int a = 100;
	float *fp;
	float z = 90000.00;
	ptr = &a;
	fp = &z;

	printf("The value of a = %d\n", *ptr);
	printf("The value of z = %.2f\n", *fp);
}
