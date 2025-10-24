//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복문 진입 \n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출 \n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer+1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//기초_41p_문제_1
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

//41p_문제2_시작
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	for (space = 1; space <= 3; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (star = 1; star <= 7; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
// 
//	return 0;
//}

//41p_문제2_1
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 2;
//	int y = 1;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	return 0;
//}


//41p_문제2_2
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	int x = 3;
//	int y = 1;
//
//	for (; x >= 0; )
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}

//41p_문제2_3
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int y = 1;
//
//	for (int x = 3; x >= 0; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
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

//41p_문제2_4
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int y = 1;
//	int line = 3;
//
//	for (int x = line; x >= 0; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
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

//41p_문제2_최종
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

//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	for (int x = 2, int y = 1; x <= 2, y <= 3; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int line = 2;
//
//	for (int x = 2, int y = 1; x <= line, y <= 3; x--, y += 2)
//	{
//		for (int space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x;
//	int y;
//
//	int line = 3;
//	printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);
//
//	for (x = 2, y = 1; x <= line; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
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



//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int z = 0;
//
//	for (; z <= 3;)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//		z += 1;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int z = 0;
//
//	for (int z = 0; z <= 3; z++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int line = 3;
//	
//	for (int z = 0; z <= line; z++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int line = 3;
//
//	printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);
//	if (line > 4)
//	{
//		x = x + (line - 4);
//	}
//	for (int row = 1; row <= line; row++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}

//41p_문제3_시작
//#include <stdio.h>
//
//int main()
//{
//	for (int space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//41p_문제3_1
//#include <stdio.h>
//
//int main()
//{
//	int y = 2;
//	int x = 1;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	x += 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	x += 2;
//
//	for (int space = 1; space <= 0; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 0; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//41p_문제3_2
//#include <stdio.h>
//
//int main()
//{
//	int y = 2;
//	int x = 1;
//
//	for (; y >= 0;)
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
//		
//		y -= 1;
//		x += 2;
//	}
//
//	for (; y <= 2;)
//	{
//		if (y == -1)
//			y++, x -= 2;
//			
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y += 1;
//		x -= 2;
//	}
//	return 0;
//}


//41p_문제3_3
//#include <stdio.h>
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	for (y = 2; y >= 0; y--, x += 2)
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
//
//	for (; y <= 2; y++, x -= 2)
//	{
//		if (y == -1)
//			y++, x -= 2;
//
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


//41p_문제3_4
//#include <stdio.h>
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int line=3;
//
//	for (y = line; y >= 0; y--, x += 2)
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
//
//	for (; y <= line; y++, x -= 2)
//	{
//		if (y == -1)
//			y++, x -= 2;
//
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


//41p_문제3_최종
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


//41p_문제4_시작
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star = 1;
//	int num = 1;
//
//	for (space = 1; space <= 3; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 1; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	printf("\n");
//
//	for (space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 2; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	printf("\n");
//
//	for (space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	printf("\n");
//
//	for (star = 1; star <= 4; star++)
//	{
//		printf("%d", num);
//	}
//	printf("\n");
//
//	return 0;
//}


//41p_문제4_1
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star = 1;
//	int num = 1;
//	int y = 3;
//	int x = 1;
//
//	for (space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	y -= 1;
//	x += 1;
//	printf("\n");
//
//	for (space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	y -= 1;
//	x += 1;
//	printf("\n");
//
//	for (space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	y -= 1;
//	x += 1;
//	printf("\n");
//
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	printf("\n");
//
//	return 0;
//}


//41p_문제4_2
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star = 1;
//	int num = 1;
//	int y = 3;
//	int x = 1;
//
//	for (; y >= 0;)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		num += 1;
//		y -= 1;
//		x += 1;
//		printf("\n");
//	}
//	return 0;
//}

//41p_문제4_3
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//
//	for (int y = 3; y >= 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_문제4_4
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//	int line = 3;
//
//	for (int y = line; y >= 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_문제4_5
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
//	for (int y = line; y >= 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_문제4_최종
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

//41p_문제5
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int hap = 0;
//	int turn = 0;
//
//	for (;;)
//	{
//		printf("%c : ", 'A' + turn);
//		scanf("%d", &count);
//
//		if (count > 3) {
//			printf("숫자는 3까지만 입력하세요.\n");
//			continue;
//		}
//		else if (count == 0)
//			break;
//		hap = hap + count;
//		printf("=> %d\n", hap);
//
//		if (hap >= 31)
//			break;
//		//turn = ++turn % 2;
//		turn = !turn;
//	}
//	printf("%c가 졌습니다!", 'A' + turn);
//	return 0;
//}


//41p_문제5
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
			current ++;

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