//기초_33p_문제1
//양을 1마리부터 20마리까지 세는 프로그램으로 왼쪽 코드를 고쳐보자.
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
//양 50마리를 세는데 10,20,30,40 마리를 셀 때 깜빡 졸고, 45마리를 셀 때 멈추도록 위 코드를 고쳐보자.
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