#include <stdio.h>
/* 쳲��������У�Fibonacci sequence�����ֳƻƽ�ָ�����,
����ѧ���а��ɶࡤ쳲�������Leonardoda Fibonacci�������ӷ�ֳΪ���Ӷ����룬���ֳ�Ϊ���������С���
ָ��������һ�����У�1��1��2��3��5��8��13��21��34������
����ѧ�ϣ�쳲��������������±��Ե��Ƶķ������壺F(1)=1��F(2)=1, F(n)=F(n-1)+F(n-2)��n>=3��n��N*��
���ִ�����׼����ṹ����ѧ������쳲��������ж���ֱ�ӵ�Ӧ��. */
int Fibonacci(int item_number);

int main(void)
{
	int num = 0;
	int result = 0;
	printf("��������Ҫ�����쳲��������е���������Ϊ���ڵ���1������������");
	scanf("%d",&num);
	result = Fibonacci(num);
	printf("쳲��������еĵ�%d����Ϊ��%d\n",num,result);
	return 0; 
}

int Fibonacci(int item_number) {
	if (item_number == 1) {
		return 1;
	}
	else if (item_number == 2) {
		return 1;
	}
	else {
		return (Fibonacci(item_number - 1) + Fibonacci(item_number - 2));
	}
}
