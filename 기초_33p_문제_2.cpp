//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("�� %d ����\n", sheep);
//	}
//	printf("������!");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("�� %d���� \n", sheep);
//		if (sheep == 3)
//		{
//			printf("���߿� ������!\n");
//			break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3)
//		{
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d ���� \n", sheep);
//	}
//	return 0;
//}

//����_33p_����_1
//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("�� %d���� \n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//����_33p_����_2
#include <stdio.h>

int main()
{
	int sheep;
	for (sheep = 1; sheep <= 50; sheep++)
	{
		if (sheep == 10 || sheep == 20 || sheep == 30 || sheep == 40) {
			printf("���Ƽ� ���� ���� ���ߴ�!\n");
			continue;
		}
		if (sheep > 45)
			break;
		printf("�� %d���� \n", sheep);
	}
	return 0;
}