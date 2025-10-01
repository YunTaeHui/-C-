//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d 마리\n", sheep);
//	}
//	printf("잠들었다!");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리 \n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d 마리 \n", sheep);
//	}
//	return 0;
//}

//기초_33p_문제_1
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

//기초_33p_문제_2
#include <stdio.h>

int main()
{
	int sheep;
	for (sheep = 1; sheep <= 50; sheep++)
	{
		if (sheep == 10 || sheep == 20 || sheep == 30 || sheep == 40) {
			printf("졸아서 양을 세지 못했다!\n");
			continue;
		}
		if (sheep > 45)
			break;
		printf("양 %d마리 \n", sheep);
	}
	return 0;
}