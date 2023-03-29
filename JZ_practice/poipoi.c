#include <stdio.h>

int main()
{
	int a = 100, *ptr, **pptr;
	ptr = &a;
	pptr = &ptr;

	printf("The address of a = %ls\n", ptr);
	printf("The value of a = %d\n", *ptr);
	printf("The address of pointer variable ptr = %ls\n", pptr);
	printf("The address of a = %lu\n", *pptr);
	printf("The value of a = %d\n", **pptr);
}
