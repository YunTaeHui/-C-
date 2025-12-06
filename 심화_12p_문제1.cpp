//심화_12p_문제1
//위 예제를 보고 두 숫자를 더하는 함수 이외에 빼는 함수,
//곱하는 함수, 나누는 함수를 3개 추가로 만든 후 그 결과를 main 함수에서 출력하여 보자.
#include <stdio.h>

int add_number(int num1, int num2)
{
	int retVal = num1 + num2;
	return retVal;
}
int sub_number(int num1, int num2)
{
	int retVal = num1 - num2;
	return retVal;
}
int mul_number(int num1, int num2)
{
	int retVal = num1 * num2;
	return retVal;
}
float div_number(int num1, int num2)
{
	float retVal = (float)num1 / num2;
	return retVal;
}

int main()
{
	int a = 1, b = 2;
	int data1 = add_number(a, b);
	int data2 = sub_number(a, b);
	int data3 = mul_number(a, b);
	float data4 = div_number(a, b);

	printf("덧셈 결과 : %d\n", data1);
	printf("뺄셈 결과 : %d\n", data2);
	printf("곱셈 결과 : %d\n", data3);
	printf("나눗셈 결과 : %.1f\n", data4);
	return 0;
}