#include <stdio.h>
#include <math.h>
int main(void)
{
	double oripri,endpri;
	endpri = 0;
	printf("The amount cost is: \n");
	scanf("%lf",&oripri);
	if (oripri <= 500) {
		endpri = oripri;
	}
	if (oripri > 500 && oripri <= 800) {
		endpri = oripri * 0.9;
	}
	if (oripri > 800 && oripri <= 1000) {
		endpri = oripri * 0.8;
	}
	if (oripri > 1000) {
		endpri = oripri * 0.7;
	}
	printf("The amount actually paid by customer is: %.2f\n",endpri);
	return 0;
}
