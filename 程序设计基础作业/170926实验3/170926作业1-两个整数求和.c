#include <stdio.h>
#include <math.h>
double weight,height,bmi;
int main(void)
{
	printf("Please enter your height (in meters):\n");
	scanf("%lf", & height);
	printf("Please enter your weight (in kilograms):\n");
	scanf("%lf", & weight);
	bmi = weight / (height * height);
	printf("Your BMI is %.2f\nBMI VALUES\nUnderweight:    less than 18.5\nNormal:         between 18.5 and 24.9\nOverweight:     between 25 and 29.9\nObese:          30 or greater\n", bmi);
	return 0;
}
