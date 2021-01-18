#include <stdio.h>
int main(void)
{
	int stu [1000],n,i,co1 = 0,co2 = 0,co3 = 0,co4 = 0,co5 = 0,co6 = 0,co7 = 0,co8 = 0,co9 = 0,co10 = 0;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%d",& stu [i]);
		switch (stu [i]) {
			case 1:{
				co1 += 1;
				break;
			}
			case 2:{
				co2 += 1;
				break;
			}
			case 3:{
				co3 += 1;
				break;
			}
			case 4:{
				co4 += 1;
				break;
			}
			case 5:{
				co5 += 1;
				break;
			}
			case 6:{
				co6 += 1;
				break;
			}
			case 7:{
				co7 += 1;
				break;
			}
			case 8:{
				co8 += 1;
				break;
			}
			case 9:{
				co9 += 1;
				break;
			}
			case 10:{
				co10 += 1;
				break;
			}
			default:
				{
					break;
				}
		}
	}
	printf("%6s%17s\n","Rating","Frequency");
	printf("%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n%6d%17d\n",1,co1,2,co2,3,co3,4,co4,5,co5,6,co6,7,co7,8,co8,9,co9,10,co10);
	return 0;
}
