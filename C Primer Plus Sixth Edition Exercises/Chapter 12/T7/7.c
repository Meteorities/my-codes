/* manydice.c -- multiple dice rolls                    */
/* compile with diceroll.c                              */
#include <stdio.h>
#include <stdlib.h>              /* for library srand() */
#include <time.h>                /* for time()          */
#include "diceroll.h"            /* for roll_n_dice()   */
/* and for roll_count  */
int main(void)
{
	int dices, roll;
	int sides;
	int status;

	int number_of_set = 0;  //newly added
	int count;  //newly added

	srand((unsigned int)time(0)); /* randomize seed      */
	
	printf("Enter the number of sets; enter q to stop: ");
	while (scanf_s("%d", &number_of_set) == 1 && number_of_set > 0) {
		printf("How many sides and how many dices?\n");
		if (scanf_s("%d %d", &sides,&dices) == 2 && sides > 0 && dices > 0) {
			printf("Here are %d sets of %d %d-sided throws.\n",number_of_set,dices,sides);
			for (count = 0; count < number_of_set; count++) {
				roll = roll_n_dice(dices, sides);
				printf("%d   ",roll);
			}
			printf("\n");
		}
		else {
			printf("You had input wrong things.Please restart the program.\n");
			break;
		}
		printf("How many sets? Enter q to stop: ");
	}

	printf("GOOD FORTUNE TO YOU!\n");

	return 0;
}