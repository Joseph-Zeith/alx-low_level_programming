#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int sum;
        int a, b, c;

        printf("Enter the numbers to calculate sum ");
        scanf("%d %d %d", &a, &b, &c);
        sum = sumfnc(a, b, c);
        printf("%d", sum);

        int sum(int a, int b, int c);

        int tot;
        tot = a + b + c;
        return tot;
}
