#include <stdio.h> //未定义行为示例 
int main(void)
{
    int i=4;
    int x;
    x= ++i + ++i + ++i;
    printf("%d",x); //every IDE has its unique print value.
    return 0;
}
