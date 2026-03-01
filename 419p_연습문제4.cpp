//419p_연습문제4
//반복문을 통해 1~100의 숫자를 랜덤하게 추출한다. 동적 메모리를 한 칸씩 확장하면서 추출한 숫자를 입력한다.
//단, 두 번째 이후에 추출한 숫자가 99라면 지금까지 동적 메모리에 저장된 값의 합계를 구한 후 프로그램을 종료한다.
//이 때 99는 저장하지 않으며 실행 결과는 랜덤하게 작동한다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber() {
	return rand() % 100 + 1;
}

int main()
{
	int* p = NULL;
	int cnt = 0;
	int sum = 0;

	printf("랜덤하게 뽑힌 숫자 ==> ");
	srand((unsigned)time(NULL));

	while (1) {
		int num = getNumber();

		if (cnt >= 1 && num == 99) {
			break;
		}

		int* tmp = (int*)realloc(p, sizeof(int) * (cnt + 1));
		if (tmp == NULL) {
			free(p);
			printf("\n메모리 할당 실패\n");
			return -1;
		}
		p = tmp;

		p[cnt] = num;
		printf("%d ", num);
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		sum += p[i];
	}
	printf("\n 랜덤한 숫자 합 ==> %d\n", sum);

	free(p);
	return 0;
}