#include <stdio.h>
double calculation(double a, double b);
int main(void)
{
	double a, b,ans;
	printf("Please input the first floating-point number:\n");
	while (scanf_s("%lf", &a) == 1) {
		printf("Please input the second floating-point number:\n");
		scanf_s("%lf", &b);
		ans = calculation(a, b);
		printf("The answer is: %f\n", ans);
		printf("Please input the first floating-point number:\n");
	}
	return 0;
}
double calculation(double a, double b) {
	double linshi1, linshi2, ans;
	linshi1 = a - b;
	linshi2 = a * b;
	ans = linshi1 / linshi2;
	return ans;
}