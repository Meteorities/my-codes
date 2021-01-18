#include <stdio.h>
int main(void)
{
	int n,out;
	int factorial (int n);
	int sumOfFactorial (int m);
	scanf("%d",& n);
	out = sumOfFactorial (n);
	printf("%d\n",out);
	return 0;
}
int factorial (int n) {
	int outmu = 1,i;
	for (i = 1;i <= n;i++) {
		outmu = outmu * i;
	}
	return outmu;
}
int sumOfFactorial (int m) {
	int i,outsu = 0;
	for (i = 1;i <= m;i++) { //之前int m,后面也要是 m 
		outsu += factorial (i); //you can use like this!
	}
	return outsu;
}
