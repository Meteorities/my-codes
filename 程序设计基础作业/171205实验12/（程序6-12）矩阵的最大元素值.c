#include <stdio.h>
int caculateMaxValue (int a[ ][ 20 ],int m,int n)
{
	int max,i,j;
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf("%d",& a [i][j]);
		}
	}
	max = a [0][0]; 
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			if (a [i][j] > max) {
				max = a [i][j];
			}
		}
	}
	return max;
}
int main(void)
{
	int caculateMaxValue (int a[ ][20],int m,int n);
	int m,n,a [100][20]; //运行时错误是因为数组开小了 
	scanf("%d%d",& m,& n);
	printf("%d\n",caculateMaxValue (a,m,n));
	return 0;
}
