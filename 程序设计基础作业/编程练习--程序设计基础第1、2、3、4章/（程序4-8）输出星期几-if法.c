#include <stdio.h>
int main(void)
{
	int num = 0;
	scanf("%d",&num);
	if ( (num == 1) ) {
		printf("Monday\n");
	}
	else if ( (num == 2) ) {
		printf("Tuesday\n");
	}
	else if ( (num == 3) ) {
		printf("Wednesday\n");
	}
	else if ( (num == 4) ) {
		printf("Thursday\n");
	}
	else if ( (num == 5) ) {
		printf("Friday\n");
	}
	else if ( (num == 6) ) {
		printf("Saturday\n");
	}
	else if ( (num == 7) ) {
		printf("Sunday\n");
	}
	else {
		printf("Error\n");
	}
	return 0;
}
