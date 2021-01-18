#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max ( int, int );
	int firstNumber, secondNumber, maxNumber;

	scanf( "%d%d", &firstNumber, &secondNumber );

	maxNumber = max ( firstNumber, secondNumber);

	printf("%d", maxNumber);

	return 0;
}

