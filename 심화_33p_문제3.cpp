//심화_33p_문제1
//값을 입력하면 1~N 까지 랜덤한 수를 생성해서 오름차순으로 출력하는 프로그램이다.
//그 코드를 해석하는 설명문을 달아보자.
//#include <stdio.h>		//표준 입출력 함수: printf, scanf 헤더
//#include <stdlib.h>		//동적 메모리 함수: malloc, free 과 srand, rand 헤더
//#include <time.h>		//난수 생성시 필요한 시간 함수를 가진 헤더
//
//void func_sort(int* pNum, int N);	//정렬 함수 선입력: 배열의 시작 주소 포인터인 * pNum와, 배열의 크기 N을 인자로 받는다.
//void func_swap(int& a, int& b);		//교환 함수 선입력: 2개의 정수 a, b 를 인자로 받는다.
//
//int main()		//main 함수 정의
//{
//	int* pNum, N;		//배열의 시작 주소 포인터와 배열의 크기 정수형 선언.
//	scanf("%d", &N);	//배열의 크기를 입력받는다.
//	pNum = (int*)malloc(sizeof(int) * N);	//동적메모리 int 크기 N개를 할당받고, 배열의 시작주소를 pNum에 저장한다.
//
//	srand((unsigned int)time(NULL));		//현재 시간을 기준으로 매 실행시 랜덤한 난수가 출력되도록 설정
//
//	printf("랜덤으로 입력받은수 출력\n");		//문자 출력
//	for (int i = 0; i < N; i++) {			//i를 0부터 N까지 1씩 증가시키면서 반복문을 실행한다.
//		*(pNum + i) = rand() % N + 1;		//pNum[i] 위치에 1~N까지 랜덤한 수를 입력한다.
//		printf("%d ", pNum[i]);				//저장된 값을 출력한다.
//	}
//	func_sort(pNum, N);			//정렬 함수를 호출한다.
//	printf("\n오름차순 정렬된 수 출력\n");	//문자 출력
//	for (int i = 0; i < N; i++) {			//i를 0부터 N까지 1씩 증가시키면서 반복문을 실행한다.
//		printf("%d ", pNum[i]);				//저장된 값을 출력한다.
//		if (i % 10 == 9) printf("\n");		//10개의 값이 출력되면 줄을 바꾼다.
//	}
//	free(pNum);		//할당된 동적메모리를 정리한다.
//	return 0;		//프로그램을 종료한다.
//}
//void func_sort(int* pNum, int N)	//배열의 시작 주소 포인터와, 배열의 크기를 인자로 받아서 정렬하는 함수부
//{
//	for (int i = 0; i < N; ++i) {			//i를 0부터 N까지 1씩 증가시키면서 i위치와 j위치의 배열 크기값를 비교하는 반복문을 실행한다.
//		for (int j = i; j < N; ++j) {		//i반복문 이내에서 j를 i부터 N까지 1씩 증가시키면서 반복문을 실행.
//			if (pNum[i] > pNum[j]) {			//i위치의 배열이 j위치의 배열보다 크면(큰 값이 오른쪽으로 이동한다.)
//				func_swap(pNum[i], pNum[j]);	//값을 바꾸는 함수를 호출
//			}
//		}
//	}
//}
//void func_swap(int& a, int& b)	//a와 b를 레퍼런스로 받아서 a와 b의 값을 교환하는 함수부.
//{
//	int temp = a;		//a값을 temp에 저장한다.
//	a = b;				//b값을 a에 입력한다.
//	b = temp;			//temp에 저장된 a값을 b에 입력한다.
//}


//심화_33p_문제2
//6번째 줄의 void func_swap(int& a, int& b) 이 코드를 지우고 실행시킬 수 있는 방법이 있다 무엇일까?
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void func_swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void func_sort(int* pNum, int N)
//{
//	for (int i = 0; i < N; ++i) {
//		for (int j = i; j < N; ++j) {
//			if (pNum[i] > pNum[j]) {
//				func_swap(pNum[i], pNum[j]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int* pNum, N;
//	scanf("%d", &N);
//	pNum = (int*)malloc(sizeof(int) * N);
//
//	srand((unsigned int)time(NULL));
//
//	printf("랜덤으로 입력받은수 출력\n");
//	for (int i = 0; i < N; i++) {
//		*(pNum + i) = rand() % N + 1;
//		printf("%d ", pNum[i]);
//	}
//	func_sort(pNum, N);
//	printf("\n오름차순 정렬된 수 출력\n");
//	for (int i = 0; i < N; i++) {
//		printf("%d ", pNum[i]);
//		if (i % 10 == 9) printf("\n");
//	}
//	free(pNum);
//	return 0;
//}


//심화_33p_문제3
//위 예제코드에 struct를 사용하여 바꿔보자.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct IntArray {
	int* pNum;
	int N;
};
void func_swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void func_sort(IntArray *arr)
{
	for (int i = 0; i < arr->N; ++i) {
		for (int j = i; j < arr->N; ++j) {
			if (arr->pNum[i] > arr->pNum[j]) {
				func_swap(arr->pNum[i], arr->pNum[j]);
			}
		}
	}
}

int main()
{
	IntArray arr;		//본 내용은 그대로 사용해야된다.
	scanf("%d", &arr.N);
	arr.pNum = (int*)malloc(sizeof(int) * arr.N);

	srand((unsigned int)time(NULL));

	printf("랜덤으로 입력받은수 출력\n");
	for (int i = 0; i < arr.N; i++) {
		*(arr.pNum + i) = rand() % arr.N + 1;
		printf("%d ", arr.pNum[i]);
	}
	func_sort(&arr);		//호출부를 포인터로 사용.
	printf("\n오름차순 정렬된 수 출력\n");
	for (int i = 0; i < arr.N; i++) {
		printf("%d ", arr.pNum[i]);
		if (i % 10 == 9) printf("\n");
	}
	free(arr.pNum);
	return 0;
}