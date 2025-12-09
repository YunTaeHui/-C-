//377p_기본11-7
//#include <stdio.h>
//
//void main()
//{
//	char s[20];
//	FILE* rfp;
//
//	rfp = fopen("c:\\temp\\data1.txt", "r");
//
//	fgets(s, 20, rfp);
//
//	printf("파일에서 읽은 문자열 : ");
//	puts(s);
//
//	fclose(rfp);
//}


//381p_기본11-9
//#include <stdio.h>
//void main()
//{
//	FILE* rfp;
//	int hap = 0;
//	int in, i;
//
//	rfp = fopen("c:\\temp\\data2.txt", "r");
//
//	for (i = 0; i < 5; i++)
//	{
//		fscanf(rfp, "%d", &in);
//		hap = hap + in;
//	}
//	printf("합계 ==> %d\n", hap);
//
//	fclose(rfp);
//}


//382p_기본11-10
//#include <stdio.h>
//void main()
//{
//	char s[20];
//	FILE* wfp;
//
//	wfp = fopen("c:\\temp\\data3.txt", "w");
//
//	printf("문자열을 입력(최대 19자) : ");
//	gets_s(s);
//
//	fputs(s, wfp);
//
//	fclose(wfp);
//}

//심화_36p_문제1
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	fprintf(aFile, "\"HelloWorld\"");
//	fclose(aFile);
//
//	return 0;
//}


//심화_36p_문제2
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	fprintf(aFile, "\"HelloWorld\"");
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	fprintf(bFile, "\"ByeWorld\"");
//	fclose(bFile);
//
//	return 0;
//}


//심화_36p_문제3
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	puts("첫 번째 파일에 내용을 입력하세요: ");
//	char aWord[100];
//	scanf("%s", aWord);
//	fprintf(aFile, "%s", aWord);
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	puts("두 번째 파일에 내용을 입력하세요: ");
//	char bWord[100];
//	scanf("%s", bWord);
//	fprintf(bFile, "%s", bWord);
//	fclose(bFile);
//
//	return 0;
//}


//심화_36p_문제4
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	puts("첫 번째 파일에 내용을 입력하세요: ");
//	char aWord[100];
//	scanf("%s", aWord);
//	fprintf(aFile, "%s", aWord);
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	puts("두 번째 파일에 내용을 입력하세요: ");
//	char bWord[100];
//	scanf("%s", bWord);
//	fprintf(bFile, "%s", bWord);
//	fclose(bFile);
//
//	aFile = fopen("afile.txt", "r");
//	fscanf(aFile, "%s", aWord);
//	printf("첫 번째 파일의 내용은 %s\n", aWord);
//	fclose(aFile);
//
//	bFile = fopen("bfile.txt", "r");
//	fscanf(bFile, "%s", bWord);
//	printf("두 번째 파일의 내용은 % s\n", bWord);
//	fclose(bFile);
//
//	return 0;
//}


//심화_36p_문제5
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	puts("첫 번째 파일에 내용을 입력하세요: ");
//	char aWord[100];
//	scanf("%s", aWord);
//	fprintf(aFile, "%s", aWord);
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	puts("두 번째 파일에 내용을 입력하세요: ");
//	char bWord[100];
//	scanf("%s", bWord);
//	fprintf(bFile, "%s", bWord);
//	fclose(bFile);
//
//	aFile = fopen("afile.txt", "r");
//	fscanf(aFile, "%s", aWord);
//	printf("첫 번째 파일의 내용은 %s\n", aWord);
//	fclose(aFile);
//
//	bFile = fopen("bfile.txt", "r");
//	fscanf(bFile, "%s", bWord);
//	printf("두 번째 파일의 내용은 %s\n", bWord);
//	fclose(bFile);
//
//	int i = 0;
//	int SameCount = 0;
//
//	while (aWord[i] != '\0' && bWord[i] != '\0') {
//		if (aWord[i] == bWord[i]) {
//			printf("%d번째에서 %c문자가 같은 위치에 있습니다.\n", i + 1, aWord[i]);
//			SameCount++;
//		}
//		i++;
//	}
//	printf("같은 문자는 총 %d 개 있습니다.\n", SameCount);
//	return 0;
//}


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


//심화37p_문제3 기능별로 함수를 나눠써야한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 6
#define BUFF_SIZE 2
#define MAX_WORDS 100
#define MAX_LEN 32

void printenergy(int my)
{
	printf("내 목숨 : ");
	for (int i = 0; i < my; i++)
		printf("■");
	for (int i = my; i < MAXENERGY; i++)
		printf("□");
	printf("\n");
}
int main()
{
	srand((unsigned int)time(NULL));

	int N;
	char buff[1024];

	FILE* aFile;
	
	aFile = fopen("words.txt", "r");

	fscanf(aFile, "%d", &N);
	char** words;

	words = (char**)malloc(sizeof(char*) * MAX_WORDS);

	int word_count = 0;
	char buffer[MAX_LEN];

	while (word_count < MAX_WORDS &&
		fscanf(aFile, "%s", buffer) == 1) {
		
		int len = (int)strlen(buffer);

		words[word_count] = (char*)malloc(len + 1);

		strcpy(words[word_count], buffer);
		word_count++;
	}
	fclose(aFile);

	int idx = rand() % word_count;
	char* tmp = words[idx];
	int len = (int)strlen(tmp);

	char* num = (char*)malloc(len + 1);

	for (int i = 0; i < len; i++) {
		num[i] = '_';
	}
	num[len] = '\0';

	int energy = MAXENERGY;
	char input;
	while (1) {
		printenergy(energy);
		if (energy == 0) {
			printf("게임 오버...\n");
			printf("정답 : %s", tmp);
			break;
		}
		printf("단어 : %s\n\n", num);
		if (strcmp(tmp, num) == 0) {
			printf("게임 승리!\n");
			printf("정답 : %s", tmp);
			break;
		}
		printf("알파벳 한 글자를 맞춰보세요: ");
		scanf(" %c", &input);

		bool check = true;
		for (int i = 0; i < len; i++) {
			if (tmp[i] == input) {
				num[i] = input;
				check = false;
			}
		}
		if (check == 1) {
			energy--;
		}
	}
	free(num);
	for (int i = 0; i < word_count; i++) {
		free(words[i]);
	}
	free(words);
	return 0;
}



