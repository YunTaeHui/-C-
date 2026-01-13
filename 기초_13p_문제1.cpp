//기초_13p_문제1
//변수 2가지를 정한 뒤 2가지 변수를 +,-,*,/,% 한 값들을 출력하라.
//(변수의 값이 주어지지 않으면 scanf를 사용)
#include <stdio.h>
int main()
{
	int a, b;
	printf("변수 2개를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

	return 0;
}