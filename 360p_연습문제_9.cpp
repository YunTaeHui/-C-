//360p_��������_9

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDice() {
	return rand() % 6 + 1;
}

void main()
{
	short int diceNum[10] = { 0, };
	int i;
	char dup = 'N';

	printf("** �ֻ��� 2�� ������ ���� ** \n\n");
	srand((unsigned)time(NULL));

	int dice1, dice2;
	int equalCount = 0;
	while (1) {
		dice1 = throwDice();
		dice2 = throwDice();

		if (dice1 == dice2)
		{
			diceNum[equalCount] = dice1;
			equalCount++;
		}
		if (equalCount == 10)
			break;
	}

	printf("���� ���ڰ� ���� ���� ==> ");
	for (i = 0; i < 10; i++) {
		printf("%d  ", diceNum[i]);
	}
	printf("\n\n");
}