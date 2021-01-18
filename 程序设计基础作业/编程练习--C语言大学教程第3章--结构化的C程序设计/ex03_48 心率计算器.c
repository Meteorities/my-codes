#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,a1,b1,c1,age;
	double highrate,exratel,exrater;
	printf("Please enter month, day, and year of birth separated by spaces (use numbers):\n");
	scanf("%d%d%d",& a,& b,& c);
	printf("Please enter today's month, day, and year separated by spaces (use numbers):\n");
	scanf("%d%d%d",& a1,& b1,& c1);
	age = c1 - c;
	if(a1 < a || (a1 == a && b1 < b)) { //很关键！有所参考！//当前月份比生日的月份小，或当前月份等于生日月份，但当前日期比生日的日期小。 
	    age = age - 1;	
	}
	highrate = 220 - age;
	exratel = highrate * 0.5;
	exrater = highrate * 0.85;
	printf("Date of Birth: %d/%d/%d\nAge: %d\n",a,b,c,age);
	printf("Maximum Heart Rate: %.2f\n",highrate);
	printf("Target Heart Rate Range: %.2f - %.2f\n",exratel,exrater);
	return 0;
}
