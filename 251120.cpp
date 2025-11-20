//251120_숙제_백준(string를 배열로 변환)
//#include <stdio.h>
//int main() {
//    char word[5][16] = { };
//    int i, j;
//    char val = 0;
//    int total_num = 0;
//
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 16; j++)
//        {
//            scanf("%c", &val);
//            if (val == '\0' || val == '\n' || val == ' ') break;
//            word[i][j] = val;
//            total_num++;
//        }
//    }
//
//    int printed = 0;
//    for (i = 0; i < 16 && printed < total_num; i++)
//    {
//        for (j = 0; j < 5 && printed < total_num; j++)
//        {
//            if (word[j][i] != '\0')
//            {
//                printf("%c", word[j][i]);
//                printed++;
//            }
//        }
//    }
//    return 0;
//}


//예제모음20_string변환
//#include <stdio.h>
//int main()
//{
//    char ss[20];
//    char tt[20];
//    int i;
//    char val = 0;
//    int total_num = 0;
//
//    printf("문자열을 입력하세요: ");
//    for (i = 0; i < 20; i++)
//    {
//        scanf("%c", &val);
//        if (val == '\0' || val == '\n' || val == ' ') break;
//        ss[i] = val;
//        total_num++;
//    }
//    int printed = 0;
//    for (i = 0; i < 20 && printed < total_num; i++)
//    {
//        tt[i] = ss[total_num - (i + 1)];
//        printf("%c", tt[i]);
//        printed++;   
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int b = 100;
//	int* pB = &b;
//	
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte \n", sizeof(pA));
//	printf("pB의 크기 : %d byte \n", sizeof(pB));
//	printf("pC의 크기 : %d byte \n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte \n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte \n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte \n", sizeof(*pC));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d 입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}


//#include <stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//
//	printf("%d\n", *((int*)p+1));
//
//	return 0;
//}


//#include <stdio.h>
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
//	printf("%d\n", *(numptrA - 1));
//	printf("%d\n", *((int*)ptr + 4));
//
//	return 0;
//}


//심화_24p_문제1
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10,20,30,40,50 };
//	int* ptr;
//	ptr = arr;
//
//	ptr += 2;
//	printf("%d", *ptr);
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
//	*pt++ += 20;
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a'; str[23] = 'b'; str[25] = 'c';
//	printf("%s\n\n", ptr);
//}


//심화_26p_문제1-1
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i + 1);
//	}
//	return 0;
//}


//심화_26p_문제1-2
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i + 1);
//	}
//	for (i = 100; i > 0; i--)
//	{
//		printf("%d\n", i);
//	}
//}


//심화_26p_문제1-3
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = { };
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
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
//	int i;
//	int arr[101] = { };
//
//	for (i = 100; i > 0; i--)
//	{
//		arr[i] = i;
//	}
//	for (i = 100; i > 0; i--)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//심화_26p_문제1-5
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = { };
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[99];
//	printf("%d", *ptr);
//
//	return 0;
//}


//심화_26p_문제1-6
#include <stdio.h>
int main()
{
	int i;
	int arr[101] = { };
	int* ptr;

	for (i = 100; i > 0; i--)
	{
		arr[i] = i;
	}
	ptr = &arr[100];
	for (i = 0; i < 100; i++)
	{
		printf("%3d ", *ptr);
		ptr--;
	}
}