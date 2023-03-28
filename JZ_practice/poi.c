#include <stdio.h>

int main()
{
	int *pt;
	int x = 100;
	float *fp;
	float y = 56.96;
	char *ch;
	char joghie = 'a';
	pt = &x;
	fp = &y;
	ch = &joghie;

	printf("\nAddress of x = %ls", pt);
	printf("\nAddress of y = %f", fp);
	printf("\nAddress of joghie = %s", ch);
}
