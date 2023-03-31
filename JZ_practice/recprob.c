#include <stdio.h>

long int rec_fact(int n)
{
	long f;
	if (n == 0)
		return 1;
	f = (n * rec_fact(n - 1));
	return f;
}
int main()
{
	int num;
	long fct;
	printf("Enter the number");
	scanf("%d", &num);
	fct = rec_fact(num);
	printf("The factorial of %d is %ld\n", num, fct);
}
	

