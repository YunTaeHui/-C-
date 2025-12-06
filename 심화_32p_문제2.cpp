//심화_32p_문제1
//십의 자리는 0~40, 일의 자리는 0~4, 총 20개의 값이 출력되는 프로그램이다.
//마지막 예제를 new, delete를 사용하여 변경해보자.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	//aNum = (int**)malloc(nRow * sizeof(int*));
//	aNum = new int*[nRow];
//	for (int i = 0; i < nRow; i++) {
//		//aNum[i] = (int*)malloc(nCol * sizeof(int));
//		aNum[i] = new int[nCol];
//
//		for (int j = 0; j < nCol; ++j) {
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < nRow; ++i) {
//		for (int j = 0; j < nCol; j++)
//			printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//	for (int i = 0; i < nRow; ++i)
//		//free(aNum[i]);
//		delete aNum[i];
//	//free(aNum);
//	delete aNum;
//}


//심화_32p_문제2
//동적할당을 사용하여 배열 10개를 만들고 그 내용을 rand()
//함수를 사용하여 1~10까지의 랜덤한 수로 채워서 출력하라.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n = 10;
	int* arr;

	arr = new int[n];

	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	delete arr;
	return 0;
}