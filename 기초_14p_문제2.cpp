//기초_14p_문제2
#include <stdio.h>
int main()
{
	int a;
	printf("임의의 숫자를 입력하세요.");
	scanf("%d", &a);

	printf("%d 를 50으로 나눈 값은 %d 입니다.\n", a, a % 50);

	return 0;
}