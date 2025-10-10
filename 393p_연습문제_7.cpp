//393p_연습문제_7
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