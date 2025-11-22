//기초_43p_문제_2
//1: while(for_flag)에서 for_flag == 1 이므로 반복문 진입, "number = 0" printf
//2: while(number++)에서 number == 0 이므로 반복문 미진입, number 1 증가 number = 1
//3: while(for_flag) 반복문 내부의 number++에서, number 1 증가 number = 2, 
//4: while(for_flag) 반복문 내부의 ">>number = 2" printf
//5: while(for_flag) 반복문 내부의 "number = 2" printf
//6: while(number++)에서 number == 2(number>0) 이므로 반복문 진입, number 1 증가 number = 3
//7: while(number++)에서 number == 3 이므로 ">number = 3" 출력
//8: while(number++) 반복문 내부의 if(number == 3) 이므로, for_flag = 0, while(number++)문 break
//9: while(for_flag) 반복문 내부의 number++에서 number 1증가 number = 4
//10: while(for_flag)에서 ">> number = 4" printf
//11: for_flag == 0 이므로, while 문을 벗어나서, "for_flag=0, number=4" printf
//결과:
//number = 0
//>> number = 2
//number = 2
// > number = 3
//>> number = 4
//0 4


//기초_43p_문제_3
//1: while(for_flag)에서 for_flag == 1 이므로 반복문 진입, "number = 1" printf
//2: while(number++)에서, number 1증가 number = 2
//3: number > 0 이므로, while(number++) 내부로 진입, ">number = 2" printf
//4: while(number++)에서, number 1 증가 number = 3,
//5: while(number++)에서, ">number = 3" printf
//6: while(number++) 반복문 내부의 if(number == 3) 이므로, for_flag = 0, while(number++)문 break
//7: while(for_flag) 반복문 내부의 number++에서 number 1증가 number = 4
//8: while(for_flag)에서 ">> number = 4" printf
//9: for_flag == 0 이므로, while 문을 벗어나서, "for_flag=0, number=4" printf
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
		for (; number++;) {
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
