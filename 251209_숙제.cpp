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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getnumber() {
	return rand() % 100 + 1;
}
int main()
{
	FILE* aFile = fopen("ex11.txt", "w");
	srand((unsigned int)time(NULL));
	int Lot[5] = {};

	for (int i = 0; i < 5; i++) {
		int num = getnumber();
		Lot[i] = num;
	}
	for (int i = 0; i < 5; i++) {
		fprintf(aFile, "추출 숫자 ==> %d\n", Lot[i]);
		printf("추출 숫자 ==> %d\n", Lot[i]);
	}
	return 0;
}