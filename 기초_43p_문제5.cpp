//기초_43p_문제_2
//왼쪽 코드의 반복 순서를 화살표를 사용하여 표현하고, 변수 값이 어떻게 변화하고 있는지 자세하게 적어보자.
//
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
//왼쪽 코드의 6번째 줄에 선언된 number의 값을 1로 바꾸고 결과를 확인하자.
//이때의 반복 순서를 화살표를 사용하여 표현하고, 그에 따라 변수 값이 어떻게 변화하고 있는지 자세하게 적어보자.
//
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
//number의 값에 따라 화면에 출력되는 값이 같도록 왼쪽 코드의 바깥 while 문을 for 문으로 바꾸어보자.
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
//number의 값에 따라 화면에 출력되는 값이 같도록 왼쪽 코드의 안쪽
//while문을 for문으로 바꾸어보자.
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