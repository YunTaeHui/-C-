//백준_2차원배열_1
//#include <stdio.h>
//
//int main()
//{
//	int n, m;
//	int y, x;
//	int i, j;
//	int A[100][100] = { };
//	int B[100][100] = { };
//
//	scanf("%d %d", &n, &m);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &B[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d", A[i][j] + B[i][j]);
//
//			if (j < m - 1)
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//백준_2차원배열_2
//#include <stdio.h>
//
//int main()
//{
//	const int n = 9;
//	int i, j;
//	int arr[9][9];
//	int max = -1;
//	int maxRow = 0, maxCol = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				maxRow = i;
//				maxCol = j;
//			}
//		}
//	}
//	printf("%d\n", max);
//	printf("%d %d\n", maxRow + 1, maxCol + 1);
//
//	return 0;
//}


//백준_2차원배열_3
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char word[5][16];
//    int len[5];
//    int i, j;
//
//    for (i = 0; i < 5; i++) {
//        scanf("%s", word[i]);
//        len[i] = strlen(word[i]);
//    }
//
//    int maxLen = 0;
//    for (i = 0; i < 5; i++) {
//        if (len[i] > maxLen) {
//            maxLen = len[i];
//        }
//    }
//
//    for (int col = 0; col < maxLen; col++) {
//        for (int row = 0; row < 5; row++) {
//            if (col < len[row]) {
//                printf("%c", word[row][col]);
//            }
//        }
//    }
//    return 0;
//}


//백준_2차원배열_4
#include <stdio.h>

int main() {
    int paper[100][100] = { };
    int n;
    int x, y;
    int i, j;
    int area = 0;

    scanf("%d", &n);
    for (int k = 0; k < n; k++) {
        scanf("%d %d", &x, &y);

        for (i = x; i < x + 10; i++) {
            for (j = y; j < y + 10; j++) {
                paper[i][j] = 1;
            }
        }
    }

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                area++;
            }
        }
    }

    printf("%d\n", area);
    return 0;
}