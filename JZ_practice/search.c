#include <stdio.h>

int main()
{
	int a[10], val, count;

	for (count = 0; count < 10; ++count)
	{
		printf("a[%d] = ", count);
		scanf("%d",&a[count]);
	}
	printf("Enter the number to search ");
	scanf("%d", &val);
	for (count = 0; count < 10; ++count)
	{
		if (val == a[count])
		{
			printf("Found at the location %d\n", count + 1);
			break;
		}
	}
			if (count == 10)
			printf("The entered value is invalid, please try again\n");
}
