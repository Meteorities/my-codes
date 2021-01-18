#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 1; 
	double hour = 0,out = 0,rate = 0,extra = 0;
	for ( ;i != 0; ) {
		printf("Enter # of hours worked ( -1 to end ):\n");
		scanf("%lf",& hour); //这两条语句一定要在外面！否则程序会有Bug！ 
		if (hour > 0) {
			printf("Enter hourly rate of the worker:\n");
			scanf("%lf",& rate);
			if (hour > 40) {
				out = 40 * rate;
				extra = (hour - 40) * rate * 1.5;
				out = out + extra;
				printf("Salary is $%.2f\n\n",out);
			}
			if (hour <= 40) {
				out = hour * rate;
				printf("Salary is $%.2f\n\n",out);
			}
		}
		if (hour < 0) {
			i = 0;
		}
	}
	return 0;
} 
