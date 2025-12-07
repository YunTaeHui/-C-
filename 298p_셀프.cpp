//298p
//top이 0 또는 5일 때 오류가 처리되도록 [기본9-1]을 수정해보자.
#include <stdio.h>

void main()
{
	char stack[5];
	int top = 0;

	if (top >= 5)
	{
		printf("터널이 꽉 차서 차가 못 들어감.\n");
	}
	else
	{
		stack[top] = 'A';
		printf(" %c 자동차가 터널에 들어감\n", stack[top]);
		top++;

		stack[top] = 'B';
		printf(" %c 자동차에 터널이 들어감\n", stack[top]);
		top++;

		stack[top] = 'C';
		printf(" %c 자동차에 터널이 들어감\n", stack[top]);
		top++;
	}

	printf("\n");

	if (top <= 0)
	{
		printf("현재 터널에 자동차가 없음\n");
	}
	else
	{
		top--;
		printf(" %c 자동차가 터널을 빠져나감\n", stack[top]);
		stack[top] = ' ';

		top--;
		printf(" %c 자동차가 터널을 빠져나감\n", stack[top]);
		stack[top] = ' ';

		top--;
		printf(" %c 자동차가 터널을 빠져나감\n", stack[top]);
		stack[top] = ' ';
	}
}