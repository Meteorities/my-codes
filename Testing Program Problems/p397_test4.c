#include <stdio.h>
int main(void)
{
    char array[ ][5] = {"abc","def","ghi"};
    printf("%s\n",array[0][2]);
    printf("%s\n",array[1][3]);
    printf("%s\n",array[2][3]);
    printf("%s\n",array[0][5]);
    printf("%s\n",array[1][5]);
    printf("%s\n",array[2][5]);
    return 0;
}