#include <stdio.h>
int main(void)
{
    char array[ ][5] = {"abc","def","ghi"};
    int row,column_test;
    for (row = 0;row < 5;row++)
    {
        printf("array[%d] = %s\n",row,array[row]);	
    }
    for (column_test = 0;column_test < 5;column_test++)
    {
    	printf("array[0][%d] = %s\n",column_test,array[0][column_test]);
    }
    for (row = 0;row < 5;row++)
    {
        printf("array[%d][0] = %s\n",row,array[row][0]);	
    }
    return 0;	
}