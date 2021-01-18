#include <stdio.h>
int main(void)
{
	int number [4][4],i1,i2,i3,i4,j1,j2,j3,j4,sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
	for (i1 = 0;i1 < 4;i1++) {
		scanf("%d",& number [0][i1]);
	}
	for (i2 = 0;i2 < 4;i2++) {
		scanf("%d",& number [1][i2]);
	}
	for (i3 = 0;i3 < 4;i3++) {
		scanf("%d",& number [2][i3]);
	}
	for (i4 = 0;i4 < 4;i4++) {
		scanf("%d",& number [3][i4]);
	}
	for (j1 = 0;j1 < 4;j1++) {
		sum1 += number [j1][0];
	}
	for (j2 = 0;j2 < 4;j2++) {
		sum2 += number [j2][1];
	}
	for (j3 = 0;j3 < 4;j3++) {
		sum3 += number [j3][2];
	}
	for (j4 = 0;j4 < 4;j4++) {
		sum4 += number [j4][3];
	}
	printf("%6d%6d%6d%6d\n",number [0][0],number [0][1],number [0][2],number [0][3]);
	printf("%6d%6d%6d%6d\n",number [1][0],number [1][1],number [1][2],number [1][3]);
	printf("%6d%6d%6d%6d\n",number [2][0],number [2][1],number [2][2],number [2][3]);
	printf("%6d%6d%6d%6d\n",number [3][0],number [3][1],number [3][2],number [3][3]);
	printf("%6d%6d%6d%6d\n",sum1,sum2,sum3,sum4);
	return 0;
}
