#include <stdio.h>
#include <stdlib.h>

int main()
{
	int factorial ( int );
	int n;

	scanf( "%d", &n);

	printf("%d", factorial( n ) ) ;

	return 0;
}
int factorial (int n)
{
	int out;
	if (n == 0) {
		out = 1; //0�Ľ׳���1 
	} 
	else {
		out = factorial (n - 1) * n;
	}
	return out;
}
