#include <stdio.h>
#include <math.h>
int main(void)
{
	double gallon,mile,out,sumga = 0,summi = 0,allaver;
	int i;
	for (i = 1;i != 0; ) {
		printf("Enter the gallons used ( -1 to end ):\n");
		scanf("%lf",& gallon);
		if (gallon >= 0) {
			printf("Enter the miles driven:\n");
			scanf("%lf",& mile);
			out = mile / gallon;
			printf("The miles / gallon for this tank was %.2f\n",out);
			sumga = sumga + gallon;
			summi = summi + mile;
		}
		else if (gallon < 0) {
			i = 0;
			break;
		}
	}
	allaver = summi / sumga;
	printf("The overall average miles / gallon was %.2f\n",allaver);
	return 0;
}
