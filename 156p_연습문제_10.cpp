#include <stdio.h>

void main()
{
	int money, c50000, c10000, c5000, c1000;

	printf(" ## ����� ��ȯ�� �ݾ��� �Է��ϼ���.\n");
	scanf("%d", &money);

	c50000 = money / 50000;
	money = money % 50000;

	c10000 = money / 10000;
	money = money % 10000;

	c5000 = money / 5000;
	money = money % 5000;

	c1000 = money / 1000;
	money = money % 1000;

	printf("������ ���� ==> %d ��\n", c50000);
	printf("���� ���� ==> %d ��\n", c10000);
	printf("��õ�� ���� ==> %d ��\n", c5000);
	printf("õ�� ���� ==> %d ��\n", c1000);
	printf("����� �ٲ��� ���� �ܵ� ==> %d ��\n", money);
}