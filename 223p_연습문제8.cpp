//223p_연습문제8
//다음과 같이 구구단이 거꾸로 출력되는 코드를 작성해보세요.
#include <stdio.h>

int main()
{
	for (int i = 9; i >= 1; i--) {
		for (int j = 9; j >= 2; j--) {
			printf("%d X %d = %2d   ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}