//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù ���� : %d\n", randInt);
//	printf("���� ���� : %d\n", nextInt);
//
//	return 0;
//}
//1,7	1,7	1,7	1,7

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù ���� : %d\n", randInt);	//0 ~ 9
//	printf("���� ���� : %d\n", nextInt);	//50 ~ 59
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d�� �̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf("%d�� �̴�.\n", coin500 + coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple �� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple �� 17���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple �� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple �� 20������ �����ϴ�.\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple �� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple �� 0�� �Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple �� 10�� �ֽ��ϴ�. \n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple �� 0�� �Դϴ�. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple �� 0�� �Դϴ�.\n");
//	}
//	else
//	{
//		printf("apple �� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//15 page ����1
//#include <stdio.h>
//
//int main()
//{
//	int a;
//
//	printf("���ڸ� �Է��ϼ���.\n");
//	scanf("%d", &a);
//
//	if (a > 0)
//	{
//		printf("�Է��� ���ڴ� '���' �Դϴ�.\n");
//	}
//	else if (a < 0)
//	{
//		printf("�Է��� ���ڴ� '����' �Դϴ�.\n");
//	}
//	else 
//	{
//		printf("�Է��� ���ڴ� '0' �Դϴ�.\n");
//	}
//	return 0;
//}

//15 page ����2
//#include <stdio.h>
//
//int main()
//{
//	int a;
//
//	printf("���ڸ� �Է��ϼ���.\n");
//	scanf("%d", &a);
//
//	if (a >= 10 && a <= 99)
//	{
//		printf("�Է��� ���ڴ� �� �ڸ� �����Դϴ�.\n");
//	}
//	else
//		printf("�Է��� ���ڴ� �� �ڸ� ���ڰ� �ƴմϴ�.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//20 page ����3
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//
//	printf("���̸� �Է��ϼ���.\n");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//	{
//		printf("15�� ������ �Դϴ�.\n");
//	}
//
//	if (y_age >= 12)
//	{
//		printf("12�� ������ �Դϴ�.\n");
//	}
//
//	printf("��ü ������ �Դϴ�.\n");
//	return 0;
//}

////20 page ����4 (16����)
#include <stdio.h>

int main()
{
	char initial;

	printf("���ڸ� �Է��ϼ���.\n");
	scanf("%c", &initial);

	if (initial >= 0x41 && initial <= 'Z')
		printf("%c�� �빮�� �Դϴ�.\n", initial);
	else if (initial >= )
		printf("%c�� �ҹ��� �Դϴ�.\n", initial);
	else
		printf("���ĺ��� �ƴմϴ�.\n");
	return 0;
}