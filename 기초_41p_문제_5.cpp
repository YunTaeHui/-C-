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

//41p_����2_����
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	for (space = 1; space <= 3; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (star = 1; star <= 7; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
// 
//	return 0;
//}

//41p_����2_1
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 2;
//	int y = 1;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	return 0;
//}


//41p_����2_2
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	int x = 3;
//	int y = 1;
//
//	for (; x >= 0; )
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}

//41p_����2_3
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int y = 1;
//
//	for (int x = 3; x >= 0; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//41p_����2_4
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int y = 1;
//	int line = 3;
//
//	for (int x = line; x >= 0; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//41p_����2_����
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int y = 1;
//	int line = 3;
//	printf("���ϴ� �� ���� �Է��ϼ��� ");
//	scanf("%d", &line);
//
//	for (int x = line; x > 0; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
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
//	int space;
//	int star;
//
//	for (int x = 2, int y = 1; x <= 2, y <= 3; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int line = 2;
//
//	for (int x = 2, int y = 1; x <= line, y <= 3; x--, y += 2)
//	{
//		for (int space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x;
//	int y;
//
//	int line = 3;
//	printf("���ϴ� �� ���� �Է��ϼ��� ");
//	scanf("%d", &line);
//
//	for (x = 2, y = 1; x <= line; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
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
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int z = 0;
//
//	for (; z <= 3;)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//		z += 1;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int z = 0;
//
//	for (int z = 0; z <= 3; z++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int line = 3;
//	
//	for (int z = 0; z <= line; z++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int line = 3;
//
//	printf("���ϴ� �� ���� �Է��ϼ��� ");
//	scanf("%d", &line);
//	if (line > 4)
//	{
//		x = x + (line - 4);
//	}
//	for (int row = 1; row <= line; row++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}

//41p_����3_����
//#include <stdio.h>
//
//int main()
//{
//	for (int space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//41p_����3_1
//#include <stdio.h>
//
//int main()
//{
//	int y = 2;
//	int x = 1;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	x += 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	x += 2;
//
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}


//41p_����3_2
//#include <stdio.h>
//
//int main()
//{
//	int y = 2;
//	int x = 1;
//
//	for (; y > 0;)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y -= 1;
//		x += 2;
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (; y <= 2;)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y += 1;
//		x -= 2;
//	}
//	return 0;
//}


//41p_����3_3
//#include <stdio.h>
//
//int main()
//{
//	int x = 1;
//
//	for (int y = 2; y > 0; y--, x += 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int y = 0; y <= 2; y++, x -= 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//41p_����3_4
//#include <stdio.h>
//
//int main()
//{
//	int x = 1;
//	int line = 3;
//
//	for (int y = line; y > 0; y--, x += 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int y = 0; y <= line; y++, x -= 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_����3_����
//#include <stdio.h>
//
//int main()
//{
//	int x = 1;
//	int line = 3;
//	printf("���ϴ� �� ���� �Է��ϼ��� ");
//	scanf("%d", &line);
//
//	for (int y = line; y > 0; y--, x += 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int y = 0; y <= line; y++, x -= 2)
//	{
//		for (int space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= x; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_����4_����
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star = 1;
//	int num = 1;
//
//	for (space = 1; space <= 3; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 1; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	printf("\n");
//
//	for (space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 2; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	printf("\n");
//
//	for (space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	printf("\n");
//
//	for (star = 1; star <= 4; star++)
//	{
//		printf("%d", num);
//	}
//	printf("\n");
//
//	return 0;
//}


//41p_����4_1
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star = 1;
//	int num = 1;
//	int y = 3;
//	int x = 1;
//
//	for (space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	y -= 1;
//	x += 1;
//	printf("\n");
//
//	for (space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	y -= 1;
//	x += 1;
//	printf("\n");
//
//	for (space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	num += 1;
//	y -= 1;
//	x += 1;
//	printf("\n");
//
//	for (star = 1; star <= x; star++)
//	{
//		printf("%d", num);
//	}
//	printf("\n");
//
//	return 0;
//}

//41p_����4_2
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star = 1;
//	int num = 1;
//	int y = 3;
//	int x = 1;
//
//	for (; y >= 0;)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		num += 1;
//		y -= 1;
//		x += 1;
//		printf("\n");
//	}
//	return 0;
//}

//41p_����4_3
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//
//	for (int y = 3; y >= 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_����4_4
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//	int line = 3;
//
//	for (int y = line; y >= 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_����4_5
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//	int line = 3;
//	printf("���ϴ� �� ���� �Է��ϼ���. ");
//	scanf("%d", &line);
//
//	for (int y = line; y >= 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			printf("%d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//41p_����4_����
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int num = 1;
//	int x = 1;
//	int line = 3;
//	printf("���ϴ� �� ���� �Է��ϼ���. ");
//	scanf("%d", &line);
//
//	for (int y = line; y > 0; y--, x++, num++)
//	{
//		for (space = 1; space <= y; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= x; star++)
//		{
//			int digit = num % 10;
//			printf("%d", digit);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//41p_����5
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
//		else if (count == 0)
//			break;
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

//41p_����5
#include <stdio.h>

int main()
{
	int current = 0;	//���������� ���� ����
	int turn = 0;		//0 = A, 1 = B

	for (;;)	//���� ��ü ���� (�ٱ� ����)
	{
		int said = 0;	//�̹� �Ͽ��� ���� ����(�ִ� 3)

		for (int i = 0; i < 3; i++)
		{
			int x;
			int expect = current + 1;

			printf("�÷��̾� %c : ", 'A' + turn);
			scanf("%d", &x);

			if (x == 0) {
				if (said == 0) {
					printf("�ּ� 1�� �̻� ���� �ڿ� 0���� ���� �� �־��.\n");
					i--;
					continue;
				}
				else {
					printf("%c ����, ���� ����\n", 'A' + turn);
					break;
				}
			}

			//���� �߸� �Է½� ���Է�
			if (x != expect) {
				printf("�߸� �Է��ϼ̽��ϴ�. ���� ���ڴ� %d �Դϴ�.\n", expect);
				i--;
				continue;
			}

			//���� ���� �Է�
			current = x;
			said++;
			printf("���� ���� : %d\n", current);

			//31�� ���� �÷��̾� �й�
			if (current == 31) {
				printf("%c�� �����ϴ�!", 'A' + turn);
				return 0;
			}
		}
		turn = !turn;	//���� �÷��̾�
	}
	return 0;
}
