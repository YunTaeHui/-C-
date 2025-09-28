#include <string.h>
#include <stdio.h>

void main()
{
	char ss[100];
	char tt[100];
	char ch1, ch2;
	int count, i;

	printf("여러 글자를 입력 : ");
	gets_s(ss);

	printf("기존 문자와 새로운 문자 입력 : ");
	scanf("%c %c", &ch1, &ch2);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		if (ss[i] == ch1)
			ss[i] = ch2;
	}
	printf("변환된 결과 ==> %s \n", ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';
	printf("내용을 거꾸로 출력 ==> %s \n", tt);
}
