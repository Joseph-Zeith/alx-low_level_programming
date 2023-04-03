#include <stdio.h>

int main()
{
	struct students_form
	{
		unsigned long reg_no;
		unsigned long school_fees;
		unsigned long debt;
	};
	struct students_form svar1, svar2, svar3;
	printf("Enter the reg_no, school fees and the debt of the first student");
	scanf("%lu%lu%lu\n\n", &svar1.reg_no, &svar1.school_fees, &svar1.debt);
	printf("Enter the reg_no, school fees and the debt of the second student");
	scanf("%lu%lu%lu\n\n", &svar2.reg_no, &svar2.school_fees, &svar2.debt);
	printf("Enter the reg_no, school fees and the debt of the third student");
	scanf("%lu%lu%lu\n\n", &svar3.reg_no, &svar3.school_fees, &svar3.debt);
	printf("\n The reg_no[%lu]\t of Joseph pays %lu\t and has a debt of %lu\n\n", svar1.reg_no, svar1.school_fees, svar1.debt);
	printf("\n The reg_no[%lu]\t of Agie pays %lu\t and has a debt of %lu\n\n", svar2.reg_no, svar2.school_fees, svar2.debt);
	printf("\n The reg_no[%lu]\t of Zeith pays %lu\t and has a debt of %lu\n\n", svar3.reg_no, svar3.school_fees, svar3.debt);
}
