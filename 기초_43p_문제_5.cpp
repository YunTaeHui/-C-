//#include <stdio.h>
//
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (double conversion = 90;
//		conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//기초_42p_문제_1
//#include <stdio.h>
//
//int main()
//{
//	float conversion;
//	for (conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}

//기초_42p_문제_2
//#include <stdio.h>
//
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			conversion++;
//			//continue;
//		}
//		conversion /= 3;
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//기초_42p_문제_3
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//기초_43p_문제_2
//1: while(for_flag)에서 number = 0 출력
//2: while(number++)에서, number 1 증가 number = 1
//3: while(for_flag)의 number++에서, number 1 증가 number = 2, 
//4: while(for_flag)의 >>number = 2 출력
//5: while(for_flag) 반복, number = 2 출력
//6: while(number++)에서, number 1 증가 number = 3
//7: number > 0 이므로, while(number++) 내부로 진입, >number = 3 출력
//8: while(number++)에서, number == 3 이므로, for_flag 0으로 reset, while(number++)문 탈출
//9: while(for_flag)에서 number 1증가 number = 4
//10: while(for_flag)에서 >> number = 4 출력
//11: while 문을 벗어나서, for_flag=0, number=4 출력
//결과:
//number = 0
//>> number = 2
//number = 2
// > number = 3
//>> number = 4
//0 4

//기초_43p_문제_3
//1: while(for_flag)에서, number = 1 출력
//2: while(number++)에서, number 1증가 number = 2
//3: number > 0 이므로, while(number++) 내부로 진입, >number = 2 출력
//4: while(number++)에서, number 1증가 number = 3
//5: while(number++)에서, >number = 3 출력
//6: while(number++)에서, number == 3 이므로, for_flag 0으로 reset, while(number++)문 탈출
//7: while(for_flag)에서, number 1증가 number = 4
//8: while(for_flag)에서, >>number = 4 출력
//9: while 문을 벗어나서, for_flag = 0, number = 4 출력
//결과:
//number = 1
// > number = 2
// > number = 3
//>> number = 4
//0 4


//기초_43p_문제_4
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	for (; for_flag;) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//기초_43p_문제_5
#include <stdio.h>

int main()
{
	int for_flag = 1;
	int number = 1;
	while (for_flag) {
		printf("number = %d\n", number);		
		for (; number++ ;) {
			printf(" >number = %d\n", number);	
			if (number == 3) {					
				for_flag = 0;
				break;
			}
		}
		number++;								
		printf(">>number = %d\n", number);		
	}
	printf("%d %d\n", for_flag, number);		
	return 0;
}