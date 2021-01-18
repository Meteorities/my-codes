#include <stdio.h>
int main(void)
{
    int a[11][20],i,j,n;
    scanf("%d",& n);
    for (i = 0;i < 11;i++) 
     for (j = 0;j < 20;j++)
      a [i][j] = 0;
    for (i = 0;i < 10;i++)
    {
     for (j = 0;j <= i;j++)
     {
      if (j < 1) {
	  a [i][j] = 1; //the first number in every single line
		}
      else if (i == 0) {
      	break;
      }
      else {
      	a [i][j] = a [i-1][j-1] + a [i-1][j]; //yanghui triangle's regulation
      }

     }
    }
    for (i = 0;i < 10;i++) //to output
    {
     for(j = 0;j <= n;j++)   // i means to output i lines
      	printf("%6d",a [i][j]);
    	printf("\n");
     }
}
