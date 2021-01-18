#include <stdio.h>
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
	int i,j;
	struct student temp;//temp's define?need to "struct student temp"?
	for (i = 0;i < 3;i++) { //N - 1
		for (j = 0;j < (3 - i);j++) { //N - 1 - i
			if (stu_array [j].chi < stu_array [(j + 1)].chi) { //".chi"! or will get "Error:incompatible types when assigning to type 'int' from type 'struct student' ".
			//because you cannot assign an array but a pointer
				temp = stu_array [j];
				stu_array [j] = stu_array [(j + 1)];
				stu_array [(j + 1)] = temp;
			} //need to exchange all datas in those lines!
		}
	}
	for (i = 0;i < 4;i++) {
		printf("%2d%10s%2s%4d%6.2f%6.2f%6.2f\n",stu_array [i].number,stu_array [i].name,
		stu_array [i].sex,stu_array [i].age,stu_array [i].chi,stu_array [i].math,
		stu_array [i].eng); //%s not %c
	}
	return 0;
}
