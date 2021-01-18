#include <stdio.h>
int main(void)
{
	double a, b;
	double linshi1, linshi2,ans;
	printf("Please input the first floating-point number:\n");
	while (scanf_s("%lf", &a) == 1) {
		printf("Please input the second floating-point number:\n");
		scanf_s("%lf", &b);
		linshi1 = a - b;
		linshi2 = a * b;
		ans = linshi1 / linshi2;
		printf("The answer is: %f\n", ans);
		printf("Please input the first floating-point number:\n");
	}
	return 0;
}