//386p
//읽기용 파일과 쓰기용 파일의 이름을 직접 입력받도록 [응용 11-11]을 수정해보자.
//즉 다음과 같이 실행 되게 하자.
//읽기 파일명 : c:\windows\win.ini
//쓰기 파일명 : c:\temp\data6.txt
#include <stdio.h>

int main()
{
	char str[200];
	FILE* rfp;
	FILE* wfp;

	rfp = fopen("c:\\windows\\win.ini", "r");
	wfp = fopen("data6.txt", "w");

	for (;;)
	{
		fgets(str, 200, rfp);
		if (feof(rfp))
			break;
		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);

	return 0;
}