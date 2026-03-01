//기초_19p_문제1
//scanf로 input 변수의 값을 입력받아 양수인지 음수인지 0인지 판별하라.
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
//scanf로 input 변수의 값을 입력받아 input이 10보다 크거나 같고, 99보다 작거나 같으면 "input은 두자리 숫자입니다"를 출력하고, 아닐 경우 "input은 두 자리 숫자가 아닙니다"를 출력하라.
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