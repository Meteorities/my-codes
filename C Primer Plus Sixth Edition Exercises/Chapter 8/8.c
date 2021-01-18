//�����߼��䣬�������뻺�������������⣬������
#include <stdio.h>
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);
float examine_number(float number);

int main(void) {  //menu
	char choice;
	char ch; //linshi to erase
	printf("Enter the operation of your choice:\n");
	printf("a. add             s. subtract\n");
	printf("m. multiply        d. divide\n");
	printf("q. quit\n");
	while ((choice = getchar()) != 'q') {
		switch (choice) {
		case 'a': {
			addition();
			getchar(); //������������ĸ��Ŀո��Է�switch�����������Ļس�ʱ����ʾdefault����
			break;
		}
		case 's': {
			subtraction();
			getchar(); //������������ĸ��Ŀո��Է�switch�����������Ļس�ʱ����ʾdefault����
			break;
		}
		case 'm': {
			multiplication();
			getchar(); //������������ĸ��Ŀո��Է�switch�����������Ļس�ʱ����ʾdefault����
			break;
		}
		case 'd': {
			division();
			getchar(); //������������ĸ��Ŀո��Է�switch�����������Ļس�ʱ����ʾdefault����
			break;
		}
		default: {
			printf("Program error!\n");
			
			while ((ch = getchar()) != '\n') {  //�������������������ַ�
				continue;
			}

			break;
		}
		}
	}
	printf("Bye.\n");
	return 0;
}

void addition(void) {
	float result = 0.0;
	float a = 0.0;
	float b = 0.0;

	printf("Enter first number: ");
	a = examine_number(a);
	printf("Enter second number: ");
	b = examine_number(b);
	result = a + b;
	printf("%lf + %lf = %lf\n", a, b, result);
}

void subtraction(void) {
	float result = 0.0;
	float a = 0.0;
	float b = 0.0;

	printf("Enter first number: ");
	a = examine_number(a);
	printf("Enter second number: ");
	b = examine_number(b);
	result = a - b;
	printf("%lf - %lf = %lf\n", a, b, result);
}

void multiplication(void) {
	float result = 0.0;
	float a = 0.0;
	float b = 0.0;

	printf("Enter first number: ");
	a = examine_number(a);
	printf("Enter second number: ");
	b = examine_number(b);
	result = a * b;
	printf("%lf * %lf = %lf\n", a, b, result);
}

void division(void) {
	float result = 0.0;
	float a = 0.0;
	float b = 0.0;

	printf("Enter first number: ");
	a = examine_number(a);
	printf("Enter second number: ");
	b = examine_number(b);

	while ((int)b == 0) {  //dividend shouldn't be zero,and float typecast to int in order to examine
		printf("Enter a number other than 0: ");
		b = examine_number(b);
	}

	result = a / b;
	printf("%lf / %lf = %lf\n", a, b, result);
}

float examine_number(float number) {
	char ch;

	while (scanf_s("%f", &number) != 1) {
		while ((ch = getchar()) != '\n') {
			putchar(ch);
			printf(" is not an number.\n");
			printf("Please enter a number,such as 2.5,-1.78E8,or 3: ");
		}
	}

	return number;
}
