#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
	int number,guess = 0,i = 1;
	srand(time(NULL));
	number = (rand() % 100) + 1; //"randomly" produce a number which from 1 to 100 ?
	while (1) {
	printf("Please guess the magic number: \n");	
	scanf("%d",& guess);
	if (guess > number) {
	printf("Wrong! Too high!\n\n",number);
	}
	else if (guess < number) {
	printf("Wrong! Too low!\n\n",number);
	}
	else {
	printf("Right!\nYou have already guess %d times!\n\n",i);
	break;
	}
	i = i + 1;
	}
	getch();
	return 0;
} 
