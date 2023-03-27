#include <stdio.h>

int main(void)
{
	int a[][3] = {
		{7, 9, 34},
		{56, 9, 3},
		{20, 23, 56}
	};
	int b[][3] = {
		{3, 6, 19},
		{19, 56, 45},
		{2, 4, 8}
	};
	int c[3][3], i, j;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d\t", c[i][j]);
		}
	}
	printf("\n");
}

