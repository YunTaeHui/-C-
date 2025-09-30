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
//		{
//			printf("%c ", ch);
//			ch++;
//		}
//		else
//		{
//			ch++;
//			continue;
//		}
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
#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			continue;

		hap += i;
	}
	printf("1~100 까지의 합(3의 배수 제외) : %d\n", hap);
}


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