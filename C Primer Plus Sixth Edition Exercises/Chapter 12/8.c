#include <stdio.h>
#include <stdlib.h>  /*  for malloc() and free()  */

int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
	int * pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while (scanf_s("%d", &size) == 1 && size > 0) {
		printf("Enter the initialization value: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa) {
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit): ");
	}
	printf("Done.");
	return 0;
}

int * make_array(int elem, int val) {
	int * pointer_origin;
	int * pointer_operate;
	pointer_origin = (int *)malloc(elem * sizeof(int));
	for (pointer_operate = pointer_origin; pointer_operate < pointer_origin + elem; pointer_operate++) {
		*pointer_operate = val;
	}
	return pointer_origin;
}

void show_array(const int ar[], int n) {
	const int * pointer_read;
	int count = 0;
	for (pointer_read = ar; pointer_read < (ar + n); pointer_read++) {
		printf("%d  ", *pointer_read);
		count++;
		if (count % 8 == 0) {
			printf("\n");
		}
		//if ( ((pointer_read - n + 1) % 8) == 0) {
		//	printf("\n");
		//}
		/*  使用指针地址相减方法报错：
		 *  错误 C2296 “%”: 非法，左操作数包含“const int *”类型  
		 *  不知道怎么解决，先码着  2019-09-22 17:12:38  */
	}
	printf("\n");
}