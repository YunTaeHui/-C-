//65p
//값을 3개 입력받아 덧셈과 곱셈을 수행하도록 [응용2-3]을 수정해보자.
#include <stdio.h>
void main()
{
	int a, b, c;
	int result;

	printf("첫번째 값을 입력하세요 : ");
	scanf("%d", &a);

	printf("두번째 값을 입력하세요 : ");
	scanf("%d", &b);

	printf("세번째 값을 입력하세요 : ");
	scanf("%d", &c);

	result = a + b + c;
	printf("a + b + c의 값은 %d 입니다.\n", result);

	result = a - b - c;
	printf("a - b - c의 값은 %d 입니다.\n", result);

	result = a * b * c;
	printf("a * b * c의 값은 %d 입니다.\n", result);

	result = a / b / c;
	printf("a / b / c의 값은 %d 입니다.\n", result);
}