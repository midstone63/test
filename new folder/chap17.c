#include <stdio.h>

void DoublePointerSwap(int** dp1, int** dp2);
int main_17(void)
{
	// double pointer 
	/*int num1 = 10, num2 = 20;
	int* ptr1 = &num1; int* ptr2 = &num2;

	printf("%d, %d\n", *ptr1, *ptr2);
	DoublePointerSwap(&ptr1, &ptr2);
	printf("%d, %d\n", *ptr1, *ptr2);*/

	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;
	int* ptrArr[] = { ptr1, ptr2, ptr3 }; //포인터 배열. 더블 포인터. ptrArr은 int형 더블 포인터가 된다. 
	int** dptr = ptrArr;

	printf("%d, %d, %d\n", *ptrArr[0], *ptrArr[1], *ptrArr[2]);
	printf("%d, %d, %d\n", *dptr[0], *dptr[1], *dptr[2]);


	return 0;
}
