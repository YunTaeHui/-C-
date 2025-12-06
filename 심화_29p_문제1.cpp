//심화_29p_문제1
//strchr을 이용한 간단한 검색 프로그램을 만들어보자.
//1.문자열을 입력받는다(scanf() 대신 gets_s(buff)를 사용). 2.무한루프를 시작한다.
//3.검색할 문자를 입력받는다. 4.0입력시 루프를 빠져나온다. 5.있는지 없는지 출력한다.
//6. 있으면 몇번째 있는지 출력한다. 7.3으로 되돌아간다.
#include <stdio.h>
#include <string.h>

int main()
{
	char buff[100] = {};
	char ch;
	char* pch;

	printf("문자열을 입력하세요. \n");
	gets_s(buff, sizeof(buff));

	while (1)
	{
		printf("검색할 문자를 입력하세요(0 입력시 종료): \n");
		scanf(" %c", &ch);

		if (ch == '0')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		pch = strchr(buff, ch);

		if (pch == NULL)
		{
			printf("%c 문자는 문자열에 없습니다.\n", ch);
		}
		else {
			while (pch != NULL)
			{
				printf("%c는 문자열의 %d 번째에 있습니다.\n", ch, pch - buff + 1);
				pch = strchr(pch + 1, ch);
			}
		}
	}
	return 0;
}