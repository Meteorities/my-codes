#include<stdio.h> //cd
int main(void)
{
	int number,n,i,min;
	int array [1000];
	printf("Enter the number of integers to be processed:\n");
	scanf("%d",& number);
	printf("Enter an integer:\n");
	scanf("%d",& array [0]);
	min = array [0];
	for(n = 1;n < number;n++) {
		printf("Enter next integer:\n");
		scanf("%d",& array [n]);
	}
	for(i = 0;i < number;i++) {
		if(array [n] < min) {
			min = array [n];	
		}
	}
	printf("The smallest integer is: %d",min);
	return 0;
}
