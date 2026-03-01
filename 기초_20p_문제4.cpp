//기초_20p_문제3
//scanf로 y_age에 나이를 입력받아 전체 관람가, 12세 관람가, 15세 관람가 중 볼 수 있는 영화 등급을 전부 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//
//	printf("나이를 입력하세요.\n");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//	{
//		printf("15세 관람가 입니다.\n");
//	}
//
//	if (y_age >= 12)
//	{
//		printf("12세 관람가 입니다.\n");
//	}
//
//	printf("전체 관람가 입니다.\n");
//	return 0;
//}


//기초_20p_문제4
//scanf로 initial에 문자 하나를 입력받는다. 입력한 문자가 영어 소문자면 "소문자"를 출력하고, 영어 대문자면 "대문자"를 출력하라
#include <stdio.h>
int main()
{
	char initial;

	printf("문자를 입력하세요.\n");
	scanf("%c", &initial);

	if (initial >= 0x41 && initial <= 'Z')
		printf("%c는 대문자 입니다.\n", initial);
	else if (initial >= 'a' && initial <= 'z')
		printf("%c는 소문자 입니다.\n", initial);
	else
		printf("알파벳이 아닙니다.\n");
	return 0;
}