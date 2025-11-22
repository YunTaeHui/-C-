//기초_33p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리 \n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}


//기초_33p_문제2
#include <stdio.h>

int main()
{
	int sheep;
	for (sheep = 1; sheep <= 50; sheep++)
	{
		if (sheep % 10 == 0) {
			printf("졸아서 양을 세지 못했다!\n");
			continue;
		}
		if (sheep == 45)
			break;
		printf("양 %d마리 \n", sheep);
	}
	return 0;
}