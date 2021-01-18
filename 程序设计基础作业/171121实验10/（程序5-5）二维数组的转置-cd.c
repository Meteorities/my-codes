#include<stdio.h>
int main (void) {
	int i,j,m,n,a [20][20],b [20][20];
	scanf("%d%d",& m,& n);
	for(i = 0;i < m;i++)
		for(j = 0;j < n;j++)
			scanf("%d",& a[i][j]);
	for(i = 0;i < m;i++)
	for(j = 0;j < n;j++)
		b [j][i] = a [i][j];
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++)
		printf("%4d",b [i][j]);
		printf("\n");
	}
	return 0;
} 
