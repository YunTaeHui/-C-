//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}
//		printf("%d��° ���� �ݺ��� Ż�� \n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
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
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer+1; inter2++)
//		{
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
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_1
//#include <stdio.h>
//
//int main()
//{
//	int outer, inter1;
//
//	for (outer = 0; outer < 4; outer++)
//	{
//		for (inter1 = 0; inter1 < 4 - outer; inter1++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_2-1
//#include <stdio.h>
//
//int main()
//{
//	int inter1 = 3;
//	int inter2 = 1;
//
//	for (int row = 0; row < 4; row++)
//	{
//		for (int y = 1; y <= inter1 - row; y++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inter2 + 2 * row; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_2-2
//#include <stdio.h>
//
//int main()
//{
//	int line = 4;
//	printf("���ϴ� �� ���� �Է��ϼ��� ");
//	scanf("%d", &line);
//	int inter1 = line;
//	int inter2 = 1;
//
//	for (int row = 0; row < line; row++)
//	{
//		for (int y = 1; y <= inter1 - row; y++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inter2 + 2 * row; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_3-1
//#include <stdio.h>
//
//int main()
//{
//	int outer, inter1, inter2;
//
//	for (outer = 0; outer < 3; outer++)
//	{
//		for (inter1 = 0; inter1 < 2 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < 1 + 2 * outer; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (outer = 0; outer < 3; outer++)
//	{
//		for (inter1 = 0; inter1 < outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < 5 - 2 * outer; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_3-2
//#include <stdio.h>
//
//int main()
//{
//	int line = 4;
//	printf("���ϴ� �� ���� �Է��ϼ��� ");
//	scanf("%d", &line);
//	int outer, inter1, inter2;
//
//	for (outer = 0; outer < line; outer++)
//	{
//		for (inter1 = 0; inter1 < line - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < 2 * outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (outer = 0; outer < line; outer++)
//	{
//		for (inter1 = 0; inter1 < outer + 1; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < 2 * (line - outer) - 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_4-1
//#include <stdio.h>
//
//int main()
//{
//	int outer, inter1, inter2;
//
//	for (outer = 0; outer < 4; outer++)
//	{
//		for (inter1 = 0; inter1 < 3 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < 1+outer; inter2++)
//		{
//			printf("%d", 1+outer);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����_41p_����_4-2
#include <stdio.h>

int main()
{
	int max = 4;
	printf("���ϴ� �� ���� �Է��ϼ��� ");
	scanf("%d", &max);
	for (int line = 1; line <= max; line++)
	{
		for (int space = 1; space <= max - line; space++)
		{
			printf(" ");
		}
		int digit = line % 10;
		for (int num = 1; num <= line; num++)
		{
			printf("%d", digit);
		}
		printf("\n");
	}
	return 0;
}

//����_41p_����_5
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int hap = 0;
//	int turn = 0;
//
//	for (;;)
//	{
//		printf("%c : ", 'A' + turn);
//		scanf("%d", &count);
//
//		if (count > 3) {
//			printf("���ڴ� 3������ �Է��ϼ���.\n");
//			continue;
//		}
//		hap = hap + count;
//		printf("=> %d\n", hap);
//
//		if (hap >= 31)
//			break;
//		//turn = ++turn % 2;
//		turn = !turn;
//	}
//	printf("%c�� �����ϴ�!", 'A' + turn);
//	return 0;
//}