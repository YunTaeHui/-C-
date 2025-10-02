//30p 문제5 : if (ch == 'F') 조건
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch == 'F')
//		{
//			ch++;
//			continue;
//		}
//		printf("%c ", ch);
//		ch++;
//	}
//}

//30p 문제5_1 : if (ch != 'F') 조건
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch != 'F')
//			printf("%c ", ch);
//		ch++;
//
//	}
//}


//238p 기본7-8 (while)
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("더 할 두 수 입력 (멈추려면 0을 입력) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0을 입력해서 while 문을 탈출했습니다.\n");
//}

//238p 기본7-8 (for)
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	for(;;)
//	{
//		printf("더 할 두 수 입력 (멈추려면 0을 입력) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0을 입력해서 for 문을 탈출했습니다.\n");
//}


//238p 기본7-10 (For)
//#include <stdio.h>
//
//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//
//		hap += i;
//	}
//	printf("1~100 까지의 합(3의 배수 제외) : %d\n", hap);
//}


//238p 기본7-10 (While)
//#include <stdio.h>
//
//void main()
//{
//	int hap = 0;
//	int i = 1;
//
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			i++;
//			continue;
//		}
//		hap += i;
//		i++;
//	}
//	printf("1~100 까지의 합(3의 배수 제외) : %d\n", hap);
//}


//32p 타이핑작업
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d 번째 날 !\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다.\n");
//		printf("그외, 끝낸다.\n >> ");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("기분이 좋네요.\n");
//		case 3:
//			printf("도서관에서.");
//			break;
//		case 2:
//			printf("기분이 나빠요.\n");
//		case 4:
//			printf("카페에서 ");
//			break;
//		case 5: printf("학원에서 ");
//		}
//		printf("코딩 공부합니다.\n");
//		study++;
//	} while (1);
//	if (day <= 3) {
//		printf("그대로 입니다...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//
//		case 0:
//			printf("코딩 새싹이 되었습니다.!\n");
//			break;
//
//		case 1:
//			printf("프로그래머가 되었습니다.!\n");
//			break;
//
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다.!\n");
//			break;
//
//		case 3:
//			printf("BackEnd 개발자가 되었습니다.!\n");
//			break;
//
//		default:
//			printf("풀스택 개발자가 되었습니다.!\n");
//			break;
//		}
//	}
//	return 0;
//}

//기초_30p_문제_6
//#include <stdio.h>
//
//void main()
//{
//	int count;
//	int hap = 0;
//	int turn = 1;
//
//	while (1)
//	{
//		if(turn % 2 == 0)
//			printf("A : ");
//		if (turn % 2 == 1)
//			printf("B : ");
//		scanf("%d", &count);
//
//		if (count > 3) {
//			printf("숫자는 3까지만 입력하세요.\n");
//		}
//		else {
//			hap = hap + count;
//			if (turn % 2 == 0)
//				printf("=> %d\n", hap);
//			else if (turn % 2 == 1)
//				printf("=> %d\n", hap);
//			if (hap < 31)
//				turn++;
//		}
//		if (hap >= 31)
//		{
//			if (turn % 2 == 0)
//			{
//				printf("B가 이겼습니다!");
//				break;
//			}
//			else if (turn % 2 == 1)
//			{
//				printf("A가 이겼습니다!");
//				break;
//			}
//		}
//	}
//}

//기초_30p_문제_6_1
//#include <stdio.h>
//
//void main()
//{
//	int count;
//	int hap = 0;
//	int turn = 0;
//
//	while (1)
//	{
//		printf("%c : ", 'A' + turn);
//		scanf("%d", &count);
//
//		if (count > 3) {
//			printf("숫자는 3까지만 입력하세요.\n");
//			continue;
//		}
//		hap = hap + count;
//		printf("=> %d\n", hap);
//
//		//turn = !turn;
//
//		if (hap >= 31)
//		{
//			break;
//		}
//		turn = ++turn % 2;
//	}
//	//printf("%c가 이겼습니다!", 'A' + turn);
//	printf("%c가 졌습니다!", 'A' + turn);
//}



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
//#include <stdio.h>
//
//int main()
//{
//	int pass;
//	int input;
//	enum { LOGIN = 1, SIGNUP, OPTION, CREATOR };
//
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.로그인, 2.회원가입, 3.옵션, 4.만든 사람들\n");
//		pass = scanf("%d", &input);
//
//		if (pass != 1)
//			input = 0;
//
//		switch (input) {
//		case LOGIN:
//			printf("로그인 창 활성화\n");
//			break;
//		case SIGNUP:
//			printf("회원가입 창 활성화\n");
//			break;
//		case OPTION:
//			printf("옵션 창 활성화\n");
//			break;
//		case CREATOR:
//			printf("만든 사람들 소개\n");
//			break;
//		}
//	} while (input <= 4 && input >=1);
//
//	printf("항목 이외의 값 입력됨. 종료합니다.\n");
//
//	return 0;
//}


//기초_32p_문제_2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int coding = 0;
//	int rest = 0;
//	int study = 0;
//	int pass;
//	do {
//		printf("\n%d 번째 날 !\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 코딩 한다. \n");
//		printf("2. 놀러 간다. \n");
//		printf("3. 공부 한다. \n");
//		printf("그 외. 끝낸다.\n >> ");
//		scanf("%d", &command);
//
//		int randInt = rand() % 5 + 1;
//		int restInt = rand() % 4 + 1;
//		int studyInt = rand() % 5 + 1;
//
//		if (command == 1)
//		{
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서.");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//			printf("코딩 공부합니다.\n");
//			coding++;
//		}
//		else if (command == 2)
//		{
//			switch (restInt) {
//			case 1:
//				printf("기분이 좋네요. ");
//			case 3:
//				printf("먼곳에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요. ");
//			case 4:
//				printf("동네에서 ");
//			}
//			printf("놀도록 합니다.\n");
//			rest++;
//		}
//		else if (command == 3)
//		{
//			switch (studyInt) {
//			case 1:
//				printf("기분이 좋네요. ");
//			case 3:
//				printf("실무자료 공부 ");
//				break;
//			case 2:
//				printf("기분이 나빠요. ");
//			case 4:
//				printf("책보면서 공부 ");
//			case 5: printf("백준자료 공부 ");
//			}
//			printf("하도록 합니다.\n");
//			study++;
//		}
//		else
//			break;
//
//	} while (1);
//	if (day <= 3) {
//		printf("그대로 입니다...\n");
//	}
//	else {
//		if (coding > rest && coding > study)
//		{
//		int level = coding / 8;
//			switch (level) {
//			case 0:
//				printf("코딩 새싹이 되었습니다.!\n");
//				break;
//
//			case 1:
//				printf("프로그래머가 되었습니다.!\n");
//				break;
//
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다.!\n");
//				break;
//
//			case 3:
//				printf("BackEnd 개발자가 되었습니다.!\n");
//				break;
//
//			default:
//				printf("풀스택 개발자가 되었습니다.!\n");
//				break;
//			}
//		}
//		else if(rest > coding && rest > study)
//		{
//			switch (rest) {
//			case 0:
//				printf("놀지 않고 했다고 ?! \n");
//				break;
//			case 1:
//				printf("1일을 놀다니.. \n");
//				break;
//			case 2:
//				printf("2일을 놀다니.. \n");
//				break;
//			case 3:
//				printf("3일을 놀다니.. \n");
//				break;
//			default:
//				printf("그만 놀거라.. \n");
//				break;
//			}
//		}
//
//		else if (study > coding && study > rest)
//		{
//		int level_1 = study / 8;
//			switch (level_1) {
//			case 0:
//				printf("제어 새싹이 되었습니다.! \n");
//				break;
//			case 1:
//				printf("시퀀스 제어 담당자가 되었습니다.!\n");
//				break;
//			case 2:
//				printf("공정 제어 담당자가 되었습니다.!\n");
//				break;
//			case 3:
//				printf("제어 관리자가 되었습니다.!\n");
//				break;
//			default:
//				printf("리더가 되었습니다.!\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d 마리\n", sheep);
//	}
//	printf("잠들었다!");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리 \n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d 마리 \n", sheep);
//	}
//	return 0;
//}

//기초_33p_문제_1
//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리 \n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//기초_33p_문제_2
//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		if (sheep == 45)
//			break;
//		printf("양 %d마리 \n", sheep);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동 \n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약  ");
//	}
//	printf("\n");
//	return 0;
//}


//35p_문제_1
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	for (i = 10; i <= 99; i++)
//	{
//		printf("%d  ", i);
//		if (i % 9 == 0)
//			printf("\n");
//	}
//}


//35p_문제_2
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int mul=1;
//
//	for (i = 3; i <= 8; i++)
//	{
//		mul *= i;
//	}
//	printf("3 ~ 8 까지의 모든 숫자의 곱은 %d 입니다.\n", mul);
//}


//35p_문제_3
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	for (i = 1; i <= 50; i++)
//	{
//		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i / 10 == 3)
//			printf("%5d", i);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1;
//	exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}


//안되는중.
#include <stdio.h>

int main()
{
	printf("1부터 10까지 곱한 수 출력 : ");
	for (int number = 10, int exitFor = number - 1;
		exitFor; number *= exitFor, exitFor--)
	{

	}
	printf("%d\n", number);

	return 0;
}