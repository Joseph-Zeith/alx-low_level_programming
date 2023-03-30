#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int sum;
        int a, b, c;
	
	int sumfnc(int a, int b, int c);
	printf("Enter the numbers to calculate sum ");
        scanf("%d %d %d", &a, &b, &c);
        sum = sumfnc(a, b, c);
        printf("%d", sum);

        int sumfnc(int a1, int b1, int c1);
	int tot;
	tot = a + b + c;
	return tot;
}
