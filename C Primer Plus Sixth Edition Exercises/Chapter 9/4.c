#include <stdio.h>
double harmonic_calc(double a,double b);

int main(void)
{
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;

    printf("Please input two numbers to calculate:\n");
    scanf("%lf %lf",&a,&b);
    result = harmonic_calc(a,b);
    printf("The harmonic mean of input numbers is: %lf\n",result);

    return 0;
}

double harmonic_calc(double a,double b)
{
    double inverse_a = 0.0;
    double inverse_b = 0.0;
    double inverse_mean = 0.0;
    
    inverse_a = 1 / a;
    inverse_b = 1 / b;
    inverse_mean = (inverse_a + inverse_b) / 2;
    inverse_mean = 1 / inverse_mean;

    return inverse_mean;
}


