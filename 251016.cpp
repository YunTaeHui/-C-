//251p_��������_8
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
//    printf("���ڸ� ���� �� �Է� : ");
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
//    printf("���ڸ� ���� �� �Է� : ");
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
//	printf("1���� 10���� ���� �� ��� : ");
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




//37p_����_4
//#include <stdio.h>
//
//int main()
//{
//	int Num;
//
//	for (Num = 0; Num <= 200; Num += 11)
//	{
//		if(Num>0)
//			printf("200������ 11����� %d �Դϴ�.\n", Num);
//	}
//	return 0;
//}

//37p_����_5
//#include <stdio.h>
//
//int main()
//{
//	float sqLine;
//
//	for (sqLine = 0; sqLine * 4 <= 21; sqLine += 0.1)
//		printf("���簢�� �ѷ��� ���� 21 ������ sqLine�� %3.1f �Դϴ�.\n", sqLine);
//	return 0;
//}








//#include <stdio.h>
//
//int main()
//{
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
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
//		printf("%d�� %d�� \n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d�� \n", myClass, student);
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
//			printf("%d�� %d�� \n", myClass, student);
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
//			printf("%d�� %d��\n", myClass, student);
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
//				printf("%d�г� %d�� %d�� \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}


//39p_����_1
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

//39p_����_2
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

//39p_����_3
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
//			printf("4�� - %d, 6�� - %d\n", Dice4, Dice6);
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
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//
//		for (inter = 0; inter < 5; inter++) {
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}
//
//		printf("%d��° ���� �ݺ��� Ż�� \n\n", outer);
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

//41p_����_1
//#include <stdio.h>
//int main()
//{
//	int Line = 3;
//	printf("�ټ��� �Է��ϼ���.\n");
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

//41p_����_2
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