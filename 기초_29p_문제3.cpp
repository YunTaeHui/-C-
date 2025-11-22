//기초_29p_문제1
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