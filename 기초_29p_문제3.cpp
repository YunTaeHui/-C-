//기초_29p_문제1
//while을 사용하여 'c'를 6번 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 6)
//	{
//		printf("'c'\n");
//		count++;
//	}
//	return 0;
//}


//기초_29p_문제2
//while을 사용하여 -10이상 0이하의 수를 전부 출력하라.
//#include <stdio.h>
//
//int main()
//{
//	int i=-10;
//
//	while (i<=0)
//	{
//		printf("%d   ", i);
//		i++;
//	}
//	return 0;
//}


//기초_29p_문제3
//while을 사용하여 0이상 100이하의 5의 배수들을 출력하라.
#include <stdio.h>

int main()
{
	int i = 0;

	while (i <= 100)
	{
		{
			printf("%2d  ", i);
		}
		i += 5;
		if (i % 25 == 0)
			printf("\n");
	}
	return 0;
}