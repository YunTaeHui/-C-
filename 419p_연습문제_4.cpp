//419p_¿¬½À¹®Á¦_4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

int getNumber() {
	return rand() % 100 + 1;
}

int main()
{
	int* p = NULL;
	int cnt = 0;
	int num;
	int sum = 0;

	printf("·£´ýÇÏ°Ô »ÌÈù ¼ýÀÚ ==> ");
	srand((unsigned)time(NULL));

	while (1) {
		num = getNumber();

		if (cnt >= 1 && num == 99) {
			break;
		}

		p = (int*)realloc(p, sizeof(int) * (cnt + 1));

		p[cnt] = num;
		printf("%d ", num);
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		sum += p[i];
	}

	printf("\n ·£´ýÇÑ ¼ýÀÚ ÇÕ ==> %d\n", sum);

	free(p);
	return 0;
}