//380p
//결과를 출력할 때 행 번호도 출력되도록 [응용 11-8]을 수정해보자.
#include <stdio.h>

void main()
{
	char str[200];
	FILE* rfp;
	int i = 1;

	rfp = fopen("c:\\windows\\win.ini", "r");

	for (;;)
	{
		fgets(str, 200, rfp);

		if (feof(rfp))
			break;

		printf("%d행: %s", i++, str);
	}

	fclose(rfp);
}