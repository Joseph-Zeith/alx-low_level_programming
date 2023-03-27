#include <stdio.h>
#include <string.h>

int main(void)
{
	char j[100] = "Joseph loves Agie and Agie loves him too,";
	char a[] = "that`s really awesome to hear.";
	strcat(j, a);
	puts(j);
}
