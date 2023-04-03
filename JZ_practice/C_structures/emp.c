#include <stdio.h>
struct employees
{
	unsigned int emp_code;
	int basic_sal;
	float hra, pf, bonus;
};
int main(void)
{
	struct employees evar;
	float get_netsalary(struct employees);
	float net_sal;
	printf("Enter the values of employee`s code, basic salary, hra, pf and bonus");
	scanf("%u%d%f%f%f", &evar.emp_code, &evar.basic_sal, &evar.hra, &evar.pf, &evar.bonus);
	net_sal = get_netsalary(evar);
	printf("Net Salary = %10.2f\n", net_sal);
}
float get_netsalary(struct employees fvar)
{
	float net_sal;
	net_sal = fvar.basic_sal + fvar.hra + fvar.bonus - fvar.pf;
	return net_sal;
}
