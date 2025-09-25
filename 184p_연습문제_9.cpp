//184p_연습문제_9
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