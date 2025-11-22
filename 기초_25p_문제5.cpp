//기초_25p_문제4
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임, 2.이어하기, 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}


//기초_25p_문제5
#include <stdio.h>

int main()
{
	int a;

	printf("0 ~ 9 사이의 숫자를 입력하세요.");
	scanf("%d", &a);

	switch (a)
	{
	case 3:
	case 6:
	case 9: printf("짝"); break;
	}
	return 0;
}