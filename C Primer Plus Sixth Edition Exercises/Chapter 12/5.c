#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	unsigned int number[100] = { 0 };
	int count,i,j;
	int temp = 0;
	srand((unsigned int)time(0)); //在循环外面初始化，否则在这里就会出现所有随机数都一样的情况
	/* 出现随机数一样的原因：
	 * 计算机运行的速度过快，往往在不到1秒之内就循环完了100次语句，所以导致100个数srand的种子
	 * 都是一样的，所以导致srand语句在循环里和循环外结果都是一样的，生成的种子是一个固定值。
	 * 但是，seed值一致，只会导致每次生成的第一个随机数是一样的，
	 * （如果每次运行一次srand(n);再运行rand，生成的第一个数都是一样的；
	 * 每初始化一次相同的随机数种子srand，产生的rand随机数【组成的序列】是一样的。
	 * 参考：https://blog.csdn.net/wu_lai_314/article/details/8265924、
	 * https://blog.csdn.net/u014520797/article/details/88895514）
	 * 将srand语句放在循环外的话，就相当于取生成的100个随机数，而不是像将srand放在循环里一样，
	 * 取100次生成的第一个随机数。
	*/
	for (count = 0; count < 100; count++) {
		//srand((unsigned int)time(0)); //time(0) equals to time(NULL)
		number[count] = rand() % 10 + 1; // >= 1 && <= 10,rand() % (11 - 1) + 1,范围是[1,11),即[1,10]
		//上一条注释是错误的！要生成X到Y之间的随机数，公式应该为 rand() % (Y-X+1) + X.
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
