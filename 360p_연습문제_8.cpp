//360p_��������_8

#include <stdio.h>
#include <string.h>

char* upper_lower(char* inStr)
{
	int i, len;
	int diff = 'a' - 'A';

	len = strlen(inStr);

	for (i = 0; i < len; i++)
	{
		if (('A' <= inStr[i]) && (inStr[i] <= 'Z'))
			inStr[i] = inStr[i] + diff;
		else if (('a' <= inStr[i]) && (inStr[i] <= 'z'))
			inStr[i] = inStr[i] - diff;
		else
			inStr[i] = inStr[i];
	}
	inStr[i] = '\0';

	return inStr;
}

void main()
{
	char inStr[100], outStr[100];

	printf("���ڿ��� �Է�(100�� �̳�) : ");
	scanf("%s", inStr);

	strcpy(outStr, upper_lower(inStr));

	printf("��ҹ��� ��ȯ ��� ==> %s\n", outStr);
}