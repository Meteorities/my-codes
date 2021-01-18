#include <stdio.h> //cd
#define MAX_COURSE 10
void function (int score [ ][MAX_COURSE],int m,int n)
{
	int i,j;
	int judge = 0;
	for (i = 0;i < m;i++) {
		judge = 0;
		for (j = 0;j < n;j++) {
			if (score [i][j] < 60) {
				judge = 1;
				break;
			}
			if (judge) {
				for (j = 0;j < n;j++) {
					printf("%d ",score [i][j]);
					printf("\n");
				}
			}
			if (judge == 0) {
				break;
			}
		}
	}
}
int main(void)
{
	void function (int score [ ][MAX_COURSE],int m,int n);
	int m,n,i,j;
	scanf("%d%d",& m,& n);
	int score [m][n];
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf("%d",& score [i][j]);
		}
	}
	function (score,m,n);
	return 0;
}
