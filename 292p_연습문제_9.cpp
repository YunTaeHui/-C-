#include <string.h>
#include <stdio.h>

void main()
{
	char ss[100];
	char tt[100];
	char ch1, ch2;
	int count, i;

	printf("���� ���ڸ� �Է� : ");
	gets_s(ss);

	printf("���� ���ڿ� ���ο� ���� �Է� : ");
	scanf("%c %c", &ch1, &ch2);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		if (ss[i] == ch1)
			ss[i] = ch2;
	}
	printf("��ȯ�� ��� ==> %s \n", ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';
	printf("������ �Ųٷ� ��� ==> %s \n", tt);
}
