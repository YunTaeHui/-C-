#include <stdio.h>
int main()
{
	int* numptr;
	int num1 = 10;
	int num2 = 20;

	numptr = &num1;
	printf("%d\n", *numptr);
	numptr = &num2;
	printf("%d\n", *numptr);

	return 0;
}


//#include <stdio.h>
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA - 1));
//	printf("%d\n", *((int*)ptr + 4));
//
//	return 0;
//}


//심화_24p_문제1
//크기가 5인 배열 arr가 있다. 임의의 수로 초기화하라.
//그 다음 포인터 ptr이 있는데, arr 배열의 0번째 요소의 주소값을 가지고 있다.
//ptr을 이용하여 이 배열의 가운데로 포인터를 이동한 후, 그 요소의 값을
//출력하는 프로그램을 작성하시오.
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10,20,30,40,50 };
//	int* ptr;
//	ptr = arr;
//
//	ptr += 2;
//	printf("%d", *ptr);
//}