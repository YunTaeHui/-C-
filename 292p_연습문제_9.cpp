#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	char ch1, ch2;
	int count, i, j;

	printf("���ڿ��� �Է��ϼ���.");
	gets_s(ss);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf("%c %c", &ch1, &ch2);

	count = strlen(ss);

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		char tmp = ss[i];
		ss[i] = ss[j];
		ss[j] = tmp;
	}
	printf("������ �Ųٷ� ��� ==> %s \n", ss);

	for (i = 0; i < count; i++)
	{
		if (ss[i] == ch1)
			ss[i] = ch2;
	}
	printf("���ڸ� ��ȯ�Ͽ� ��� ==> %s \n", ss);

	return 0;
}