//기초_13p_문제1
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