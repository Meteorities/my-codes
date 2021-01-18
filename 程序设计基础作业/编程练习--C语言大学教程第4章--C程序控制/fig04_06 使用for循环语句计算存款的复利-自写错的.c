#include <stdio.h>
#include <math.h>
int main(void){
	int i;
	double out = 1000.00;
	printf("%s\n","Year    Amount on deposit");
	for (i = 1;i <= 10;i++) {
		out = out * pow(1.05,i);
		printf("   %4d             %.3f\n",i,out);
	}
	return 0;
} 
