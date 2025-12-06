//심화_22p_문제2
//5X5 2차원 배열에 1부터 25까지 순차적으로 숫자를 채운뒤 출력하라.
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
//5X5 2차원 배열에 1부터 25까지 순차적으로 숫자를 채운 뒤 거꾸로 출력하라.
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
//5X5 2차원 배열에 1부터 25까지 순차적으로 숫자를 채운뒤 1차원 배열로 값을 옮겨서 출력하라.
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
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			bb[val_2] = arr[i][j];
//			val_2++;
//		}
//	}
//	for (i = 0; i < 25; i++)
//	{
//		printf("%3d", bb[i]);
//	}
//	return 0;
//}


//심화_22p_문제4-2
//추가로 입력되는 숫자만큼 별을 가로로 출력한다.(첫번째 입력 값은 전체 줄 수)
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
//4-2를 2차원 배열 하나에 넣어 출력한다.
//#include <stdio.h>
//int main()
//{
//    const int m = 10;
//    int i, j;
//    int line;
//    char arr[m][m] = { };   // 모두 0으로 초기화
//    int star;
//
//    scanf("%d", &line);       // 몇 줄인지
//    for (i = 0; i < line; i++) {
//        scanf("%d", &star);   // 각 줄에 출력할 별 개수
//        for (j = 0; j < star; j++) {
//            arr[i][j] = '*';
//        }
//    }
//    for (i = 0; i < line; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] == 0) break;   // 별 없으면 그 줄 끝냄
//            printf("%c", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//심화_22p_문제4-4
//입력된 별을 세로로 출력한다.(첫번째 입력 값은 전체 줄 수)
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
//달팽이 모양으로 배열을 채워 출력하라.
#include <stdio.h>
#define MAX 50
int main()
{
	int n;
	int i, j;
	int arr[MAX][MAX] = { };
	int val = 1;
	int num = 1;

	printf("달팽이 배열의 크기 n을 입력하세요. (1 ~ %d): ", MAX);
	scanf("%d", &n);

	int x = -1;
	int y = 0;
	int m = n;

	while(1)
	{
		for (j = 0; j < m; j++)
		{
			x += num;
			arr[y][x] = val++;
		}
		m--;
		if (m == 0) break;
		for (j = 0; j < m; j++)
		{
			y += num;
			arr[y][x] = val++;
		}
		num *= -1;
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			printf("%3d ", arr[y][x]);
		}
		printf("\n");
	}
	return 0;
}