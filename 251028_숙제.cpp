//�⺻ 10-1 Ÿ���� 329p
//#include <stdio.h>
//
//void main()
//{
//	int coffee;
//
//	printf("� Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
//	scanf("%d", &coffee);
//
//	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�.\n");
//	printf("# 2. �������� �غ��Ѵ�.\n");
//
//	switch (coffee)
//	{
//	case 1: printf("# 3. ����Ŀ�Ǹ� ź��\n"); break;
//	case 2: printf("# 3. ����Ŀ�Ǹ� ź��\n"); break;
//	case 3: printf("# 3. ��Ŀ�Ǹ� ź��\n"); break;
//	default: printf("# 3. �ƹ��ų� ź��\n"); break;
//	}
//
//	printf("# 4. ���� �״´�\n");
//	printf("# 5. ��Ǭ���� ��� ���δ�\n\n");
//
//	printf("�մ� Ŀ�� ���� �ֽ��ϴ�.\n\n");
//}


//�⺻ 10-2 Ÿ���� 332p
//#include <stdio.h>
//
//int coffee_machine(int button)
//{
//	printf("\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�\n");
//	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�\n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
//	case 2: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
//	case 3: printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��\n"); break;
//	default: printf("# 3. (�ڵ�����) �ƹ��ų� ź��\n"); break;
//	}
//
//	printf("# 4. (�ڵ�����) ���� �״´�\n");
//	printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�\n\n");
//
//	return 0;
//}
//
//void main()
//{
//	int coffee;
//	int ret;
//
//	printf("� Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��) ");
//	scanf("%d", &coffee);
//
//	ret = coffee_machine(coffee);
//
//	printf("�մ�~ Ŀ�� ���� �ֽ��ϴ�.\n\n");
//}


//�⺻ 10-3 Ÿ���� 334p
#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�.\n");
	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�.\n");

	switch (button)
	{
	case 1: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
	case 2: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
	case 3: printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��\n"); break;
	default: printf("# 3. (�ڵ�����) �ƹ��ų� ź��\n"); break;
	}

	printf("# 4. (�ڵ�����) ���� �״´�\n");
	printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�\n");

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("A��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("A�� Ŀ�� ���� �ֽ��ϴ�.\n\n");

	printf("B��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("B�� Ŀ�� ���� �ֽ��ϴ�.\n\n");

	printf("C��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("C�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
}
