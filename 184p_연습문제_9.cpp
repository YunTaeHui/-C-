//184p_��������_9
#include <stdio.h>

int main()
{
	char ch;

	printf("A, B, C Ű �� �ϳ��� ������ Enter�� �������� : ");
	scanf(" %c", &ch);

	switch (ch)
	{
	case 'A':
	case 'a': printf("A Ű�� �������ϴ�.\n"); break;

	case 'B':
	case 'b': printf("B Ű�� �������ϴ�.\n"); break;

	case 'C':
	case 'c': printf("C Ű�� �������ϴ�.\n"); break;

	default: printf("�߸� �������ϴ�.\n"); break;
	}

	return 0;
}