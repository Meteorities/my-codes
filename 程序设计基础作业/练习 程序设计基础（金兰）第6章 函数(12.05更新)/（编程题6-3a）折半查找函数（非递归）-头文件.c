#include <stdio.h>
#include <stdlib.h>

int main()
{
	int binarySearch ( int a[ ], int key, int n );

	int number[1000];
	int n, search;
	int index, position;

	scanf( "%d", &n);

	for ( index = 0; index < n; index++){
		scanf( "%d ", &number[ index ] );
	}

	scanf("%d", &search);

	position = binarySearch ( number, search, n);

	if ( position != -1 ) {
	    printf("%d is found in array element %d\n", search, position );
	}
	else {
	    printf("%d is not found\n", search );
	}

	return 0;
}
