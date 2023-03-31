#include <stdio.h>

int main()
{
	int enterstatus;
	printf("Everyone should learn coding\n");
	printf("Enter 1 to continue and 0 to exit\n");
	scanf("%d", &enterstatus);
	if (enterstatus == 1)
		main();
}
