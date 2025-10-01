//32p 타이핑작업
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
		printf("\n%d 번째 날 !\n", ++day);
		printf("오늘도 코딩할까요?\n");
		printf("1. 코딩 한다. \n");

		printf("2. 놀러 간다. \n");
		printf("3. 공부 한다. \n");

		printf("4. 그만한다.\n >> ");
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
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서.");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
			printf("코딩 공부합니다.\n");
			study++;
		}

		if (command == 2)
		{
			switch (restInt) {
			case 1:
				printf("기분이 좋네요. ");
			case 3:
				printf("먼곳에서 ");
				break;
			case 2:
				printf("기분이 나빠요. ");
			case 4:
				printf("동네에서 ");
			}
			printf("놀도록 합니다.\n");
			rest++;
		}

		if (command == 3)
		{
			switch (studyInt) {
			case 1:
				printf("기분이 좋네요. ");
			case 3:
				printf("인터넷 강의 ");
				break;
			case 2:
				printf("기분이 나빠요. ");
			case 4:
				printf("클론 코딩 ");
			}
			printf("하도록 합니다.\n");
			study++;
		}

	} while (1);
	if (day <= 3) {
		printf("그대로 입니다...\n");
	}
	else {
		int level_1 = study / 8;

		if (study - rest > 0)
		{
			switch (level_1) {
			case 0:
				printf("코딩 새싹이 되었습니다.!\n");
				break;

			case 1:
				printf("프로그래머가 되었습니다.!\n");
				break;

			case 2:
				printf("FrontEnd 개발자가 되었습니다.!\n");
				break;

			case 3:
				printf("BackEnd 개발자가 되었습니다.!\n");
				break;

			default:
				printf("풀스택 개발자가 되었습니다.!\n");
				break;
			}

			switch (rest) {
			case 0:
				printf("놀지 않고 했다고 ?! \n");
				break;
			case 1:
				printf("1일을 놀다니.. \n");
				break;
			case 2:
				printf("2일을 놀다니.. \n");
				break;
			case 3:
				printf("3일을 놀다니.. \n");
				break;
			default:
				printf("그만 놀거라.. \n");
				break;
			}
		}
		else {
			printf("그대로 입니다...\n");
		}
	}
	return 0;
}