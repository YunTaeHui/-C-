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
