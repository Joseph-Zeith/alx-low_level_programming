#include <stdio.h>
#include <stdlib.h>

Struct Students;
{
	char name[20];
	int age;
	char country[20];
	char sex;
	char class;
};

int main()
{
	struct Student1;
	struct Student2;

	strcp("Student1.name", "Joseph_Zeith");
	Student1.age = 20;
	strcp("Student1.country", "Uganda");
	strcp("Student1.sex", "Male");
	strcp("Student1.class", "Primary_Seven");

	strcp("Student2.name", "Agie_Joghie");
        Student2.age = 20;
        strcp("Student2.country", "Uganda");
        strcp("Student2.sex", "Female");
        strcp("Student2.class", "Senior_Five");

	printf("Student1 name is %s, his age is %d, his country is %s, his sex is %s, and his class is %s\n", Student1.name, Student1.age, Student1.country, Student1.sex, Student1.class);
	printf("Student2 name is %s, her age is %d, her country is %s, her sex is %s, and her class is %s\n", Student2.name, Student2.age, Student2.country, Student2.sex, Student2.class);
}
