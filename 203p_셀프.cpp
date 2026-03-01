//203p
//다음과 같이 구구단이 반대로 출력되게 [기본6-12]를 수정해보자.
#include <stdio.h>

void main()
{
	int i;
	int dan;

	printf("몇 단 ? ");
	scanf("%d", &dan);

	for (i = 9; i >= 1; i--)
	{
		printf("%d X %d = %d \n", dan, i, dan * i);
	}
}