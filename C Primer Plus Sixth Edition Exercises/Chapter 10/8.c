#include <stdio.h>
void copy_arr(double target_name[],double source_name[],int copy_length);

int main(void)
{
	int count;
	double source[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double target[3];
	copy_arr(target,source + 2,3);
	printf("Source array:\n");
	for (count = 0;count < 7;count++) {
		printf("%.2f ",source[count]);
	}
	printf("\n\nTarget array:\n");
	for (count = 0;count < 3;count++) {
		printf("%.2f ",target[count]);
	}
	printf("\n\nDone.\n");
	return 0;
}

void copy_arr(double target_name[],double source_name[],int copy_length)
{
	int count;
	for (count = 0;count < copy_length;count++) {
		target_name[count] = source_name[count];
	}
}
