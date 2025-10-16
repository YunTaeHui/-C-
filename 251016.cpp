//251p_연습문제_8
//#include <stdio.h>
//
//void main()
//{
//    char str[100];
//    char ch;
//
//    int i, k;
//    int star;
//
//    printf("숫자를 여러 개 입력 : ");
//    scanf("%s", str);
//
//    i = 0;
//    ch = str[i];
//    while (ch != '\0') {
//        star = (int)ch - 48;
//
//        k = 0;
//        while (k < star * 2)
//        {
//            printf("\u2665");
//            k++;
//        }
//        printf("\n");
//        i++;
//        ch = str[i];
//    }
//}

//#include <stdio.h>
//
//int main(void)
//{
//    int num;
//    printf("숫자를 여러 개 입력 : ");
//    scanf("%d", &num);
//
//    int max10 = 1;
//    int imsi = num;
//    while (imsi >= 10) {
//        imsi /= 10;
//        max10 *= 10;
//    }
//
//    while (max10 > 0) {
//        int digit = num / max10;
//        int heart = 0;
//        while (heart < 2 * digit) {
//            printf("\u2665");
//            heart++;
//        }
//        printf("\n");
//
//        num %= max10;
//        max10 /= 10;
//    }
//
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}




//37p_문제_4
//#include <stdio.h>
//
//int main()
//{
//	int Num;
//
//	for (Num = 0; Num <= 200; Num += 11)
//	{
//		if(Num>0)
//			printf("200이하의 11배수는 %d 입니다.\n", Num);
//	}
//	return 0;
//}

//37p_문제_5
//#include <stdio.h>
//
//int main()
//{
//	float sqLine;
//
//	for (sqLine = 0; sqLine * 4 <= 21; sqLine += 0.1)
//		printf("정사각형 둘레의 합이 21 이하인 sqLine은 %3.1f 입니다.\n", sqLine);
//	return 0;
//}








//#include <stdio.h>
//
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}


//39p_문제_1
//#include <stdio.h>
//
//int main()
//{
//	int dan, gugu;
//	for (dan = 2; dan <= 9; dan++)
//	{
//		for (gugu = 1; gugu <= 9; gugu++)
//		{
//			printf("%d X %d = %d\n", dan, gugu, dan * gugu);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//39p_문제_2
//#include <stdio.h>
//
//int main()
//{
//	int dan, gugu;
//	for (dan = 2; dan <= 9; dan++)
//	{
//		if (dan == 3)
//			continue;
//		for (gugu = 1; gugu <= 9; gugu++)
//		{
//			printf("%d X %d = %d\n", dan, gugu, dan * gugu);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//39p_문제_3
//#include <stdio.h>
//
//int main()
//{
//	int Dice4, Dice6;
//
//	for (Dice4 = 1; Dice4 <= 4; Dice4++)
//	{
//		for (Dice6 = 1; Dice6 <= 6; Dice6++)
//		{
//			printf("4면 - %d, 6면 - %d\n", Dice4, Dice6);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//
//		printf("%d번째 내부 반복문 탈출 \n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int y = 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (; y <= 3;) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y += 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (y = 1; y <= 3; y++) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int x = 1; x <= 4; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 4;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y = 4;
//	for (; y >= 1;) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y -= 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y;
//	for (y=4; y >= 1;y--) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//41p_문제_1
//#include <stdio.h>
//int main()
//{
//	int Line = 3;
//	printf("줄수를 입력하세요.\n");
//	scanf("%d", &Line);
//
//	for (int y = Line; y >= 1; y--) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//41p_문제_2
//#include <stdio.h>
//
//int main()
//{
//	for (int inter1 = 1; inter1 <= 3; inter1++) {
//		printf(" ");
//	}
//	for (int inter2 = 1; inter2 <= 1; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int inter1 = 1; inter1 <= 2; inter1++) {
//		printf(" ");
//	}
//	for (int inter2 = 1; inter2 <= 3; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int inter1 = 1; inter1 <= 1; inter1++) {
//		printf(" ");
//	}
//	for (int inter2 = 1; inter2 <= 5; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int inter2 = 1; inter2 <= 7; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//		
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int x = 3;
//	int y = 1;
//
//	for (int inter1 = 1; inter1 <= x; inter1++) {
//		printf(" ");
//	}
//	for (int inter2 = 1; inter2 <= y; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (int inter1 = 1; inter1 <= x; inter1++) {
//		printf(" ");
//	}
//	for (int inter2 = 1; inter2 <= y; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (int inter1 = 1; inter1 <= x; inter1++) {
//		printf(" ");
//	}
//	for (int inter2 = 1; inter2 <= y; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//
//	y += 2;
//
//	for (int inter2 = 1; inter2 <= y; inter2++) {
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int x = 3;
	int y = 1;

	for (; x >= 1;) {
		for (int inter1 = 1; inter1 <= x; inter1++) {
			printf(" ");
		}
		x -= 1;
	}
	for (; y <= 7;) {
		for (int inter2 = 1; inter2 <= y; inter2++) {
			printf("*");
		}
		y += 2;
	}
	printf("\n");

	return 0;
}