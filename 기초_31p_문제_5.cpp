//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ� : %d�� \n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do{
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("������ �����մϴ�.\n");
//	return 0;
//}


//����_31p_����_5
#include <stdio.h>

int main()
{
	int pass;
	int input;
	enum { LOGIN = 1, SIGNUP, OPTION, CREATOR };

	do {
		printf("\n�޴��� �����ϼ���.\n");
		printf("1.�α���, 2.ȸ������, 3.�ɼ�, 4.���� �����\n");
		pass = scanf("%d", &input);

		if (pass != 1)
			input = 0;

		switch (input) {
		case LOGIN:
			printf("�α��� â Ȱ��ȭ\n");
			break;
		case SIGNUP:
			printf("ȸ������ â Ȱ��ȭ\n");
			break;
		case OPTION:
			printf("�ɼ� â Ȱ��ȭ\n");
			break;
		case CREATOR:
			printf("���� ����� �Ұ�\n");
			break;
		}
	} while (input <= 4 && input > 0);

	printf("�׸� �̿��� �� �Էµ�. �����մϴ�.\n");

	return 0;
}