#include <stdio.h>
#include <math.h>
int main(void)
{
    double x;
    scanf("%lf",& x);
	double result = x,item = x;
    int count = 1;
    do
    {
        item *= -x*x / (2 * count) / (2 * count + 1);
        result += item;
        ++count;
    }
    while(item>=+1e-9 || item<=-1e-9);
	printf("%.2f\n",result);
    return 0;
}
