//기초_39p_문제1
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