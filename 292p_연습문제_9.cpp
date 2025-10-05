#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	char ch1, ch2;
	int count, i, j;

	printf("문자열을 입력하세요.");
	gets_s(ss);

	printf("기존 문자와 새로운 문자 : ");
	scanf("%c %c", &ch1, &ch2);

	count = strlen(ss);

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		char tmp = ss[i];
		ss[i] = ss[j];
		ss[j] = tmp;
	}
	printf("내용을 거꾸로 출력 ==> %s \n", ss);

	for (i = 0; i < count; i++)
	{
		if (ss[i] == ch1)
			ss[i] = ch2;
	}
	printf("문자를 반환하여 출력 ==> %s \n", ss);

	return 0;
}