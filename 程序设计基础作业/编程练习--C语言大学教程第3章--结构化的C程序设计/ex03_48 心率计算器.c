#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,a1,b1,c1,age;
	double highrate,exratel,exrater;
	printf("Please enter month, day, and year of birth separated by spaces (use numbers):\n");
	scanf("%d%d%d",& a,& b,& c);
	printf("Please enter today's month, day, and year separated by spaces (use numbers):\n");
	scanf("%d%d%d",& a1,& b1,& c1);
	age = c1 - c;
	if(a1 < a || (a1 == a && b1 < b)) { //�ܹؼ��������ο���//��ǰ�·ݱ����յ��·�С����ǰ�·ݵ��������·ݣ�����ǰ���ڱ����յ�����С�� 
	    age = age - 1;	
	}
	highrate = 220 - age;
	exratel = highrate * 0.5;
	exrater = highrate * 0.85;
	printf("Date of Birth: %d/%d/%d\nAge: %d\n",a,b,c,age);
	printf("Maximum Heart Rate: %.2f\n",highrate);
	printf("Target Heart Rate Range: %.2f - %.2f\n",exratel,exrater);
	return 0;
}
