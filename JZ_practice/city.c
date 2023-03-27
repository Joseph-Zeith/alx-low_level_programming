#include <stdio.h>
#include <string.h>

int main()
{
	char city[100];
	int l;

	printf("Enter the City name");
	scanf("%s", city);
	l = strlen(city);
	printf("Length = %d\n", l);
}

