//기초_27p_문제7
//switch를 사용하여 'w'를 입력하면 '위 방향키를 입력하셨습니다.'
//'a'를 입력하면 '좌 방향키를 입력하셨습니다.'
//'d'를 입력하면 '우 방향키를 입력하셨습니다.'
//'s'를 입력하면 '아래 방향키를 입력하셨습니다.'를 출력하라.
//#include <stdio.h>
//int main()
//{
//	char a;
//
//	printf("단축키: 'w', 'a', 'd', 's' 를 입력하세요 ==> ");
//	scanf("%c", &a);
//
//	switch (a)
//	{
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.\n");
//		break;
//
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.\n");
//		break;
//
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	return 0;
//}


//기초_27p_문제8
//scanf로 appetizer, mainDish, dessert에 1~3의 값을 입력받는다.
//appetizer 1.캐비어, 2.샐러드, 3.푸아그라
//mainDish 1.스테이크, 2.생선요리, 3.양갈비
//dessert 1.케이크, 2.아이스크림, 3.초콜릿무스
//입력된 값에 따라 "주문한 음식은 ~,~,~입니다" 를 출력하라.
#include <stdio.h>

int main()
{
	int appetizer, mainDish, dessert;

	printf("appetizer 를 골라주세요. 1:캐비어, 2:샐러드, 3: 푸아그라 ==> ");
	scanf("%d", &appetizer);

	printf("mainDish 를 골라주세요. 1:스테이크, 2:생선요리, 3:양갈비 ==> ");
	scanf("%d", &mainDish);

	printf("dessert 를 골라주세요. 1:과일, 2:아이스크림, 3:초콜릿무스 ==> ");
	scanf("%d", &dessert);

	printf("주문한 음식은 ");

	switch (appetizer)
	{
	case 1:
		printf("캐비어, ");
		break;

	case 2:
		printf("샐러드, ");
		break;

	case 3:
		printf("푸아그라, ");
		break;
	}

	switch (mainDish)
	{
	case 1:
		printf("스테이크, ");
		break;

	case 2:
		printf("생선요리, ");
		break;

	case 3:
		printf("양갈비, ");
		break;
	}

	switch (dessert)
	{
	case 1:
		printf("과일");
		break;

	case 2:
		printf("아이스크림");
		break;

	case 3:
		printf("초콜릿무스");
		break;
	}
	printf(" 입니다. \n");

	return 0;
}