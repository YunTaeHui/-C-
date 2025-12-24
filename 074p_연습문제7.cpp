//074p_연습문제7
//두 수의 나눗셈을 실행하는 코드를 작성하세요. 실행 조건은 0으로 나누면 입력을 다시 한번 받도록 하고,
//0을 연속해서 나누면 메시지와 함께 프로그램이 종료되도록 구성합니다.
#include <stdio.h>

int main()
{
	int a, b, result;
	int writeCount = 0;

	printf("## 두 수를 나누기 ##\n");
	printf("첫 번째 값 ==> ");
	if (scanf("%d", &a) != 1) {
		return 0;
	}

	while (1) {
		printf("두 번째 값 ==> ");
		if (scanf("%d", &b) != 1) {
			return 0;
		}
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d", a, b, result);
			break;
		}
		else if (b == 0) {
			writeCount++;
			if (writeCount == 1) {
				printf("다시 입력하세요. ");
			}
			else if (writeCount == 2) {
				printf("또 다시 입력하세요. ");
			}
			else if (writeCount == 3) {
				printf("0을 세 번 입력했습니다. 종료합니다.\n");
				break;
			}
		}
	}
	return 0;
}