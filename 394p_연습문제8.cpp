//394p_연습문제8
//1~100 사이의 숫자 5개를 추출해서 화면에도 출력하고, ex11.txt 파일에도 저장하는 기느으이
//프로그램을 작성해보세요. 단, 숫자는 랜덤으로 출력됩니다.
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

	wfp = fopen("ex11.txt", "w");
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