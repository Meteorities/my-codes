#include <stdio.h> //δ������Ϊʾ�� 
int main(void)
{
    int i=4;
    int x;
    x= ++i + ++i + ++i;
    printf("%d",x); //every IDE has its unique print value.
    return 0;
}
