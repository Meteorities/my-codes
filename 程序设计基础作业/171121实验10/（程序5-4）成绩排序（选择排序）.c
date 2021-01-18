#include <stdio.h> //need to fully understand this!
int main(void)
{
	int grade [1000],n,i,j,min,temp;
	scanf("%d",& n); 
	for (i = 0;i < n;i++) {
		scanf("%d",& grade [i]);
	}
	for (i = 0;i < (n - 1);i++) {
		min = i;  //此处加花括号，逻辑就有问题！ 
		for (j = i + 1;j < n;j++) 
			if (grade [j] < grade [min]) 
				min = j;
			if (min != i) {
				temp = grade [i];
				grade [i] = grade [min];
				grade [min] = temp;
			}
		}
	for (i = 0;i < n;i++) {
		printf("%d ",grade [i]);
	}
	return 0;
}
