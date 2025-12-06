//기초_14p_문제2
//임의의 숫자가 입력됐을 때, 50으로 나눈 나머지를 출력하는 프로그램 작성.
#include <stdio.h>
int main()
{
	int a;
	printf("임의의 숫자를 입력하세요.");
	scanf("%d", &a);

	printf("%d 를 50으로 나눈 값은 %d 입니다.\n", a, a % 50);

	return 0;
}