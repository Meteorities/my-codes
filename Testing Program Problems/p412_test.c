#include <stdio.h>
int main(void)
{
    int urn[3] = {100,200,300};
    int *ptr1,*ptr2;
    ptr1 = &urn[0];
    printf("%p\n%p\n%d\n",urn,ptr1,*ptr1);
    urn++;
    ptr1++;
    printf("%p\n%p\n%d\n",urn,ptr1,*ptr1);
    return 0;	
}