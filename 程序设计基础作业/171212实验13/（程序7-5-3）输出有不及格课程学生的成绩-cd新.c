#include<stdio.h>  //cdnew
#define MAX_COURSE 10
void Function (int score[ ][ MAX_COURSE],int m,int n)
{
	int i,j;
	for(i = 0;i < m;i++){	
		for(j = 0;j < n;j++)
		if (score [i][j] < 60)
		{
			for (j = 0;j < n;j++)
			printf("%d ",score [i][j]);
			printf("\n");
			break; 
	}
} 
} 
int main(void)
{ 
	void Function (int score[ ][ MAX_COURSE],int m,int n);
	int m,n,i,j,score [100][MAX_COURSE];
	scanf("%d%d",& m,& n);
	for(i = 0;i < m;i++){
	for(j = 0;j < n;j++)
		scanf("%d",& score [i][j]);
	}
	Function(score,m,n);
	return 0;
}

