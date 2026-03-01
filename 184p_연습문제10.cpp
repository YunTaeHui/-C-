//184p_연습문제10
//다음에 제시된 switch ~ case문 코드를 if ~ else문으로 수정해보세요. 단, 중괄호({})는 사용하지 마세요.
#include <stdio.h>

int main()
{
	char ch;

	printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 : ");
	scanf("%c", &ch);

	if (ch == 'A')
		printf("A 출력 \n");
	else if (ch == 'B')
		printf("B 출력 \n");
	else if (ch == 'C')
		printf("C 출력 \n");
	else
		printf("모름 \n");

	return 0;
}