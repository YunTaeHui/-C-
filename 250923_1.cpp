//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫 숫자 : %d\n", randInt);
//	printf("다음 숫자 : %d\n", nextInt);
//
//	return 0;
//}
//1,7	1,7	1,7	1,7

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫 숫자 : %d\n", randInt);	//0 ~ 9
//	printf("다음 숫자 : %d\n", nextInt);	//50 ~ 59
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원 이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d원 이다.\n", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple 는 15개 있습니다.\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple 는 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple 는 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple 는 20개보다 적습니다.\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple 는 0개가 아닙니다.\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple 는 0개 입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple 는 10개 있습니다. \n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple 는 0개 입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple 는 0개 입니다.\n");
//	}
//	else
//	{
//		printf("apple 는 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//15 page 문제1
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

//15 page 문제2
//#include <stdio.h>
//
//int main()
//{
//	int a;
//
//	printf("숫자를 입력하세요.\n");
//	scanf("%d", &a);
//
//	if (a >= 10 && a <= 99)
//	{
//		printf("입력한 숫자는 두 자리 숫자입니다.\n");
//	}
//	else
//		printf("입력한 숫자는 두 자리 숫자가 아닙니다.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//20 page 문제3
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

////20 page 문제4 (16진수)
#include <stdio.h>

int main()
{
	char initial;

	printf("문자를 입력하세요.\n");
	scanf("%c", &initial);

	if (initial >= 0x41 && initial <= 'Z')
		printf("%c는 대문자 입니다.\n", initial);
	else if (initial >= )
		printf("%c는 소문자 입니다.\n", initial);
	else
		printf("알파벳이 아닙니다.\n");
	return 0;
}