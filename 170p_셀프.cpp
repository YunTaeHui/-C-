//170p
//[응용 5-8]의 조건을 다음과 같이 좀 더 세분해서 프로그램을 만들어보자.
#include <stdio.h>

void main()
{
	int a;

	printf("점수를 입력하세요.");
	scanf("%d", &a);

	if (a >= 95)
		printf("A+ 입니다.\n");
	else if (a >= 90)
		printf("A 입니다.\n");
	else if (a >= 85)
		printf("B+ 입니다.\n");
	else if (a >= 80)
		printf("B 입니다.\n");
	else if (a >= 75)
		printf("C+ 입니다.\n");
	else if (a >= 70)
		printf("C 입니다.\n");
	else if (a >= 65)
		printf("D+ 입니다.\n");
	else if (a >= 60)
		printf("D 입니다.\n");
	else
		printf("F 입니다.\n");
}