//265p_8-5
//#include <stdio.h>
//
//void main()
//{
//	int aa[100], bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99 - i];
//	}
//	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
//}


//267p_8-6
//#include <stdio.h>
//
//void main()
//{
//	int aa[] = { 10,20,30,40,50 };
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("배열 aa[]의 요소의 개수는 %d 입니다.\n", count);
//}


//269p_8-7
//#include <stdio.h>
//
//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//	printf("문자열 배열 ss ==> %s \n", ss);
//}


//280p_8-14
//#include <stdio.h>
//
//void main()
//{
//	int aa[3][4];
//
//	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
//	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
//	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;
//
//	printf("aa[0][0]부터 aa[2][3]까지 출력\n");
//
//	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
//	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
//	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
//}


//281p_8-15
//#include <stdio.h>
//
//void main()
//{
//	int aa[3][4];
//	int i, k;
//
//	int val = 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			aa[i][k] = val;
//			val++;
//		}
//	}
//	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%3d", aa[i][k]);
//		}
//		printf("\n");
//	}
//}


//287p_예제모음22
//#include <stdio.h>
//
//void main()
//{
//	int gugu[9][9];
//	int i, k;
//
//	for (i = 0; i < 9; i++)
//		for (k = 0; k < 9; k++)
//			gugu[i][k] = (i + 1) * (k + 1);
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = 0; k < 9; k++)
//		{
//			printf("%d x %d = %2d ", k + 1, i + 1, gugu[i][k]);
//		}
//		printf("\n");
//	}
//}


//심화_22p_문제2
//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	int val = 1;
//	int arr[5][5];
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = val;
//			val++;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//심화_22p_문제3
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	int arr[5][5];
//	int val = 1;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = val;
//			val++;
//		}
//	}
//	for (i = 4; i >= 0; i--)
//	{
//		for (j = 4; j >= 0; j--)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//심화_22p_문제4
//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	int arr[5][5];
//	int val = 1;
//	int bb[25];
//	int val_2 = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = val;
//			val++;
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			bb[val_2] = arr[i][j];
//			val_2++;
//		}
//	}
//
//	for (i <=0 ; i < 25; i++)
//	{
//		printf("%3d", bb[i]);
//	}
//	return 0;
//}


//심화_22p_문제4-1
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	int line;
//	int num;
//
//	scanf("%d", &line);
//	
//	for (int x = 1; x <= line; x++)
//	{
//		scanf("%d", &num);
//		for (i = 0; i < num; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//심화_22p_문제4-3
//#include <stdio.h>
//int main()
//{
//	const int m = 10;
//	int i, j;
//	int line;
//	char arr[m][m] = {};
//
//	char str[100];
//	char ch;
//	int star;
//
//	scanf("%d", &line);
//	scanf("%s", str);
//	int k = 0;
//	ch = str[k];
//
//	while (ch != '\0') {
//		for (i = 0; i < line; i++)
//		{
//			star = (int)ch - 48;
//			for (j = 0; j < star; j++)
//			{
//				arr[i][j] = '*';
//			}
//			k++;
//			ch = str[k];
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] == 0) printf(" ");
//			else printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//심화_22p_문제4-4
#include <stdio.h>
int main()
{
	const int m = 10;
	int i, j;
	int line;
	char arr[m][m] = {};
	int star;

	scanf("%d", &line);
	scanf("%d", &k);

	for (i = 0; i < line; i++)
	{
		for (j = 0; j < ar[k]; j++)
		{
			arr[i][j] = '*';
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr[i][j] == 0) printf(" ");
			else printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}