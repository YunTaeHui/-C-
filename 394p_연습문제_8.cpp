//394p_연습문제_8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber() {
	return rand() % 100 + 1;
}

void main()
{
	FILE* wfp;
	short int lotto[5] = { 0, };
	int i, k, num;

	wfp = fopen("d:\\c++\\ex11.txt", "w");
	srand((unsigned)time(NULL));

	for (i = 0; i < 5;) {
		num = getNumber();

		lotto[i++] = num;
	}
	for (i = 0; i < 5; i++) {
		printf("추출 숫자 ==> %d\n", lotto[i]);
		fprintf(wfp, "추출 숫자 ==> %d\n", lotto[i]);
	}
	fclose(wfp);
}