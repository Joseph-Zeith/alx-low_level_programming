#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = 100, b = 1; a >= 50 && b <= 5; a -= 2, ++b)
		printf("a = %d\t b = %d\n", a, b);
	printf("This is the end of the loop, thanks");
}
