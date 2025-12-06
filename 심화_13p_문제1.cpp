//심화_13p_문제1
//1~n까지 더해서 리턴하는 재귀함수를 사용하여 n값을 입력받으면
//1~n까지 더해서 출력하는 함수를 만들어라.
#include <stdio.h>
int minus(int n)
{
	if (n <= 1) return 1;
	return minus(n - 1) + n;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", minus(n));
	return 0;
}