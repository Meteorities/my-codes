#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 1; 
	double in = 0,out = 0;
	for ( ;i != 0; ) {
		printf("Enter sales in dollars ( -1 to end ):\n");
		scanf("%lf",& in); //���������һ��Ҫ�����棡����������Bug�� 
		if (in > 0) {
			out = (in * 0.09) + 200;
			printf("Salary is: $%.2f\n\n",out);
		}
		
		if (in < 0) {
			i = 0;
		}
	}
	return 0;
} 
