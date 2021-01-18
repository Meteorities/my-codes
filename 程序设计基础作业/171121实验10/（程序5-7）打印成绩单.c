#include <stdio.h> //cd
#define MAX 30
int main(void)
{
	int number [MAX],grade [MAX][3],sum [MAX],n,i,j;
	double average [MAX];
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%d",& number [i]);
		for (j = 0;j < 3;j++) 
			scanf("%d",& grade [i][j]);
	}
	for (i = 0;i < n;i++) {
		sum [i] = 0;
		for (j = 0;j < 3;j++) {
			sum [i] += grade [i][j];	
		}
		average [i] = (double)sum [i] / 3;
	}
	printf("%8s%8s%8s%8s%8s%8s\n","NO","MT","EL","CL","SUM","AVE");
	for (i = 0;i < n;i++) {
		printf("%8d",number [i]);
		for (j = 0;j < 3;j++) 
			printf("%8d",grade [i][j]);
		printf("%8d%8d\n",sum [i],average [i]);
	}
	return 0;
}
