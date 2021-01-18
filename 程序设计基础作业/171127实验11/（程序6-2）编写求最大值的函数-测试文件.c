#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max ( int m , int n);
	int firstNumber, secondNumber, maxNumber;

	scanf( "%d%d", &firstNumber, &secondNumber );

	maxNumber = max ( firstNumber, secondNumber);

	printf("%d", maxNumber);

	return 0;
}
int max (int m,int n)
{
	int out = 0;
	out = m > n? m : n;
	return out; 
}
