//349p: 함수 사용
//[기본 10-9]에 int b=20;을 추가하여 a와 b의 합계를 계산하는 함수를 완성해보자.
//#include <stdio.h>
//
//int func1(int a, int b)
//{
//	int result;
//
//	result = a + b;
//	printf("전달받은 a ==> %d\n", a);
//	printf("전달받은 b ==> %d\n", b);
//
//	return result;
//}
//
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int res;
//
//	res = func1(a, b);
//	printf("func1() 실행 후의 %d + %d = %d\n", a, b, res);
//}


//349p: 포인터 사용
//[기본 10-9]에 int b=20;을 추가하여 a와 b의 합계를 계산하는 함수를 완성해보자.
#include <stdio.h>

void func1(int* a, int* b, int* result)
{
	*result = *a + *b;
}

void main()
{
	int a = 10;
	int b = 20;
	int result;

	func1(&a, &b, &result);
	printf("func1() 실행 후의 %d + %d = %d\n", a, b, result);
}
