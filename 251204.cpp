//401p_응용12-3
//#include <stdio.h>
//#include <malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" 입력할 개수는 ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d 번째 숫자 : ", i + 1);
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < cnt; i++)
//		hap = hap + *(p + i);
//
//	printf("입력 숫자 합 ==> %d\n", hap);
//
//	free(p);
//}


//403p_기본12-4
//#include <stdio.h>
//#include <malloc.h>
//
//void main()
//{
//	int* p, * s;
//	int i, j;
//
//	printf("malloc() 함수 사용\n");
//	p = (int*)malloc(sizeof(int) * 3);
//
//	for (i = 0; i < 3; i++)
//		printf("할당된 곳의 초깃값 p[%d] ==> %d\n", i, p[i]);
//
//	free(p);
//
//	printf("\ncalloc() 함수 사용\n");
//	s = (int*)calloc(sizeof(int), 3);
//
//	for (j = 0; j < 3; j++)
//		printf("할당된 곳의 초깃값 s[%d] ==> %d\n", j, s[j]);
//
//	free(s);
//}


//405p_응용12-5
//#include <stdio.h>
//#include <malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt = 0;
//	int data;
//
//	p = (int*)malloc(sizeof(int) * 1);
//	printf(" 1 번째 숫자: ");
//	scanf("%d", &p[0]);
//	cnt++;
//
//	for (i = 2;; i++)
//	{
//		printf(" %d 번째 숫자: ", i);
//		scanf("%d", &data);
//
//		if (data != 0)
//			p = (int*)realloc(p, sizeof(int) * i);
//		else
//			break;
//
//		p[i - 1] = data;
//		cnt++;
//	}
//	for (i = 0; i < cnt; i++)
//		hap = hap + p[i];
//
//	printf("입력 숫자 합 ==> %d\n", hap);
//
//	free(p);
//}


//심화_32p_문제2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int n = 10;
//	int* arr;
//
//	arr = new int[n];
//
//	srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 10 + 1;
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	delete arr;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void func_sort(int* pNum, int N);
//void func_swap(int &a, int &b);
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
//void func_sort(int* pNum, int N)
//{
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (pNum[i] > pNum[j]) {
//				func_swap(pNum[i], pNum[j]);
//			}
//		}
//	}
//}
//void func_swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}


//심화_33p_문제1
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
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//struct IntArray {
//	int* pNum;
//	int N;
//};
//void func_swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void func_sort(IntArray *arr)
//{
//	for (int i = 0; i < arr->N; ++i) {
//		for (int j = i; j < arr->N; ++j) {
//			if (arr->pNum[i] > arr->pNum[j]) {
//				func_swap(arr->pNum[i], arr->pNum[j]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	IntArray arr;		//본 내용은 그대로 사용해야된다.
//	scanf("%d", &arr.N);
//	arr.pNum = (int*)malloc(sizeof(int) * arr.N);
//
//	srand((unsigned int)time(NULL));
//
//	printf("랜덤으로 입력받은수 출력\n");
//	for (int i = 0; i < arr.N; i++) {
//		*(arr.pNum + i) = rand() % arr.N + 1;
//		printf("%d ", arr.pNum[i]);
//	}
//	func_sort(&arr);		//호출부를 포인터로 사용.
//	printf("\n오름차순 정렬된 수 출력\n");
//	for (int i = 0; i < arr.N; i++) {
//		printf("%d ", arr.pNum[i]);
//		if (i % 10 == 9) printf("\n");
//	}
//	free(arr.pNum);
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//}


//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//}


//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myfile.txt", "r");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//}


//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n) {
//		printf("파일에 쓰고 싶은 말을 입력하세요: ");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용 [% - 10s]\n", n, name);
//	}
//	fclose(pFile);
//}


#include <stdio.h>
void main()
{
	FILE* readfp, * writefp;
	char buff[1024];

	readfp = fopen("myfile.txt", "r");
	writefp = fopen("outfile.txt", "w");
}