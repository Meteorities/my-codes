#include <stdio.h>
int *search (int (*pRow) [4],int n);
int main(void)
{
	int score [3][4] = { {60,70,80,90},
						 {56,89,67,88},
						 {34,78,90,66} };
	int *pCol;
	int n,i;
	scanf("%d",& n);
	pCol = search (score,n);
	for (i = 0;i < 4;i++) {
		printf("%d ", *(pCol + i));
	}
	return 0;
}
int *search (int (*pRow) [4],int n)
{
	int *pt;
	pt = *(pRow + n);
	return pt;
}
