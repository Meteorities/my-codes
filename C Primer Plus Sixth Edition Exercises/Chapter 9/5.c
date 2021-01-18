#include <stdio.h>
void larger_of(double *x,double *y);

int main(void)
{
    double x = 0.0;
    double y = 0.0;

    printf("Please input two numbers: \n");
    scanf("%lf %lf",&x,&y);
    printf("Original number:\nx = %lf        y = %lf\n",x,y);
    larger_of(&x,&y);  //pass addresses of two numbers
    printf("Numbers after exchange:\nx = %lf        y = %lf\n",x,y);
    printf("Done.\n");

    return 0;
}

void larger_of(double *x,double *y)   //use pointer to finish work
{
    if(*x > *y) {
    *y = *x;
    }
    else {
    *x = *y;
    }
}
