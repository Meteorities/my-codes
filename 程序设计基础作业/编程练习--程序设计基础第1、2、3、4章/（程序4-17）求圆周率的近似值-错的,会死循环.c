#include <stdio.h>
#include <math.h>
int main(void)
{
	double pi,transall = 1,trans1,trans2,i;
	int count = 1;
	for (i = 1;count <= 10000;i = i + 2)
		if (count % 2 != 0) {
			transall = transall - trans1;
			count = count + 1;
		}
		if (count % 2 == 0) {
			transall = transall + trans2;
			count = count + 1;
		}
	pi = transall * 4;
	printf("%.6f",pi);
	return 0;
}
