#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int number,guess = 0;
	number = rand () % 100 + 1;//"randomly" produce a number which from 1 to 100
	printf("Please guess the magic number: \n");
	scanf("%d",& guess);
	if (guess > number) {
		printf("Wrong! Too high!\nThe magic number is: %d\n",number);
	}
	else if (guess < number) {
		printf("Wrong! Too low!\nThe magic number is: %d\n",number);
	}
	else {
		printf("Right!\nThe magic number is: %d\n",number);
	}
	getch();
	return 0;
} 
