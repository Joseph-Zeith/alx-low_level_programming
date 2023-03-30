#include <stdio.h>

int main()
{
	int arr[] = {10, 15, 20, 45, 69};
	int n;
	void getsample(int *);
	getsample(arr);
	for (n = 0; n < 5; ++n)
	{
		printf("arr[%d] = %d\n", n, arr[n]);
	}
}
void getsample(int ptr[])
{
	int n;
	for (n = 0; n < 5; ++n)
		{
			*(ptr + n) = *(ptr + n) + 100;
		}
}
			

