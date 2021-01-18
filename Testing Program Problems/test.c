#include<stdio.h>
int main(void)

{
	float a;
	scanf_s("%f", &a);
	printf("Enter a floating-point value:%.2f\n", a);
	printf("fixed-point notation:%f\n", a);
	printf("exponential notation:%e\n", a);
	printf("p notation:%p", a);
	return 0;
}