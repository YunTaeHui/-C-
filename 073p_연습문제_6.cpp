#include <stdio.h>

void main()
{
	int a, b, c;
	int result;
	char k;

	printf("연산 기호를 입력하세요 '+' OR '*' ==> ");
	scanf("%c", &k);

	printf("첫번째 숫자를 입력하세요. ==> ");
	scanf("%d", &a);

	printf("두번째 숫자를 입력하세요. ==> ");
	scanf("%d", &b);

	printf("세번째 숫자를 입력하세요. ==> ");
	scanf("%d", &c);

	if (k == '+')
	{
		result = a + b + c;
		printf("정수 3개의 합은 %d 입니다.\n", result);
	}
	if (k == '*')
	{
		result = a * b * c;
		printf("정수 3개의 곱은 %d 입니다.\n", result);
	}
	else
		printf("'+' OR '*' 값이 아닙니다.\n");

}
