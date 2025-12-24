//심화37p_예제
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char num[4] = "___";
//	char tmp[4];
//	int answer = rand() % 1000;
//	sprintf(tmp, "%03d", answer);
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (energy == 0) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("정답 : %s\n\n", num);
//		if (atoi(num) == answer) {
//			printf("게임 승리!\n");
//			break;
//		}
//		printf("숫자를 맞춰보세요: ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < 3; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check == 1)
//		{
//			energy--;
//		}
//	}
//	return 0;
//}


//심화37p_문제1 동적할당을 사용해야한다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
//int main()
//{
//	char* num;
//	char* tmp;
//
//	num = (char*)malloc(4);
//	tmp = (char*)malloc(4);
//
//	strcpy(num, "___");
//
//	srand((unsigned int)time(NULL));
//
//	int answer = rand() % 1000;
//	sprintf(tmp, "%03d", answer);
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (energy == 0) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("정답 : %s\n\n", num);
//		if (atoi(num) == answer) {
//			printf("게임 승리!\n");
//			break;
//		}
//		printf("숫자를 맞춰보세요: ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < 3; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check == 1) {
//			energy--;
//		}
//	}
//	free(tmp);
//	free(num);
//	return 0;
//}


//심화37p_문제2 영어단어목록은 파일에 저장해놓고 불러와서 써야한다.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//#define MAX_WORDS 100
//#define MAX_LEN 32
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	FILE* aFile;
//	aFile = fopen("words.txt", "r");
//
//	char** words;
//	words = (char**)malloc(sizeof(char*) * MAX_WORDS);
//
//	int word_count = 0;
//	char buffer[MAX_LEN];
//
//	while (word_count < MAX_WORDS &&
//		fscanf(aFile, "%31s", buffer) == 1) {
//		
//		int len = (int)strlen(buffer);
//
//		words[word_count] = (char*)malloc(len + 1);
//
//		strcpy(words[word_count], buffer);
//		word_count++;
//	}
//	fclose(aFile);
//
//	int idx = rand() % word_count;
//	char* tmp = words[idx];
//	int len = (int)strlen(tmp);
//
//	char* num = (char*)malloc(len + 1);
//
//	for (int i = 0; i < len; i++) {
//		num[i] = '_';
//	}
//	num[len] = '\0';
//
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (energy == 0) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("단어 : %s\n\n", num);
//		if (strcmp(tmp, num) == 0) {
//			printf("게임 승리!\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("알파벳 한 글자를 맞춰보세요: ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < len; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check == 1) {
//			energy--;
//		}
//	}
//	free(num);
//	for (int i = 0; i < word_count; i++) {
//		free(words[i]);
//	}
//	free(words);
//	return 0;
//}


//심화37p_문제3 기능별로 함수를 나눠써야한다. (2차 동적메모리)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//#define BUFF_SIZE 2
//#define MAX_WORDS 100
//#define MAX_LEN 32
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	int N;
//	char buff[1024];
//
//	FILE* aFile;
//
//	aFile = fopen("words.txt", "r");
//
//	fscanf(aFile, "%d", &N);
//	char** words;
//
//	words = (char**)malloc(sizeof(char*) * MAX_WORDS);
//
//	int word_count = 0;
//	char buffer[MAX_LEN];
//
//	while (word_count < MAX_WORDS &&
//		fscanf(aFile, "%s", buffer) == 1) {
//
//		int len = (int)strlen(buffer);
//
//		words[word_count] = (char*)malloc(len + 1);
//
//		strcpy(words[word_count], buffer);
//		word_count++;
//	}
//	fclose(aFile);
//
//	int idx = rand() % word_count;
//	char* tmp = words[idx];
//	int len = (int)strlen(tmp);
//
//	char* num = (char*)malloc(len + 1);
//
//	for (int i = 0; i < len; i++) {
//		num[i] = '_';
//	}
//	num[len] = '\0';
//
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (energy == 0) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("단어 : %s\n\n", num);
//		if (strcmp(tmp, num) == 0) {
//			printf("게임 승리!\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("알파벳 한 글자를 맞춰보세요: ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < len; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check == 1) {
//			energy--;
//		}
//	}
//	free(num);
//	for (int i = 0; i < word_count; i++) {
//		free(words[i]);
//	}
//	free(words);
//	return 0;
//}


//심화_37p_문제3-3 기능별로 함수를 나눠써야한다. (1차 동적메모리)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//#define MAX_LEN 100
//
//void printenergy(int my)
//{
//	printf("내 목숨: ");
//	for (int i = 0; i < my; i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
//
////words.txt 에서 랜덤으로 한 단어를 골라서 동적할당 후 리턴
//char* select_random_word(const char* filename)
//{
//	FILE* aFile = fopen("words.txt", "r");
//
//	int N;
//	fscanf(aFile, "%d", &N);
//
//	int idx = rand() % N;
//	char buffer[MAX_LEN];
//
//	for (int i = 0; i <= idx; i++) {
//		fscanf(aFile, "%s", buffer);
//	}
//	fclose(aFile);
//
//	int len = (int)strlen(buffer);
//	char* tmp = (char*)malloc(len + 1);
//	strcpy(tmp, buffer);
//	return tmp;
//}
////정답 단어 하나를 가지고 게임 진행
//void play_game(const char* answer)
//{
//	int len = (int)strlen(answer);
//	char* num = (char*)malloc(len + 1);
//	for (int i = 0; i < len; i++) {
//		num[i] = '_';
//	}
//	num[len] = '\0';
//
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (!energy) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", answer);
//			break;
//		}
//		printf("정답: %s\n\n", num);
//		if (strcmp(answer, num) == 0) {
//			printf("게임 승리!\n");
//			printf("정답 : %s", answer);
//			break;
//		}
//		printf("알파벳 한 글자를 맞춰보세요: ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < len; i++) {
//			if (answer[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check) {
//			energy--;
//		}
//	}
//	free(num);
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	char* tmp = select_random_word("words.txt");
//
//	play_game(tmp);
//
//	free(tmp);
//	return 0;
//}


//심화_37p_문제3-4 단어를 틀린경우 목록추가
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 6
#define MAX_LEN 100

void printenergy(int my)
{
	printf("내 목숨 : ");
	for (int i = 0; i < my; i++)
		printf("■");
	for (int i = my; i < MAXENERGY; i++)
		printf("□");
	printf("\n");
}
//메모장에서 값을 받아오고 메모리할당하는 함수
char* random_num(const char* filename)
{
	FILE* aFile = fopen("words.txt", "r");
	int N;
	fscanf(aFile, "%d", &N);
	int idx = rand() % N;
	char buff[MAX_LEN];

	for (int i = 0; i <= idx; i++) {
		fscanf(aFile, "%s", buff);
	}
	fclose(aFile);
	int len = strlen(buff);
	char* tmp = (char*)malloc(len + 1);
	strcpy(tmp, buff);
	return tmp;
}
//게임을 진행하는 함수
void play_game(const char* answer)
{
	int len = strlen(answer);
	char* num = (char*)malloc(len + 1);
	for (int i = 0; i < len; i++) {
		num[i] = '_';
	}
	num[len] = '\0';

	int energy = MAXENERGY;
	char input;

	char except[MAXENERGY] = {};
	int wrongCount = 0;

	while (1) {
		printenergy(energy);
		if (energy == 0) {
			printf("게임 오버...\n");
			printf("정답 : %s", answer);
			break;
		}
		printf("단어 : %s\n\n", num);
		if (strcmp(num, answer) == 0) {
			printf("게임 승리!\n");
			printf("정답 : %s", answer);
			break;
		}
		printf("알파벳 한 글자를 맞춰보세요: ");
		scanf(" %c", &input);
		bool check = true;
		for (int i = 0; i < len; i++) {
			if (answer[i] == input) {
				num[i] = input;
				check = false;
			}
		}
		if (check == 1) {
			bool dup = true;
			for (int i = 0; i < MAXENERGY - energy; i++) {
				if (except[i] == input) {
					dup = 0;
					break;
				}
			}
			if (dup && energy > 0) {
				except[wrongCount++] = input;
				energy--;
			}
			printf("없는 글자: ");
			for (int i = 0; i < MAXENERGY - energy; i++) {
				printf("%c ", except[i]);
			}
			printf("\n");
		}
	}
	free(num);
}
int main()
{
	srand((unsigned int)time(NULL));
	//메모장에서 값을 받아오고 메모리할당하는 함수
	char* tmp = random_num("words.txt");
	//게임을 진행하는 함수
	play_game(tmp);

	free(tmp);
	return 0;
}