//420p_연습문제7
//제시된 실행 결과와 같이 c:\windows\win.ini 파일의 5개 행을 읽어서 출력한 후 포인터 배열에 저장하고,
//문자열을 반대 순서로 출력하는 프로그램을 작성해보세요.
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	char* p[5] = { 0, };
	char imsi[200];
	int count = 0;

	FILE* rfp;
	rfp = fopen("c:\\windows\\win.ini", "r");

	printf("\n -- win.ini 파일의 원 내용(5줄) -- \n");
	for (count = 0; count < 5; count++)
	{
		fgets(imsi, 200, rfp);

		if (feof(rfp))
			break;

		printf("%d : %s", count + 1, imsi);

		int size = strlen(imsi);
		p[count] = (char*)malloc((sizeof(char) * size) + 1);

		strcpy(p[count], imsi);
	}
	fclose(rfp);

	printf("\n -- 순서를 거꾸로 출력 -- \n");
	for (count = 4; count >= 0; count--)
	{
		printf("%d :%s", count + 1, p[count]);
	}
	for (count = 0; count < 5; count++)
		free(p[count]);

	return 0;
}