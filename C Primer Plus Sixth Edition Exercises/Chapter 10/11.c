#include <stdio.h>

void print_array(int source_array[][5],int row);
void double_the_array(int source_array[][5],int row);

int main(void)
{
	int i,j,num[3][5]; 
	printf("Please input numbers for the array:\n");
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			scanf("%d",&num[i][j]);
		}
	}
	printf("\n\nOrigin array:\n");
	print_array(num,3); /*注意！否则会出警告:passing argument of 'xxx' makes pointer from integer 
	without a cast、expected 'int(*)[5]' but argument is of type 'int' */ 
	printf("\n\nArray after doubling:\n");
	double_the_array(num,3);
	print_array(num,3);
	printf("\nDone.\n");
	return 0;
}

void print_array(int source_array[][5],int row) {
	int a,b;
	for (a = 0;a < row;a++) {
		for (b = 0;b < 5;b++) {
			printf("%6d",source_array[a][b]);
		}
		printf("\n");
	}
}

void double_the_array(int source_array[][5],int row) {
	int a,b;
	for (a = 0;a < row;a++) {
		for (b = 0;b < 5;b++) {
			source_array[a][b] *= 2; 
		}
	} 
}
