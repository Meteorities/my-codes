#include<stdio.h>
#include<string.h>
#define max(a,b) a>b? a:b
#define ISLOWER(c) (((c)>='a')&&((c)<='z'))
int main(void)
{
	int x = 0,y = 0,n = 0;
	char c;
	printf("1-�Ƚ���������");
	printf("2-�ж��Ƿ�Сд��ĸ\n");
	printf("�����������:");
	scanf("%d",&n);
	if(n<1||n>2)
		printf("��������ȷ������"); 
	else if(n==1){
		printf("������������:"); 
		scanf("%d%d",&x,&y);
		x=max(x,y);
		printf("���ֵΪ %d",x); 
	}
	else if(n==2){
		printf("����һ����ĸ:");
		getchar();
		scanf("%c",&c);
		y=ISLOWER(c);
		printf("%c",c);
		if(y)
			printf("��Сд��ĸ\n");
		else 
			printf("����Сд��ĸ\n");
	}
	return 0;
}
