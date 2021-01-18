#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int a = 10086;
	double b = 12333.0;
	int *p1 = & a;
	double *p2 = & b;
	printf("****** p1: %d  ******\n****** p2: %d ******\n",p1,p2);
	printf("###### (*p1): %d ######\n###### (*p2): %.f ######\n",*p1,*p2);
	printf("++++++ (&*p1): %p $$ %d ++++++\n++++++ (&*p2): %p $$ %d\n\n",&*p1,&p1,&*p2,&*p2);
	p1++;
	p2++;
	printf("%s\n","After pX++:");
		printf("****** p1: %d  ******\n****** p2: %d ******\n",p1,p2);
	printf("###### (*p1): %d ######\n###### (*p2): %.f ######\n",*p1,*p2);
	printf("++++++ (&*p1): %p $$ %d ++++++\n++++++ (&*p2): %p $$ %d\n\n",&*p1,&p1,&*p2,&*p2);
	return 0;
}