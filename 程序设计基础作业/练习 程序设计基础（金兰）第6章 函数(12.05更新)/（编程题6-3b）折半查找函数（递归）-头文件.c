#include <stdio.h>
#include <stdlib.h>

int main()
{
	int binarySearch ( int a[ ], int key, int left, int right );

	int number[1000];
	int n, key;
	int index, position;

	scanf( "%d", &n);

	for ( index = 0; index < n; index++){
		scanf( "%d ", &number[ index ] );
	}

	scanf("%d", &key);

	position = binarySearch ( number, key, 0, n - 1 );

	if ( position != -1 ) {
	    printf("%d is found in array element %d\n", key, position );
	}
	else {
	    printf("%d is not found\n", key );
	}

	return 0;
}

