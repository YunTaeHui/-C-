//42p_����1-1
//#include <stdio.h>
//
//int main()
//{
//	for (float conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}


//42p_����1-2
//#include <stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1) {
//
//		if (conversion == 10) {
//			conversion /= 3;
//			continue;
//		}
//
//		printf("%.3lf\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}


//42p_����1-3
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
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

//����_43p_����_2
//1: while(for_flag)���� for_flag == 1 �̹Ƿ� �ݺ��� ����, "number = 0" printf
//2: while(number++)���� number == 0 �̹Ƿ� �ݺ��� ������, number 1 ���� number = 1
//3: while(for_flag) �ݺ��� ������ number++����, number 1 ���� number = 2, 
//4: while(for_flag) �ݺ��� ������ ">>number = 2" printf
//5: while(for_flag) �ݺ��� ������ "number = 2" printf
//6: while(number++)���� number == 2(number>0) �̹Ƿ� �ݺ��� ����, number 1 ���� number = 3
//7: while(number++)���� number == 3 �̹Ƿ� ">number = 3" ���
//8: while(number++) �ݺ��� ������ if(number == 3) �̹Ƿ�, for_flag = 0, while(number++)�� break
//9: while(for_flag) �ݺ��� ������ number++���� number 1���� number = 4
//10: while(for_flag)���� ">> number = 4" printf
//11: for_flag == 0 �̹Ƿ�, while ���� �����, "for_flag=0, number=4" printf
//���:
//number = 0
//>> number = 2
//number = 2
// > number = 3
//>> number = 4
//0 4

//����_43p_����_3
//1: while(for_flag)���� for_flag == 1 �̹Ƿ� �ݺ��� ����, "number = 1" printf
//2: while(number++)����, number 1���� number = 2
//3: number > 0 �̹Ƿ�, while(number++) ���η� ����, ">number = 2" printf
//4: while(number++)����, number 1 ���� number = 3,
//5: while(number++)����, ">number = 3" printf
//6: while(number++) �ݺ��� ������ if(number == 3) �̹Ƿ�, for_flag = 0, while(number++)�� break
//7: while(for_flag) �ݺ��� ������ number++���� number 1���� number = 4
//8: while(for_flag)���� ">> number = 4" printf
//9: for_flag == 0 �̹Ƿ�, while ���� �����, "for_flag=0, number=4" printf
//���:
//number = 1
// > number = 2
// > number = 3
//>> number = 4
//0 4


//����_43p_����_4
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

//����_43p_����_5
//#include <stdio.h>
//
//int main()
//{
//	int for_flag = 1;
//	int number = 1;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		for (; number++;) {
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

//����_43p_����_6
#include <stdio.h>

int main()
{
	int for_flag = 1;
	int number = 0;
	for (; for_flag;) {
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