#include<stdio.h>
#include<math.h>
#define ACCURARY 1e-8 
main()
{
	int i = 1,j = 1,k,n = 1,x;
	scanf("%d",& x);
	double sinx = 0,t;
	for(i = 1;fabs(t) >= ACCURARY;i += 2)
	{ 
  		for(k = 1;k <= i;k++) {
  		n = n * i;
		}
    j++;
   	t = pow (-1,j) * pow (x,i) / n;	
   	sinx = sinx + t;
	}
	printf("%.2lf\n",sinx);
	return 0;
}
