//074p_연습문제7
//두 수의 나눗셈을 실행하는 코드를 작성하세요. 실행 조건은 0으로 나누면 입력을 다시 한번 받도록 하고,
//0을 연속해서 나누면 메시지와 함께 프로그램이 종료되도록 구성합니다.
#include <stdio.h>

int main()
{
	int a, b, result;
	int WriteCount_0 = 0;

	printf("## 두 수를 나누기 ##\n");
	printf("첫번째 값을 입력하세요. ==> ");
	scanf("%d", &a);

	while (1) {
		printf("두번째 값을 입력하세요. ==> ");
		scanf("%d", &b);

		if (b != 0)
		{
			result = a / b;
			printf("%d / %d = %d 입니다.\n", a, b, result);
			break;
		}
		else if (b == 0)
		{
			WriteCount_0++;

			if (WriteCount_0 == 3)
			{
				printf("0을 3번 입력했습니다. 종료합니다.\n");
				break;
			}
			else
				printf("두번째 값에 0을 %d 번 입력했습니다. 다시 입력하세요.\n", WriteCount_0);
		}

	}
	return 0;
}