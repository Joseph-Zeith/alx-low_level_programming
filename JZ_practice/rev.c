#include <stdio.h>

int main(void)
{
	long j;

	void getreverse(long j);{
	printf("Enter the number to reverse ");
	scanf("%ld", &j);
	getreverse(j);
	printf("\n Learning so awesome\n");
	}
	{
		void getreverse(long j1)
			{
				int r;
				while(j1 != 0)
				{
					r = j1 % 10;
					printf("%d", r);
					j1 = j1 / 10;
				}
			}
	}
}
