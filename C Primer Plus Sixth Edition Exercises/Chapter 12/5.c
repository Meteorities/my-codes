#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	unsigned int number[100] = { 0 };
	int count,i,j;
	int temp = 0;
	srand((unsigned int)time(0)); //��ѭ�������ʼ��������������ͻ���������������һ�������
	/* ���������һ����ԭ��
	 * ��������е��ٶȹ��죬�����ڲ���1��֮�ھ�ѭ������100����䣬���Ե���100����srand������
	 * ����һ���ģ����Ե���srand�����ѭ�����ѭ����������һ���ģ����ɵ�������һ���̶�ֵ��
	 * ���ǣ�seedֵһ�£�ֻ�ᵼ��ÿ�����ɵĵ�һ���������һ���ģ�
	 * �����ÿ������һ��srand(n);������rand�����ɵĵ�һ��������һ���ģ�
	 * ÿ��ʼ��һ����ͬ�����������srand��������rand���������ɵ����С���һ���ġ�
	 * �ο���https://blog.csdn.net/wu_lai_314/article/details/8265924��
	 * https://blog.csdn.net/u014520797/article/details/88895514��
	 * ��srand������ѭ����Ļ������൱��ȡ���ɵ�100�����������������srand����ѭ����һ����
	 * ȡ100�����ɵĵ�һ���������
	*/
	for (count = 0; count < 100; count++) {
		//srand((unsigned int)time(0)); //time(0) equals to time(NULL)
		number[count] = rand() % 10 + 1; // >= 1 && <= 10,rand() % (11 - 1) + 1,��Χ��[1,11),��[1,10]
		//��һ��ע���Ǵ���ģ�Ҫ����X��Y֮������������ʽӦ��Ϊ rand() % (Y-X+1) + X.
	}
	
	for (i = 0; i < 99; i++) {  //selection sort
		for (j = i + 1; j < 100; j++) {
			if (number[i] < number[j]) {
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}

	printf("%s\n", "100 Random numbers from 1 to 10 in decending orders:");
	for (count = 0; count < 100; count++) {
		printf("number[%d] = %u   ", count, number[count]);
		if (count % 5 == 0 && count != 0) {
			printf("\n");
		}
	}
	return 0;
}
