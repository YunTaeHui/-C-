//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x': printf("���ĺ� x �Է�.\n");
//		break;
//	case 'X': printf("����ǥ �Է�.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		int number1, number2;
//
//		printf("���� �� ���� �Է��ϼ���.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//
//	case 2:
//		int number3, number4;
//
//		printf("���� �� ���� �Է��ϼ���.\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		{
//			int number1, number2;
//
//			printf("���� �� ���� �Է��ϼ���.\n");
//			scanf("%d %d", &number1, &number2);
//			printf("%d + %d = %d\n", number1, number2, number1 + number2);
//			break;
//		}
//
//	case 2:
//		{
//			int number3, number4;
//
//			printf("���� �� ���� �Է��ϼ���.\n");
//			scanf("%d %d", &number3, &number4);
//			printf("%d - %d = %d\n", number3, number4, number3 - number4);
//			break;
//		}
//	}
//	return 0;
//}


//27p ����7
//#include <stdio.h>
//
//int main()
//{
//	char a;
//
//	printf("����Ű: 'w', 'a', 'd', 's' �� �Է��ϼ��� ==> ");
//	scanf("%c", &a);
//
//	switch (a)
//	{
//	case 'w':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//
//	case 'a':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//
//	case 'd':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//
//	case 's':
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//		break;
//	}
//	return 0;
//}

//27p ����8
//#include <stdio.h>
//
//int main()
//{
//	int appetizer, mainDish, dessert;
//
//	printf("appetizer �� ����ּ���. 1:ĳ���, 2:������, 3: Ǫ�Ʊ׶� ==> ");
//	scanf("%d", &appetizer);
//
//	printf("mainDish �� ����ּ���. 1:������ũ, 2:�����丮, 3:�簥�� ==> ");
//	scanf("%d", &mainDish);
//
//	printf("dessert �� ����ּ���. 1:�ɟ�, 2:���̽�ũ��, 3:���ݸ����� ==> ");
//	scanf("%d", &dessert);
//
//	printf("�ֹ��� ������ ");
//
//	switch (appetizer)
//	{
//	case 1:
//		printf("ĳ���, ");
//		break;
//
//	case 2:
//		printf("������, ");
//		break;
//
//	case 3:
//		printf("Ǫ�Ʊ׶�, ");
//		break;
//	}
//
//	switch (mainDish)
//	{
//	case 1:
//		printf("������ũ, ");
//		break;
//
//	case 2:
//		printf("�����丮, ");
//		break;
//
//	case 3:
//		printf("�簥��, ");
//		break;
//	}
//
//	switch (dessert)
//	{
//	case 1:
//		printf("�ɟ�");
//		break;
//
//	case 2:
//		printf("���̽�ũ��");
//		break;
//
//	case 3:
//		printf("���ݸ�����");
//		break;
//	}
//	printf(" �Դϴ�. \n");
//
//	return 0;
//}

//6p �ݺ��� ����, ����� ����
// #include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//
//		if (i > 70 && i < 80) { i++; continue; }
//
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("������ ���� ��� �ݺ���� \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("������ ���� ��� �ݺ���� \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("���� count : %d \n", count);
//		printf("count�� 3���� ���� ���� �ݺ� \n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//
//	while (count > 0)
//	{
//		printf("���� count : %d \n", count);
//		printf("count�� 0���� ū ���� �ݺ� \n");
//		count--;
//	}
//	return 0;
//}


//29p ����1
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 6)
//	{
//		printf("'c'\n");
//		count++;
//	}
//	return 0;
//}


//29p ����2
//#include <stdio.h>
//
//int main()
//{
//	int i=-10;
//
//	while (i<=0)
//	{
//		printf("%d   ", i);
//		i++;
//	}
//	return 0;
//}

//29p ����3
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	while (i <= 100)
//	{
//		//if (i % 5 == 0)
//		{
//			printf("%2d  ", i);
//		}
//		i += 5;
//		if (i % 25 == 0)
//			printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("���� count : %d \n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ� \n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ��Է�): ");
//		scanf("%c", &alphabet);
//
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else
//		{
//			continue;
//		}
//		printf("�Է��� �� : %c \n", alphabet);
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("����� �Է����ּ���(0�Է½� ����);");
//		scanf("%d", &number);
//
//		if (number == 0) {
//			break;
//		}
//		else if (number < 0) {
//			continue;
//		}
//
//		total = total + number;
//		printf("%d \n", total);
//	}
//	return 0;
//}

//30p ����4
//#include <stdio.h>
//
//int main()
//{
//	int number = 1, multi = 1;
//
//	while (1)
//	{
//		multi = multi * number;
//		if (multi >= 50000) {
//			break;
//		}
//		number++;
//	}
//	printf("multi�� 50000 ó�� �̻��� ��� number �� : %d \n", number);
//	printf("number�� %d �϶�, multi �� : %d \n", number, multi);
//	
//	return 0;
//}

//30p ����5
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
//			continue;
//		}
//		printf("%c ", ch);
//	}
//}