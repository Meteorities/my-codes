#include <stdio.h>
int main(void)
{
	int grade [1000],n,i,temp,j;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%d",& grade [i]);
	}
	for (i = 1;i < n;i++) {
		for (j = 0;j < (n - i);j++) { //²»Ì«Àí½â°¡ 
			if (grade [j] > grade [j + 1]) {
			temp = grade [j];
			grade [j] = grade [j + 1];
			grade [j + 1] = temp;
		}
		}
	}
	for (i = 0;i < n;i++) {
		printf("%d ",grade [i]);
	}
	return 0;
}
