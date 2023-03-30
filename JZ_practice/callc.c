#include <stdio.h>

int main()
{
	void testvalue(int, float);
	int a = 100;
	float b = 500.0;
	testvalue(a, b);
	printf("The values of the function are  %d and %.2f\n\n", a, b);
}
void testvalue(int a1, float b1)
{
	a1 += 200;
	b1 *= 2;
	printf("The overall values returned from the function a and b are %d and %.2f respectively\n", a1, b1);
}
