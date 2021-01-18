#include <stdio.h>
int main(void)
{
	int counter,number,largest,selarge;
	printf("Enter the first number: ");
	scanf("%d",& number);
	largest = number;
	selarge = number;
	for (counter = 1;counter < 10;counter++) {
		printf("Enter next number: ");
		scanf("%d",& number);
		if (number > largest) { //不懂怎么查找第二大的数，参考了。 
			selarge = largest;
			largest = number;
		}
		else if (number > selarge) {
			selarge = number;
		}
	}
	printf("Largest is %d\nSecond largest is %d\n",largest,selarge);
	return 0;
}
