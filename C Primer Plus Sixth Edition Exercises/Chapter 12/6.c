#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	unsigned int temp_num;
	int count,general_count;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;
	int num10 = 0;
	//int num11 = 0;  //for test
	//int default_time = 0;  //for test
	//int total_time = 0;  //for test
	//int true_time = 0;  //for test

	for (general_count = 0; general_count < 10; general_count++) {
		srand((unsigned int)(time(NULL) * general_count * 10));
		for (count = 0; count < 1000; count++) {
			//temp_num = (rand() % 11 + 1);
			temp_num = (rand() % 10 + 1);  //From X to Y: rand() % (Y-X+1) + X
			//total_time++;  //for test
			switch (temp_num) {
			case 1: { num1++; break; }
			case 2: { num2++; break; }
			case 3: { num3++; break; }
			case 4: { num4++; break; }
			case 5: { num5++; break; }
			case 6: { num6++; break; }
			case 7: { num7++; break; }
			case 8: { num8++; break; }
			case 9: { num9++; break; }
			case 10: { num10++; break; }
			//case 11: { num11++; break; }  //for test
			//default: { default_time++; break; }
			default: { break; }
			}
			//true_time = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10 + num11;  //for test
		}
		printf("Every number's shown status in 1000 random numbers with seed time(NULL) * %u:\n", (unsigned int)(general_count * 10));
		printf("1 -------------------- %d time(s)\n", num1);
		printf("2 -------------------- %d time(s)\n", num2);
		printf("3 -------------------- %d time(s)\n", num3);
		printf("4 -------------------- %d time(s)\n", num4);
		printf("5 -------------------- %d time(s)\n", num5);
		printf("6 -------------------- %d time(s)\n", num6);
		printf("7 -------------------- %d time(s)\n", num7);
		printf("8 -------------------- %d time(s)\n", num8);
		printf("9 -------------------- %d time(s)\n", num9);
		printf("10 -------------------- %d time(s)\n", num10);
		num1 = 0;
		num2 = 0;
		num3 = 0;
		num4 = 0;
		num5 = 0;
		num6 = 0;
		num7 = 0;
		num8 = 0;
		num9 = 0;
		num10 = 0;
		//printf("*****%d*****\n",total_time);  //for test
		//printf("*****%d*****\n", true_time);  //for test
		//printf("*****%d*****\n", default_time);  //for test
		//printf("*****%d*****\n", num11);  //for test
		//total_time = 0;  //clear test variable
		//true_time = 0;  //clear test variable
		//default_time = 0;  //clear test variable
		//num11 = 0;  //clear test variable
		printf("\n");
	}

	printf("Done.\n");
	return 0;
}