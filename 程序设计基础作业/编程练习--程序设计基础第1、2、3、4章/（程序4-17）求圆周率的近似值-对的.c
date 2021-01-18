#include <stdio.h>
#include <math.h>
int main(void)
{
	double pi = 0.0,addup = 1.0,fenzi = 1.0,fenmu = 1.0,fenshu = 1.0;
	for ( ;fabs(addup) >= 1e-5; )
	{
		addup = addup + fenshu;
		fenzi = -fenzi;
		fenmu = fenmu + 2.0;
		fenshu = fenzi / fenmu;
	}
	pi = addup * 4.0;
	printf("%.6f",pi);
	return 0;
}
