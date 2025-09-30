//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도 \n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}


//기초_31p_문제_5
#include <stdio.h>

int main()
{
	int pass;
	int input;
	enum { LOGIN = 1, SIGNUP, OPTION, CREATOR };

	do {
		printf("\n메뉴를 선택하세요.\n");
		printf("1.로그인, 2.회원가입, 3.옵션, 4.만든 사람들\n");
		pass = scanf("%d", &input);

		if (pass != 1)
			input = 0;

		switch (input) {
		case LOGIN:
			printf("로그인 창 활성화\n");
			break;
		case SIGNUP:
			printf("회원가입 창 활성화\n");
			break;
		case OPTION:
			printf("옵션 창 활성화\n");
			break;
		case CREATOR:
			printf("만든 사람들 소개\n");
			break;
		}
	} while (input <= 4 && input > 0);

	printf("항목 이외의 값 입력됨. 종료합니다.\n");

	return 0;
}