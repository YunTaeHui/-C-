//184p_��������_10
#include <stdio.h>

int main()
{
	char ch;

	printf("A, B, C Ű �� �ϳ��� ������ Enter�� �������� : ");
	scanf("%c", &ch);

	if (ch == 'A')
		printf("A ��� \n");
	else if (ch == 'B')
		printf("B ��� \n");
	else if (ch == 'C')
		printf("C ��� \n");
	else
		printf("�� \n");

	return 0;
}