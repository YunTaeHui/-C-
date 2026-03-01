//N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
//첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
//출력형식과 같게 N * 1부터 N * 9까지 출력한다.
//#include <stdio.h>
//
//int main()
//{
//	int dan = 1;
//	scanf("%d", &dan);
//
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d * %d = %d\n", dan, i, dan * i);
//	}
//	return 0;
//}


//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
//첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
//1부터 n까지 합을 출력한다.

//#include <stdio.h>
//
//int main()
//{
//	int a, i, hap = 0;
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		hap = hap + i;
//	}
//	printf("%d\n", hap);
//	return 0;
//}


//구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.
//첫째 줄에는 영수증에 적힌 총 금액 X가 주어진다.
//둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 N이 주어진다.
//이후 N개의 줄에는 각 물건의 가격 a와 개수 b가 공백을 사이에 두고 주어진다.
//#include <stdio.h>
//
//int main()
//{
//	int X;	//영수증 총 금액
//	int N;			//물건 종류 수
//	int total = 0;	//누적 합
//
//	scanf("%d", &X);
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++) {
//		int price;	//가격
//		int cnt;	//개수
//		scanf("%d %d", &price, &cnt);
//		total += price * cnt;
//	}
//
//	if (total == X)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//혜아가 N바이트 정수까지 저장할 수 있다고 생각해서
//칠판에 쓴 정수 자료형의 이름은 무엇일까 ?
//첫 번째 줄에는 문제의 정수 N이 주어진다. (N은 4의 배수)
//혜아가 N바이트 정수까지 저장할 수 있다고 생각하는 정수
//자료형의 이름을 출력하여라.
//#include <stdio.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int b = N / 4;
//
//	for (int i = 0; i < b; i++)
//	{
//		printf("long ");
//	}
//	printf("int\n");
//
//	return 0;
//}


//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
//#include <stdio.h>
//
//int main()
//{
//	int star;
//	int line = 3;
//
//	scanf("%d", &line);
//	
//	for (int y = 0; y < line; y++)
//	{
//		for (star = 0; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//첫째 줄에는 별 space + 1개, 둘째 줄에는 별 space + 2개, N번째 줄에는 별 N개를 찍는 문제

#include <stdio.h>

int main()
{
	int star, space;
	int line;
	scanf("%d", &line);
	int x = 0;
	for (int y = line - 1; y >= 0; y--, x++)
	{
		for (space = 0; space < y; space++)
		{
			printf(" ");
		}
		for (star = 0; star <= x; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}