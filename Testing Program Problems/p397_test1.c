#include <stdio.h>
int main(void)
{
	int array[ ][5] = {1,2,3,4};
	int row,column;
	for (row = 0;row < 2;row++) {
	    for (column = 0;column < 5;column++) 
	    {
	    	printf("%d\n",array[row][column]);
	    }	
	}
	
return 0;
}