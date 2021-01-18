#include <stdio.h>
int main(void)
{
    int test[2] = {100,200};
    int *ptr1,*ptr2;
    ptr1 = &test[0];
    ptr2 = &test[1];
    printf("%p\n%p\n",ptr1,ptr2);
    //ptr2 = ptr2 + ptr1;
    ptr2 += ptr1;
    printf("%p\n%p\n",ptr1,ptr2);
    return 0;
}