#include <stdio.h>
#include <math.h>
int main(void)
{
	int grade = 0,average = 0,i = 1;
	for( ;i <= 10;i++) {
		printf("Enter grade:\n");
		scanf("%d",& grade);
		average = average + grade;
	}
	average = average / 10;
	printf("Class average is %d\n",average);
	return 0;
}
