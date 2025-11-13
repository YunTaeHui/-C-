//심화_22p_문제4-4
//#include <stdio.h>
//
//int main()
//{
//	const int m = 10;
//	int i, j;
//	int line;
//	int arr[m][m] = { };
//	int star[m] = { };
//
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//		scanf("%d", &star[i]);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < star[i]; j++)
//		{
//			arr[j][i] = '*';
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] == 0) printf(" ");
//			else printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//심화_22p_문제5
//#include <stdio.h>
//
//int main()
//{
//	const int n = 10;
//	int i, j;
//	int arr[n][n] = { };
//	int val = 1;
//	int x = -1;
//	int y = 0;
//	int m = n;
//	int num = 1;
//
//	while(1)
//	{
//		for (j = 0; j < m; j++)
//		{
//			x += num;
//			arr[y][x] = val++;
//		}
//		m--;
//		if (m == 0) break;
//		for (j = 0; j < m; j++)
//		{
//			y += num;
//			arr[y][x] = val++;
//		}
//		num *= -1;
//	}
//
//	for (y = 0; y < n; y++)
//	{
//		for (x = 0; x < n; x++)
//		{
//			printf("%3d", arr[y][x]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//백준_1차원배열_1
#include <stdio.h>

int main()
{
	const int m = 10;
	int num;

	int star[m] = { };

	scanf("%d", &num);

	scanf("%d", &star[num]);


	return 0;
}