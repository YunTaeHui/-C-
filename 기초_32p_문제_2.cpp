//32p Ÿ�����۾�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int rest = 0;
	do {
		printf("\n%d ��° �� !\n", ++day);
		printf("���õ� �ڵ��ұ��?\n");
		printf("1. �ڵ� �Ѵ�. \n");

		printf("2. � ����. \n");
		printf("3. ���� �Ѵ�. \n");

		printf("4. �׸��Ѵ�.\n >> ");
		scanf("%d", &command);

		if (command == 4)
			break;
		int randInt = rand() % 5 + 1;
		int restInt = rand() % 4 + 1;
		int studyInt = rand() % 4 + 1;

		if (command == 1)
		{
			switch (randInt) {
			case 1:
				printf("����� ���׿�.\n");
			case 3:
				printf("����������.");
				break;
			case 2:
				printf("����� ������.\n");
			case 4:
				printf("ī�信�� ");
				break;
			case 5: printf("�п����� ");
			}
			printf("�ڵ� �����մϴ�.\n");
			study++;
		}

		if (command == 2)
		{
			switch (restInt) {
			case 1:
				printf("����� ���׿�. ");
			case 3:
				printf("�հ����� ");
				break;
			case 2:
				printf("����� ������. ");
			case 4:
				printf("���׿��� ");
			}
			printf("��� �մϴ�.\n");
			rest++;
		}

		if (command == 3)
		{
			switch (studyInt) {
			case 1:
				printf("����� ���׿�. ");
			case 3:
				printf("���ͳ� ���� ");
				break;
			case 2:
				printf("����� ������. ");
			case 4:
				printf("Ŭ�� �ڵ� ");
			}
			printf("�ϵ��� �մϴ�.\n");
			study++;
		}

	} while (1);
	if (day <= 3) {
		printf("�״�� �Դϴ�...\n");
	}
	else {
		int level_1 = study / 8;

		if (study - rest > 0)
		{
			switch (level_1) {
			case 0:
				printf("�ڵ� ������ �Ǿ����ϴ�.!\n");
				break;

			case 1:
				printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
				break;

			case 2:
				printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
				break;

			case 3:
				printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
				break;

			default:
				printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
				break;
			}

			switch (rest) {
			case 0:
				printf("���� �ʰ� �ߴٰ� ?! \n");
				break;
			case 1:
				printf("1���� ��ٴ�.. \n");
				break;
			case 2:
				printf("2���� ��ٴ�.. \n");
				break;
			case 3:
				printf("3���� ��ٴ�.. \n");
				break;
			default:
				printf("�׸� ��Ŷ�.. \n");
				break;
			}
		}
		else {
			printf("�״�� �Դϴ�...\n");
		}
	}
	return 0;
}