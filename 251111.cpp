//심화_22p_문제2
//#include <stdio.h>
//
//void main()
//{
//	int aa[5][5];
//	int i, j;
//	int val = 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			aa[i][j] = val;
//			val++;
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++) {
//			printf("%3d", aa[i][j]);
//		}
//		printf("\n");
//	}
//}


//심화_22p_문제3
//#include <stdio.h>
//
//void main()
//{
//	int aa[5][5];
//	int i, j;
//	int val = 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			aa[i][j] = val;
//			val++;
//		}
//	}
//
//	for (i = 4; i >= 0; i--)
//	{
//		for (j = 4; j >= 0; j--) {
//			printf("%3d", aa[i][j]);
//		}
//		printf("\n");
//	}
//}


//심화_22p_문제4
//#include <stdio.h>
//
//void main()
//{
//	int aa[5][5];
//	int bb[25];
//	int i, j;
//	int val = 1;
//	int val_2 = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			aa[i][j] = val;
//			val++;
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			bb[val_2] = aa[i][j];
//			val_2++;
//		}
//	}
//
//	for (i = 0; i < 25; i++)
//	{
//		printf("%3d", bb[i]);
//	}
//	printf("\n");
//}


//심화_22p_문제4-1
//#include <stdio.h>
//
//int main()
//{
//	int i, num;
//	int line;
//
//	scanf("%d", &line);    
//
//	for (int x = 1; x <= line; x++)
//	{
//		scanf("%d", &num);
//
//		for (i = 1; i <= num; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//심화_22p_문제4-3
//#include <stdio.h>
//
//int main()
//{
//    int line, num;
//    int i, j;
//    int max = 0;                // 가장 큰 별 개수 (행 수)
//    int arr[10][10] = { };
//
//    scanf("%d", &line);
//    for (i = 0; i < line; i++)
//    {
//        scanf("%d", &num);
//        if (num > max)
//            max = num;
//        for (j = 0; j < num; j++)
//        {
//            arr[i][j] = 1;
//        }
//    }
//    for (i = 0; i < max; i++)
//    {
//        for (j = 0; j < line; j++)
//        {
//            if (arr[j][i] == 1)
//                printf("*");
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//심화_22p_문제4-5
//#include <stdio.h>
//
//int main(void)
//{
//    int n = 5;
//    int arr[5][5] = { };
//    int top = 0, bottom = n - 1;
//    int left = 0, right = n - 1;
//    int val = 1;
//    int i, j;
//
//    while (left <= right && top <= bottom)
//    {
//        // 1. 위쪽 줄: 왼 -> 오
//        for (j = left; j <= right; j++)
//            arr[top][j] = val++;
//        top++;
//
//        // 2. 오른쪽 줄: 위 -> 아래
//        for (i = top; i <= bottom; i++)
//            arr[i][right] = val++;
//        right--;
//
//        // 3. 아래쪽 줄: 오 -> 왼 (아직 남아있을 때만)
//        if (top <= bottom)
//        {
//            for (j = right; j >= left; j--)
//                arr[bottom][j] = val++;
//            bottom--;
//        }
//
//        // 4. 왼쪽 줄: 아래 -> 위 (아직 남아있을 때만)
//        if (left <= right)
//        {
//            for (i = bottom; i >= top; i--)
//                arr[i][left] = val++;
//            left++;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("%3d", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//
//void main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//}


//#include <stdio.h>
//void main() {
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}


//#include <stdio.h>
//
//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d 입니다.\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//}


//#include <stdio.h>
//
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}


//#include <stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA-1));		//numptrA사용하여 22출력
//	printf("%d\n", *(((int*)ptr) + 4));	//ptr 사용하여 55 출력
//
//	return 0;
//}


//심화_24p_문제1
//#include <stdio.h>
//
//int main(void)
//{
//    int arr[5] = { 10, 20, 30, 40, 50 }; // 임의의 값으로 초기화
//    int* ptr;
//
//    ptr = arr;        // arr[0]의 주소값
//    ptr = ptr + 2;    // 가운데 요소(인덱스 2)로 이동
//
//    printf("%d\n", *ptr);  // 가운데 요소 값 출력 (30)
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p++);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d", *p++);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//
//	pt--;
//	*pt+++= 20;
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//}


//#include <stdio.h>
//void main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';	str[23] = 'b';	str[25] = 'c';
//	printf("%s\n\n", ptr);
//}


//심화_26p_문제1-1
//#include <stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//		printf("%d\n", i);
//}


//심화_26p_문제1-2
//#include <stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//		printf("%d\n", i);
//	for (i = 100; i > 0; i--)
//		printf("%d\n", i);
//}


//심화_26p_문제1-3
//#include <stdio.h>
//int main()
//{
//	int arr[100];
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		arr[i - 1] = i;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//심화_26p_문제1-4
//#include <stdio.h>
//int main()
//{
//	int arr[100];
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 99; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//심화_26p_문제1-5
//#include <stdio.h>
//
//int main(void)
//{
//    int arr[100];
//    int* p;
//
//    p = &arr[98];   // 99번째 요소의 주소
//
//    printf("%p\n", (void*)p);  // 주소 출력 (옵션)
//
//    return 0;
//}


//심화_26p_문제1-6
//#include <stdio.h>
//
//int main(void)
//{
//    int arr[100];
//    int i;
//    int* p;
//
//    // 1부터 100까지 배열에 저장
//    for (i = 0; i < 100; i++)
//    {
//        arr[i] = i + 1;
//    }
//
//    // p를 마지막 요소(100 저장된 곳)로 이동
//    p = &arr[99];
//
//    // 포인터만 사용해서 100부터 1까지 출력
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d\n", *p);
//        p--;            // 이전 요소로 이동
//    }
//
//    return 0;
//}


//심화_26p_문제2