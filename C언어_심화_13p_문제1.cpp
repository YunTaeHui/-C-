//심화_13p_문제1
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