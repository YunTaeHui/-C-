//기초_41p_문제1
//역삼각형 모양의 별을 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int outer, inter1;
//
//	for (outer = 0; outer < 4; outer++)
//	{
//		for (inter1 = 0; inter1 < 4 - outer; inter1++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//기초_41p_문제2
//피라미드 모양의 별을 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int y = 1;
//	int line = 3;
//	printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);
//
//	for (int x = line; x > 0; x--, y += 2)
//	{
//		for (space = 1; space < x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//기초_41p_문제3
//다이아 모양의 별을 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int line = 3;
//	printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);
//	int digit = line - 1;
//
//	for (y = digit; y >= 0; y--, x += 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	x -= 2;
//	for (y = 0; y <= digit; y++, x -= 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//기초_41p_문제4
//숫자로 직각 삼각형을 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//	int line = 3;
//	printf("원하는 줄 수를 입력하세요. ");
//	scanf("%d", &line);
//
//	for (int y = line; y > 0; y--, x++, num++)
//	{
//		for (space = 1; space < y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			int digit = num % 10;
//			printf("%d", digit);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//기초_41p_문제5
//이중 반복문을 사용하여 베스킨라빈스 문제를 업그레이드 해보자.
//1.두 사람이 1에서 시작하여 번갈아가면서 숫자를 한 개에서 세 개까지 연달아 말한다.(그 외에 숫자 입력 시 다시 입력)
//2.31을 말한 사람이 진다.-scanf로 숫자를 입력받는다.-한 개 이상의 수를 말하고 멈추고 싶으면 0을 입력한다.
#include <stdio.h>

int main()
{
	int input = 0;
	int current = 1;	//마지막으로 말한 숫자
	int player = 0;		//0 = a, 1 = b

	for (;;)	//게임 전체 루프 (바깥 루프)
	{
		for (int turn = 0; turn < 3; turn++)
		{
			printf("플레이어 %c : ", 'a' + player);
			scanf("%d", &input);

			if (input == 0) {
				if (turn == 0) {
					printf("최소 1개 이상 말한 뒤에 0으로 멈출 수 있어요.\n");
					turn--;
					continue;
				}
				else {
					printf("%c 종료, 다음 순서\n", 'a' + player);
					break;
				}
			}

			//숫자 잘못 입력시 재입력
			if (input != current) {
				printf("잘못 입력하셨습니다. 다음 숫자는 %d 입니다.\n", current);
				turn--;
				continue;
			}
			current++;

			//31을 말한 플레이어 패배
			if (input == 31) {
				break;
			}
		}
		if (input == 31) {
			break;
		}
		player = !player;	//다음 플레이어
	}
	printf("%c가 졌습니다!", 'a' + player);
	return 0;
}