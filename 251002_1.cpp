//30p ����5 : if (ch == 'F') ����
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch == 'F')
//		{
//			ch++;
//			continue;
//		}
//		printf("%c ", ch);
//		ch++;
//	}
//}

//30p ����5_1 : if (ch != 'F') ����
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'A';
//
//	while (ch <= 'Z')
//	{
//		if (ch != 'F')
//			printf("%c ", ch);
//		ch++;
//
//	}
//}


//238p �⺻7-8 (while)
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("�� �� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0�� �Է��ؼ� while ���� Ż���߽��ϴ�.\n");
//}

//238p �⺻7-8 (for)
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	for(;;)
//	{
//		printf("�� �� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//	printf("0�� �Է��ؼ� for ���� Ż���߽��ϴ�.\n");
//}


//238p �⺻7-10 (For)
//#include <stdio.h>
//
//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//
//		hap += i;
//	}
//	printf("1~100 ������ ��(3�� ��� ����) : %d\n", hap);
//}


//238p �⺻7-10 (While)
//#include <stdio.h>
//
//void main()
//{
//	int hap = 0;
//	int i = 1;
//
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			i++;
//			continue;
//		}
//		hap += i;
//		i++;
//	}
//	printf("1~100 ������ ��(3�� ��� ����) : %d\n", hap);
//}


//32p Ÿ�����۾�
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d ��° �� !\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �����Ѵ�.\n");
//		printf("�׿�, ������.\n >> ");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("����� ���׿�.\n");
//		case 3:
//			printf("����������.");
//			break;
//		case 2:
//			printf("����� ������.\n");
//		case 4:
//			printf("ī�信�� ");
//			break;
//		case 5: printf("�п����� ");
//		}
//		printf("�ڵ� �����մϴ�.\n");
//		study++;
//	} while (1);
//	if (day <= 3) {
//		printf("�״�� �Դϴ�...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//
//		case 0:
//			printf("�ڵ� ������ �Ǿ����ϴ�.!\n");
//			break;
//
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//			break;
//
//		case 2:
//			printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//
//		case 3:
//			printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//		}
//	}
//	return 0;
//}

//����_30p_����_6
//#include <stdio.h>
//
//void main()
//{
//	int count;
//	int hap = 0;
//	int turn = 1;
//
//	while (1)
//	{
//		if(turn % 2 == 0)
//			printf("A : ");
//		if (turn % 2 == 1)
//			printf("B : ");
//		scanf("%d", &count);
//
//		if (count > 3) {
//			printf("���ڴ� 3������ �Է��ϼ���.\n");
//		}
//		else {
//			hap = hap + count;
//			if (turn % 2 == 0)
//				printf("=> %d\n", hap);
//			else if (turn % 2 == 1)
//				printf("=> %d\n", hap);
//			if (hap < 31)
//				turn++;
//		}
//		if (hap >= 31)
//		{
//			if (turn % 2 == 0)
//			{
//				printf("B�� �̰���ϴ�!");
//				break;
//			}
//			else if (turn % 2 == 1)
//			{
//				printf("A�� �̰���ϴ�!");
//				break;
//			}
//		}
//	}
//}

//����_30p_����_6_1
//#include <stdio.h>
//
//void main()
//{
//	int count;
//	int hap = 0;
//	int turn = 0;
//
//	while (1)
//	{
//		printf("%c : ", 'A' + turn);
//		scanf("%d", &count);
//
//		if (count > 3) {
//			printf("���ڴ� 3������ �Է��ϼ���.\n");
//			continue;
//		}
//		hap = hap + count;
//		printf("=> %d\n", hap);
//
//		//turn = !turn;
//
//		if (hap >= 31)
//		{
//			break;
//		}
//		turn = ++turn % 2;
//	}
//	//printf("%c�� �̰���ϴ�!", 'A' + turn);
//	printf("%c�� �����ϴ�!", 'A' + turn);
//}



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
//#include <stdio.h>
//
//int main()
//{
//	int pass;
//	int input;
//	enum { LOGIN = 1, SIGNUP, OPTION, CREATOR };
//
//	do {
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�α���, 2.ȸ������, 3.�ɼ�, 4.���� �����\n");
//		pass = scanf("%d", &input);
//
//		if (pass != 1)
//			input = 0;
//
//		switch (input) {
//		case LOGIN:
//			printf("�α��� â Ȱ��ȭ\n");
//			break;
//		case SIGNUP:
//			printf("ȸ������ â Ȱ��ȭ\n");
//			break;
//		case OPTION:
//			printf("�ɼ� â Ȱ��ȭ\n");
//			break;
//		case CREATOR:
//			printf("���� ����� �Ұ�\n");
//			break;
//		}
//	} while (input <= 4 && input >=1);
//
//	printf("�׸� �̿��� �� �Էµ�. �����մϴ�.\n");
//
//	return 0;
//}


//����_32p_����_2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int coding = 0;
//	int rest = 0;
//	int study = 0;
//	int pass;
//	do {
//		printf("\n%d ��° �� !\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �ڵ� �Ѵ�. \n");
//		printf("2. � ����. \n");
//		printf("3. ���� �Ѵ�. \n");
//		printf("�� ��. ������.\n >> ");
//		scanf("%d", &command);
//
//		int randInt = rand() % 5 + 1;
//		int restInt = rand() % 4 + 1;
//		int studyInt = rand() % 5 + 1;
//
//		if (command == 1)
//		{
//			switch (randInt) {
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("����������.");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5: printf("�п����� ");
//			}
//			printf("�ڵ� �����մϴ�.\n");
//			coding++;
//		}
//		else if (command == 2)
//		{
//			switch (restInt) {
//			case 1:
//				printf("����� ���׿�. ");
//			case 3:
//				printf("�հ����� ");
//				break;
//			case 2:
//				printf("����� ������. ");
//			case 4:
//				printf("���׿��� ");
//			}
//			printf("��� �մϴ�.\n");
//			rest++;
//		}
//		else if (command == 3)
//		{
//			switch (studyInt) {
//			case 1:
//				printf("����� ���׿�. ");
//			case 3:
//				printf("�ǹ��ڷ� ���� ");
//				break;
//			case 2:
//				printf("����� ������. ");
//			case 4:
//				printf("å���鼭 ���� ");
//			case 5: printf("�����ڷ� ���� ");
//			}
//			printf("�ϵ��� �մϴ�.\n");
//			study++;
//		}
//		else
//			break;
//
//	} while (1);
//	if (day <= 3) {
//		printf("�״�� �Դϴ�...\n");
//	}
//	else {
//		if (coding > rest && coding > study)
//		{
//		int level = coding / 8;
//			switch (level) {
//			case 0:
//				printf("�ڵ� ������ �Ǿ����ϴ�.!\n");
//				break;
//
//			case 1:
//				printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//				break;
//
//			case 2:
//				printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//
//			case 3:
//				printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//
//			default:
//				printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			}
//		}
//		else if(rest > coding && rest > study)
//		{
//			switch (rest) {
//			case 0:
//				printf("���� �ʰ� �ߴٰ� ?! \n");
//				break;
//			case 1:
//				printf("1���� ��ٴ�.. \n");
//				break;
//			case 2:
//				printf("2���� ��ٴ�.. \n");
//				break;
//			case 3:
//				printf("3���� ��ٴ�.. \n");
//				break;
//			default:
//				printf("�׸� ��Ŷ�.. \n");
//				break;
//			}
//		}
//
//		else if (study > coding && study > rest)
//		{
//		int level_1 = study / 8;
//			switch (level_1) {
//			case 0:
//				printf("���� ������ �Ǿ����ϴ�.! \n");
//				break;
//			case 1:
//				printf("������ ���� ����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			case 2:
//				printf("���� ���� ����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			case 3:
//				printf("���� �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			default:
//				printf("������ �Ǿ����ϴ�.!\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}



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
//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		if (sheep == 45)
//			break;
//		printf("�� %d���� \n", sheep);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("����Ʈ %d�� \n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("���� %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� :");
//	scanf("%d", &count);
//
//	for (number = 0; number < count; number++)
//	{
//		printf("�߾�  ");
//	}
//	printf("\n");
//	return 0;
//}


//35p_����_1
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	for (i = 10; i <= 99; i++)
//	{
//		printf("%d  ", i);
//		if (i % 9 == 0)
//			printf("\n");
//	}
//}


//35p_����_2
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int mul=1;
//
//	for (i = 3; i <= 8; i++)
//	{
//		mul *= i;
//	}
//	printf("3 ~ 8 ������ ��� ������ ���� %d �Դϴ�.\n", mul);
//}


//35p_����_3
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	for (i = 1; i <= 50; i++)
//	{
//		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i / 10 == 3)
//			printf("%5d", i);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100 ������ �������� ����մϴ�.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("100���� 7�� ����� ����մϴ�.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ��� : ");
//	for (number = 10, exitFor = number - 1;
//	exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}


//�ȵǴ���.
#include <stdio.h>

int main()
{
	printf("1���� 10���� ���� �� ��� : ");
	for (int number = 10, int exitFor = number - 1;
		exitFor; number *= exitFor, exitFor--)
	{

	}
	printf("%d\n", number);

	return 0;
}