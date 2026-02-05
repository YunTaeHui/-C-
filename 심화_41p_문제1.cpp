//심화_41p_문제1_C
//iostream를 이용하여 학생인원정보가 주어졌을 때, rand()으로 각 학생들의 성적정보를
//생성하여(0~100점) 출력한 뒤, 가장 많이 나온 점수는 무엇이고 몇 명이 그 성적을 받았는지에
//대한 정보를 같이 출력하라.
//입력예시 ) 5
//출력예시 ) 성적 : 30 40 30 21 30
//			최다점수 : 30, 인원 : 3

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

