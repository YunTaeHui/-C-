//223p_연습문제8
//다음과 같이 구구단이 거꾸로 출력되는 코드를 작성해보세요.
#include <stdio.h>

void main()
{
	int i, k;

	for (i = 9; i >= 1; i--)
	{
		for (k = 9; k >= 2; k--)
		{
			printf("%dX%d=%2d   ", k, i, k * i);
		}
	}
}