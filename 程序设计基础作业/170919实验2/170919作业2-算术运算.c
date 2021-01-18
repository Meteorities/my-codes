#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,d,e,f,g;
	printf ("Enter two numbers:\n");
	scanf("%d", & a); //可以写成 scanf("%d","%d", & a,b)吗？编译没出错，但是运行途中程序崩溃。 
	scanf("%d", & b); 
    c = a + b;
    d = a * b;
    e = a - b;
    f = a / b;
    g = a % b;
    printf("The sum is %d\n", c);
    printf("The product is %d\n", d);
    printf("The difference is %d\n", e);
    printf("The quotient is %d\n", f);
    printf("The remainder is %d\n", g);
    return 0;
}
