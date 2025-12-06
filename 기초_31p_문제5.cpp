//기초_31p_문제5
//do-while문을 사용하여 사용자 인터페이스를 만든다.
//1.로그인, 2.회원가입, 3.옵션, 4.만든 사람들
//이후 scanf로 select에 값을 입력받아, select의 값이 1~4 범위가 아닌
//경우 반복문을 나가도록 하자.
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
	} while (input <= 4 && input >= 1);

	printf("항목 이외의 값 입력됨. 종료합니다.\n");

	return 0;
}