#include<stdio.h>
#include<string.h>
int main()
{
 char a[33];
 int i, num = 0;
 printf("Enter a binary number\n");
 scanf("%s", a);
 for(i=strlen(a)-1; i>=0; i--)
 {
  num*=2; /*如果用位运算的话，速度会更快*/
  num+=a[i]-'0';
 }
 printf("The decimal equivalent of %d is %d\n",a,num);
 return 0;
}
