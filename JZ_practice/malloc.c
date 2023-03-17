#include <stdio.h>
#include <stdlib.h>

int main()
{
	int y = 4;
	int *ptr;

	ptr = (int*) malloc(y * sizeof(int));

	if (ptr == NULL){
		printf("Memory could not allocated\n");
		return 0;
	}

	printf("Enter the values\n");

	int i;
	for (i = 0; i < y; i++){
		scanf("%d\n", ptr + i);
	}

	printf("Display the values\n");

	for (i = 0; i < y; i++){
		printf("%d\n", *(ptr + i));
	}

	free(ptr);

	return 0;
}
