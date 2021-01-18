#include <stdio.h>
void sort_and_deal(double *x,double *y,double *z);

int main(void)
{
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    printf("Please input three numbers in disorder: \n");
    scanf("%lf %lf %lf",&x,&y,&z);
    printf("Original number:\nx = %lf        y = %lf\n",x,y);
    printf("z = %lf\n",z);
    sort_and_deal(&x,&y,&z);  //pass addresses of numbers
    printf("Three numbers now in ascending order: x = %lf  y = %lf  z = %lf\n",x,y,z);
    printf("Done.\n");

    return 0;
}

void sort_and_deal(double *x,double *y,double *z)  //选择排序 selection sort
{
   double temp_num;
   double temp[3] = {*x,*y,*z};
   int outer_loop,inner_loop;
   for (outer_loop = 0;outer_loop < 2;outer_loop++) {
   	for (inner_loop = outer_loop + 1;inner_loop < 3;inner_loop++) { //内循环判断条件要改，因为只有三个数，故只比两轮（外循环条件），每轮比较相邻的两个数需比两次（内循环条件）。原条件：inner_loop < outer_loop，故一次也跑不起来。 
   		if (temp[outer_loop] > temp[inner_loop]) {
   			temp_num = temp[outer_loop];
   			temp[outer_loop] = temp[inner_loop];
   			temp[inner_loop] = temp_num;
		   }
	   }
   }
   *x = temp[0];
   *y = temp[1];
   *z = temp[2];
}
