//기초_39p_문제1
//구구단을 출력해보자.
//#include <stdio.h>
//
//int main()
//{
//	int dan, gugu;
//	for (dan = 2; dan <= 9; dan++)
//	{
//		for (gugu = 1; gugu <= 9; gugu++)
//		{
//			printf("%d X %d = %d\n", dan, gugu, dan * gugu);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//기초_39p_문제2
//구구단 중 3단을 제외한 나머지를 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int dan, gugu;
//	for (dan = 2; dan <= 9; dan++)
//	{
//		if (dan == 3)
//			continue;
//		for (gugu = 1; gugu <= 9; gugu++)
//		{
//			printf("%d X %d = %d\n", dan, gugu, dan * gugu);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//기초_39p_문제3
//1~4의 눈을 가진 4면 주사위 한 개와
//1~6의 눈을 가진 6면 주사위 한 개가 있다.
//두 주사위를 던져 나올 수 있는 경우를 모두 출력하라(출력 예시 : 4면 - 1, 6면 - 1)
#include <stdio.h>

int main()
{
	int Dice4, Dice6;

	for (Dice4 = 1; Dice4 <= 4; Dice4++)
	{
		for (Dice6 = 1; Dice6 <= 6; Dice6++)
		{
			printf("4면 - %d, 6면 - %d\n", Dice4, Dice6);
		}
		printf("\n");
	}
	return 0;
}