#include <stdio.h>
int main(void)
{
    int array[ ][5] = {1,2,3,4};
    int row;
    int *ptr;
    for (row = 0;row < 5;row++) {
        printf("array[%d] = %d\n",row,array[row]);	
    }
    ptr = array[0];
    printf("*array[0] = %d\n",*array[0]);
    return 0;
}