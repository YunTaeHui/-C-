#include <stdio.h>

void main()
{
	int a, b, c;
	int result;
	char k;

	printf("���� ��ȣ�� �Է��ϼ��� '+' OR '*' ==> ");
	scanf("%c", &k);

	printf("ù��° ���ڸ� �Է��ϼ���. ==> ");
	scanf("%d", &a);

	printf("�ι�° ���ڸ� �Է��ϼ���. ==> ");
	scanf("%d", &b);

	printf("����° ���ڸ� �Է��ϼ���. ==> ");
	scanf("%d", &c);

	if (k == '+')
	{
		result = a + b + c;
		printf("���� 3���� ���� %d �Դϴ�.\n", result);
	}
	if (k == '*')
	{
		result = a * b * c;
		printf("���� 3���� ���� %d �Դϴ�.\n", result);
	}
	else
		printf("'+' OR '*' ���� �ƴմϴ�.\n");
}