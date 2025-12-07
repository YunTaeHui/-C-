//073p_연습문제6
//더하기 또는 곱하기를 선택한 후 정수 3개를 입력해서 결과를 출력하는 코드를 작성하세요.
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