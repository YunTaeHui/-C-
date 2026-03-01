//184p_연습문제9
//다음은 키보드의 A,B,C 중 어느 것을 눌렀는지 체크하는 코드입니다. 코드의 if문을 switch ~ case 문으로 수정해 프로그램을 다시 짜보세요.
#include <stdio.h>

int main()
{
	char ch;

	printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 : ");
	scanf(" %c", &ch);

	switch (ch)
	{
	case 'A':
	case 'a': printf("A 키를 눌렀습니다.\n"); break;

	case 'B':
	case 'b': printf("B 키를 눌렀습니다.\n"); break;

	case 'C':
	case 'c': printf("C 키를 눌렀습니다.\n"); break;

	default: printf("잘못 눌렀습니다.\n"); break;
	}

	return 0;
}