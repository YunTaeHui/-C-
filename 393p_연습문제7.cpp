//393p_연습문제7
//다음은 win.ini 파일을 화면에 출력하면서 앞에 행번호를 붙이는 코드입니다. 실행 결과처럼 나오도록
//코드 내 반복문을 알맞게 채워보세요.
#include <stdio.h>

int main()
{
	char str[200];
	FILE* rfp;
	rfp = fopen("c:\\windows\\win.ini", "r");
	int line = 1;
	while (1) {
		fgets(str, 200, rfp);

		if (feof(rfp))
			break;

		printf("%d : %s", line++, str);
	}
	fclose(rfp);

	return 0;
}