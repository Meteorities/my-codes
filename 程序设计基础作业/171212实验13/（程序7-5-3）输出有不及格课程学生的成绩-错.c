#include <stdio.h>
#define MAX_COURSE 10 
void outputFailed (int score[ ][MAX_COURSE],int m,int n)
{
	scanf("%d%d",& m,& n);
	int i,j;
	int countless;
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf("%d",& score [i][j]);
		}
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			if (score [i][j] < 60) {
				for (countless = 0;countless < n;countless++) {
					printf("%d ",score [i][countless]);
				}
				if (countless == n) {
					printf("\n");
				}
			}
		}
	}
}
int main(void)
{
	void outputFailed (int score [ ][MAX_COURSE],int m,int n);
	int m,n;
	scanf("%d%d",& m,& n);
	int score [m][n];
	outputFailed (score [m][n],m,n);
	return 0;
}

