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

