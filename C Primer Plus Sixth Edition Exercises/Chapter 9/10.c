#include <stdio.h>

void to_base_n(int num,int base_num);

int main(void)
{
	int number,base_number;
	printf("Please input the number and the base number(2-10) you wants to convert:\n");
	scanf("%d %d",&number,&base_number);
	printf("%d converts to base %d is: ",number,base_number);
	to_base_n(number,base_number);
	return 0;
}

/* ������Ѱ˵����
��������������㣬������ʮ������ x(x>100) ��8���ƣ���ͨ�� x%8 ���Եõ���λ��ĩλ���ϵ���
�������˼��һ�£�Ϊʲô������õ��Ľ����Ϊ��λ����ʮ����������8ʱ����Ȼ���λ��
����Ľ�������ǲ��ܽ�λ�Ĳ��֣����� x=x/8�������λ�ƣ�x��8��������������һλ����
�����Ѿ�������� ��λ λ�ƺ�û���ˣ�ԭ����ʮλ����˸�λ�������ѵõ���x������ķ�ʽ��ĩλ��
���������ʮλ���������ַ�ʽ�õ��� 8������ �Ƿ��ģ��ȵõ���λ����ʮλ�����������������ʺϷŵ�ջ�У�
ȡ��ʱ���ֻᷴ���� */
void to_base_n(int num,int base_num) { //������˵ݹ鷽�� 
	if (num > 0) {
		to_base_n((num / base_num),base_num); //�˾佫ȡ�����λȥ������������������ʣ�ಿ�ֵĶ�Ӧ������Ƶ��ֱ࣬��0 
		printf("%d",(num % base_num)); /* �˾���ڸ�λ�ã��պ����õݹ���õ��ص�
		���ݹ麯����λ�ڵݹ����֮�����䣬�������������෴��˳��ִ�У���ʹȡ�����������*/
	}
}
