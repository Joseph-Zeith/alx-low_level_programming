#include <stdio.h>
#define ops 4

//The pointer functions using the Mathematical operations
float sum(float num1, float num2) {return (num1 + num2);}
float sub(float num1, float num2) {return (num1 - num2);}
float mult(float num1, float num2) {return (num1 * num2);}
float div(float num1, float num2) {return (num1 / num2);}

int main(void)
{
	float (*ptr_func[ops]) (float, float) = {sum,sub, mult, div};
	int choice;
	float num1, num2;

	printf("Enter your choice : 0 for sum, 1 for sub, 2 for multi, 3 for div\n");
	scanf("%d", &choice);

	printf("Enter the two numbers : \n");
	scanf("%f %f", &num1, &num2);

	printf("The result is : %f\n", ptr_func[choice] (num1, num2));

	return 0;
}
	


