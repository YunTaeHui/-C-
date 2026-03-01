//기초_35p_문제1
//10~99의 두 자리 숫자를 모두 출력하라.
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
//	return 0;
//}


//기초_35p_문제2
//3~8까지의 숫자를 모두 곱한 값을 출력하라.
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
//	return 0;
//}


//기초_35p_문제3
//1 이상 50 이하의 수 중 359게임에서 박수를 쳐야하는 숫자를 모두 출력하라.
//(일 또는 십의 자리에 3, 6, 9가 하나라도 존재하면 박수를 친다.)
#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i / 10 == 3)
		{
			printf("%2d  ", i);
			if (i % 10 == 9)
				printf("\n");
		}
	}
}