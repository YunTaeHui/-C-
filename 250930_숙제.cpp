//30p ����5 : if (ch == 'F') ����
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch == 'F')
//		{
//			ch++;
//			continue;
//		}
//		printf("%c ", ch);
//		ch++;
//	}
//}

//30p ����5_1 : if (ch != 'F') ����
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch != 'F')
//		{
//			printf("%c ", ch);
//			ch++;
//		}
//		else
//		{
//			ch++;
//			continue;
//		}
//	}
//}


//238p �⺻7-8 (while)
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("�� �� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0�� �Է��ؼ� while ���� Ż���߽��ϴ�.\n");
//}

//238p �⺻7-8 (for)
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	for(;;)
//	{
//		printf("�� �� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0�� �Է��ؼ� for ���� Ż���߽��ϴ�.\n");
//}


//238p �⺻7-10 (For)
#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			continue;

		hap += i;
	}
	printf("1~100 ������ ��(3�� ��� ����) : %d\n", hap);
}


//238p �⺻7-10 (While)
//#include <stdio.h>
//
//void main()
//{
//	int hap = 0;
//	int i = 1;
//
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			i++;
//			continue;
//		}
//		hap += i;
//		i++;
//	}
//	printf("1~100 ������ ��(3�� ��� ����) : %d\n", hap);
//}


//32p Ÿ�����۾�
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d ��° �� !\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �����Ѵ�.\n");
//		printf("�׿�, ������.\n >> ");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("����� ���׿�.\n");
//		case 3:
//			printf("����������.");
//			break;
//		case 2:
//			printf("����� ������.\n");
//		case 4:
//			printf("ī�信�� ");
//			break;
//		case 5: printf("�п����� ");
//		}
//		printf("�ڵ� �����մϴ�.\n");
//		study++;
//	} while (1);
//	if (day <= 3) {
//		printf("�״�� �Դϴ�...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//
//		case 0:
//			printf("�ڵ� ������ �Ǿ����ϴ�.!\n");
//			break;
//
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//			break;
//
//		case 2:
//			printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//
//		case 3:
//			printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//		}
//	}
//	return 0;
//}