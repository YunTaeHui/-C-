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

//����_39p_����_1
//#include <stdio.h>
//
//int main()
//{
//	int i, k;
//
//	for (i = 2; i <= 9; i++)
//	{
//		for (k = 1; k <= 9; k++)
//		{
//			printf("%d X %d = %d\n", i, k, i * k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_39p_����_2
//#include <stdio.h>
//
//int main()
//{
//	int i, k;
//
//	for (i = 2; i <= 9; i++)
//	{
//		if (i == 3)
//			i++;
//		for (k = 1; k <= 9; k++)
//		{
//			printf("%d X %d = %d\n", i, k, i * k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_39_����_3
#include <stdio.h>

int main()
{
	int i, k;

	for (i = 1; i <= 4; i++)
	{
		for (k = 1; k <= 6; k++)
		{
			printf("4��: %d, 6��: %d \n", i, k);
		}
	}
	return 0;
}