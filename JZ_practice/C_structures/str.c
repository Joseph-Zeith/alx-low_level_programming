#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "Holberton school is awesome";
	char b[100];

	strcpy(b, a);
	printf("Target string = \n%s\n", b);
}
