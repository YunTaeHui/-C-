//백준_1차원배열_1
//#include <stdio.h>
//
//int main()
//{
//	int N;
//	int arr[100];
//	int v;
//	int i;
//	int count = 0;
//
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	scanf("%d", &v);
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] == v)
//		{
//			count++;
//		}
//	}
//
//	printf("%d\n", count);
//	return 0;
//}


//백준_1차원배열_2
//#include <stdio.h>
//
//int main()
//{
//	int N, X;
//	int arr[10000];
//	int i;
//
//	scanf("%d %d", &N, &X);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] < X)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


//백준_1차원배열_3
//#include <stdio.h>
//
//int main()
//{
//	int N;
//	int arr[10000];
//	int i;
//	int min, max;
//
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	min = arr[0];
//	max = arr[0];
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d %d", min, max);
//	return 0;
//}


//백준_1차원배열_4
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int max;
//	int arr[10000];
//	int count;
//
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	count = 1;
//
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			count = i + 1;
//		}
//	}
//	printf("%d\n", max);
//	printf("%d\n", count);
//	return 0;
//}


//백준_1차원배열_5
//#include <stdio.h>
//int main()
//{
//	int N, M;
//	int arr[101] = { };
//	int i, j, k;
//	int x;
//
//	scanf("%d %d", &N, &M);
//
//	for (int t = 0; t < M; t++)
//	{
//		scanf("%d %d %d", &i, &j, &k);
//		for (x = i; x <= j; x++) {
//			arr[x] = k;
//		}
//	}
//
//	for (x = 1; x <= N; x++) {
//		printf("%d ", arr[x]);
//	}
//	return 0;
//}


//백준_1차원배열_6
//#include <stdio.h>
//
//int main()
//{
//	int N, M;
//	int basket[101];
//	int i, a, b;
//
//	scanf("%d %d", &N, &M);
//	for (i = 1; i <= N; i++)
//	{
//		basket[i] = i;
//	}
//	for (i = 0; i < M; i++)
//	{
//		scanf("%d %d", &a, &b);
//
//		int temp = basket[a];
//		basket[a] = basket[b];
//		basket[b] = temp;
//	}	
//	for (i = 1; i <= N; i++)
//	{
//		printf("%d ", basket[i]);
//	}
//	return 0;
//}


//백준_1차원배열_7
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int check[31] = { };
//	int i;
//
//	for (i = 0; i < 28; i++) {
//		scanf("%d", &n);
//		check[n] = 1;
//	}
//	for (i = 1; i <= 30; i++) {
//		if (check[i] == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//백준_1차원배열_8
//#include <stdio.h>
//
//int main(void)
//{
//    int i, x;
//    int val;
//    int check[42] = { };
//    int cnt = 0;
//
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &x);
//        val = x % 42;
//        check[val] = 1;
//    }
//    for (i = 0; i < 42; i++)
//    {
//        if (check[i] == 1) {
//            cnt++;
//        }
//    }
//    printf("%d\n", cnt);
//
//    return 0;
//}


//백준_1차원배열_9
//#include <stdio.h>
//
//int main()
//{
//	int n, m;
//	int basket[101];
//	int i, a, b;
//
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//	{
//		basket[i] = i;
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d %d", &a, &b);
//
//		while (a < b)
//		{
//			int temp = basket[a];
//			basket[a] = basket[b];
//			basket[b] = temp;
//			a++;
//			b--;
//		}
//	}	
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", basket[i]);
//	}
//	return 0;
//}


//백준_1차원배열_10
#include <stdio.h>

int main()
{
	int i;
	int N, M;
	int arr[1000] = { };
	float Mod[1000] = { };
	float sum = 0.0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	M = arr[0];
	for (i = 0; i < N; i++)
	{
		if (arr[i] > M)
			M = arr[i];
	}
	for (i = 0; i < N; i++)
	{
		sum += (float)arr[i] / M * 100;
	}
	printf("%f\n", sum / N);

	return 0;
}