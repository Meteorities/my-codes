#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	void swap ( int *, int *);
	int a, b;

	scanf( "%d%d", &a, &b );
	swap( &a, &b );
	printf( "%d %d", a, b );

	return 0;
}
void swap (int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	//since this function's return value's type is "void",you shouldn't use a "return" sentence,else the complier will give you this:warning: ¡®return¡¯ with a value, in function returning void.
}
