//61p
//[기본 2-1]을 수정하여 1234와 456의 더하기, 빼기, 곱하기, 나누기 결과를 확인해보자.
#include <stdio.h>
void main()
{
	int a, b;
	int result;

	a = 1234;
	b = 456;

	result = a + b;
	printf("a + b의 값은 %d 입니다.\n", result);

	result = a - b;
	printf("a - b의 값은 %d 입니다.\n", result);

	result = a * b;
	printf("a * b의 값은 %d 입니다.\n", result);

	result = a / b;
	printf("a / b의 값은 %d 입니다.\n", result);
}