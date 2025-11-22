//기초_19p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int a;
//
//	printf("숫자를 입력하세요.\n");
//	scanf("%d", &a);
//
//	if (a > 0)
//	{
//		printf("입력한 숫자는 '양수' 입니다.\n");
//	}
//	else if (a < 0)
//	{
//		printf("입력한 숫자는 '음수' 입니다.\n");
//	}
//	else
//	{
//		printf("입력한 숫자는 '0' 입니다.\n");
//	}
//	return 0;
//}

//기초_19p_문제2
#include <stdio.h>

int main()
{
	int a;

	printf("숫자를 입력하세요.\n");
	scanf("%d", &a);

	if (a >= 10 && a <= 99)
	{
		printf("입력한 숫자는 두 자리 숫자입니다.\n");
	}
	else
		printf("입력한 숫자는 두 자리 숫자가 아닙니다.\n");
	return 0;
}