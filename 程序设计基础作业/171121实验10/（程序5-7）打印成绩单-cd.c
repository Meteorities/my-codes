#include<stdio.h>
#define N 30
int main(void) {
	int number [N],grade [N][3],sum [N],n,i,j;
	double average [N];
	scanf("%d",&n);
	for(i = 0;i < n;i++) {
		scanf("%d",& number [i]);
	for(j = 0;j < 3;j++)
	scanf("%d",& grade [i][j]);
	}
	for(i = 0;i < n;i++) {
	sum [i] = 0;
	for(j = 0;j < 3;j++)
	sum [i] += grade [i][j];
	average [i]=(double) sum [i] / 3;
	}
	printf("%8s%8s%8s%8s%8s%8s\n","NO","MT","EL","CL","SUM","AVER");
	for(i = 0;i < n;i++){
	for(j = 0;j < 3;j++);
	printf("%8d",number [i]);
	for(j = 0;j < 3;j++)
	printf("%8d",grade [i][j]);
	printf("%8d%8.1f\n",sum [i],average [i]);
	}
	return 0;
}
