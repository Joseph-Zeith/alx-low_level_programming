#include <stdio.h>

int main()
{
	void callref(int *, float *);
	int a = 100;
	float b = 500.0;
	callref(&a, &b);
	printf("The values at the pointers a and b after the function are %d and %.2f\n\n", a, b);
}
void callref(int *a,float *b)
{
	*a = *a + 100;
	*b = *b * 3;
}
