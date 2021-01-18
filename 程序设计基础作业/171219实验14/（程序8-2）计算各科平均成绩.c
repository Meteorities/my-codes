#include <stdio.h>
#include <math.h> 
int main(void)
{
	struct student { //you need to "int" them in order!!
		int number;
		char name [10];
		char sex [1];
		int age;
		double chi,math,eng;
	};
	struct student stu_array [4] = {
		{1,{"zhangsan"},{'M'},20,86.3,88.5,78.5}, //if not using like this,you will get "warning: missing braces around initializer".
		{2,{"lisi"},{'F'},18,78.5,76.3,68.5},
		{3,{"wangwu"},{'M'},19,90.2,85.6,84.6},
		{4,{"zhaoliu"},{'F'},21,76.5,90.5,85.5} //But using much on it,you will get 
		//"Warning:braces around scalar initializer" means you don't need to use "{","}" around a single value,though it is totally legal.(Because GCC will think you may write some wrong things.)
	};
	double chisum = 0,mathsum = 0,engsum = 0;
	int i;
	for (i = 0;i < 4;i++) {
		chisum += stu_array [i].chi;
		mathsum += stu_array [i].math;
		engsum += stu_array [i].eng;  
	}
	printf("Chinese: %.2f\nMath: %.2f\nEnglish: %.2f",chisum / 4,mathsum / 4,engsum / 4);
	return 0;
}
