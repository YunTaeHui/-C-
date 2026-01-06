//심화_41p_문제1_C
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//	int num;
//	printf("학생 인원을 입력하세요: ");
//	scanf("%d", &num);
//	int* scores = (int*)malloc(sizeof(int) * num);
//	//0~100 점수 빈도
//	int freq[101] = { 0 };
//
//	printf("성적: ");
//	for (int i = 0; i < num; i++) {
//		scores[i] = rand() % 100 + 1;
//		freq[scores[i]]++;
//		printf("%d ", scores[i]);
//	}
//	int best_score = 0;
//	int best_count = freq[0];
//	for (int j = 1; j <= 100; j++) {
//		if (freq[j] > best_count) {
//			best_count = freq[j];
//			best_score = j;
//		}
//	}
//	printf("\n최다점수 : %d, 인원 : %d\n",
//		best_score, best_count);
//	free(scores);
//	return 0;
//}


//심화_41p_문제1_CPP
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
	srand((unsigned)time(NULL));
	int num;
	cout << "학생 인원을 입력하세요: ";
	cin >> num;

	int* scores = new int[num];
	int freq[101] = { 0 };

	cout << "성적: ";
	for (int i = 0; i < num; i++) {
		scores[i] = rand() % 101;
		freq[scores[i]]++;
		cout << scores[i] << ' ';
	}
	int best_score = 0;
	int best_count = freq[0];
	for (int j = 1; j <= 100; j++) {
		if (freq[j] > best_count) {
			best_count = freq[j];
			best_score = j;
		}
	}
	cout << "\n최다점수 : " << best_score << ", 인원 : " << best_count << "\n";

	delete[] scores;
	return 0;
}

