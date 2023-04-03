#include <stdio.h>
#include "string.h"

int main()
{
	struct sales
	{
		char salesman_code[10];
		float jan_sales, feb_sales, mar_sales;
	};
	struct sales sv;
	struct sales *pt;
	pt = &sv;
	strcpy(pt->salesman_code,"NY001");
	pt->jan_sales = 15000.00;
	pt->feb_sales = 12000.00;
	pt->mar_sales = 17000.00;

	puts(pt->salesman_code);
	printf("January sales = %10.2f\n", pt->jan_sales);
	printf("February sales = %10.2f\n", pt->feb_sales);
	printf("March sales = %10.2f\n\n", pt->mar_sales);
}
