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


//����_41p_����_2
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
//		for (inter2 = 0; inter2 < 1 + 2 * outer; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����_41p_����_3
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

//����_41p_����_4
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

//����_41p_����_5
#include <stdio.h>

int main()
{
	int count;
	int hap = 0;
	int turn = 0;

	for (;;)
	{
		printf("%c : ", 'A' + turn);
		scanf("%d", &count);

		if (count > 3) {
			printf("���ڴ� 3������ �Է��ϼ���.\n");
			continue;
		}
		hap = hap + count;
		printf("=> %d\n", hap);

		if (hap >= 31)
			break;
		//turn = ++turn % 2;
		turn = !turn;
	}
	printf("%c�� �����ϴ�!", 'A' + turn);
	return 0;
}