#include <stdio.h>
#include <math.h>
int main(void)
{
	int n = 0,i = 1,sum = 0;
	scanf("%d",&n);
	do {
		sum = sum + i;
		i++;
	}
	while (i <= n); //ע������Ҳ��Ӣ�ķֺţ� 
	printf("%d",sum);
	return 0;
}
