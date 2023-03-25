#include <stdio.h>

int main()
{
	double arr[10];
	double sum = 0.0;
	int count = 0;
	while (count < 10)
	{
		printf("Enter the number");
		scanf("%lf", &arr[count]);
		sum += arr[count]; 
		++count;
	}
	printf("Sum = %.2lf\n""Average = %.2lf\n", sum, sum / 10);

}
