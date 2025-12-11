//389p_예제모음31
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	FILE* rfp, * wfp;
//	char str1[200], str2[200];
//	int size, i;
//
//	rfp = fopen("c:\\Temp\\in.txt", "r");
//	wfp = fopen("c:\\Temp\\out.txt", "w");
//
//	while (1)
//	{
//		fgets(str1, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		size = strlen(str1);
//		for (i = size - 1; i >= 0; i--)
//			str2[size - 1 - i] = str1[i - 1];
//
//		str2[size - 1] = '\0';
//		fputs(str2, wfp);
//		fputs("\n", wfp);
//	}
//	fclose(rfp);
//	fclose(wfp);
//}


//435p_기본13-6
//#include <stdio.h>
//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//	struct student s;
//	struct student* p;
//
//	p = &s;
//
//	printf("이름 입력 : ");
//	scanf("%s", p->name);
//
//	printf("국어 점수 : ");
//	scanf("%d", &p->kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &p->eng);
//
//	p->avg = (p->kor + p->eng) / 2.0f;
//
//	printf("\n--- 구조체 포인터 활용 ---\n");
//	printf("학생 이름 ==> %s\n", p->name);
//	printf("국어 점수 ==> %d\n", p->kor);
//	printf("영어 점수 ==> %d\n", p->eng);
//	printf("평균 점수 ==> %5.1f\n", p->avg);
//}


//393p_연습문제7
//#include <stdio.h>
//int main()
//{
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	int line = 1;
//	while (1) {
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//		printf("%d : %s", line++, str);
//	}
//	fclose(rfp);
//	return 0;
//}


//394p_연습문제8
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int getnumber() {
//	return rand() % 100 + 1;
//}
//int main()
//{
//	FILE* aFile = fopen("ex11.txt", "w");
//	srand((unsigned int)time(NULL));
//	int Lot[5] = {};
//
//	for (int i = 0; i < 5; i++) {
//		int num = getnumber();
//		Lot[i] = num;
//	}
//	for (int i = 0; i < 5; i++) {
//		fprintf(aFile, "추출 숫자 ==> %d\n", Lot[i]);
//		printf("추출 숫자 ==> %d\n", Lot[i]);
//	}
//	fclose(aFile);
//	return 0;
//}


//심화_37p_문제3
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
			energy--;
			printf("없는 글자: ");
			for (int i = 0; i < MAXENERGY - energy; i++) {
				printf("%c ", except[i]);
		}


		
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