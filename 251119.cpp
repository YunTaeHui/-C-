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




//23p
//#include <stdio.h>
//int main()
//{
//    int* numptr;
//    int num1 = 10;
//    int num2 = 20;
//
//    numptr = &num1;
//    printf("%d\n", *numptr);
//    numptr = &num2;
//    printf("%d\n", *numptr);
//
//    return 0;
//}


//24p
//#include <stdio.h>
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numptrA;
//	void* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA - 1));
//	printf("%d\n", *((int*)ptr + 4));
//	return 0;
//}


//24p_문제1
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int* ptr;
//
//	ptr = arr;
//	ptr = ptr + 2;
//	printf("%d\n", *ptr);
//
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
//	int arr[101] = { };
//	int* ptr;
//
//	ptr = &arr[98];
//
//	printf("%p\n", (void*)ptr);
//
//	return 0;
//}


//심화_26p_문제1-6
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
//
//	ptr = &arr[99];
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}


//심화_26p_문제2
#include <stdio.h>
int main()
{
	int i;
	int arr[100];
	int* ptr;

	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	ptr = &arr[50];
	while (*ptr != 50)
	{
		printf("%d\n", *ptr);
		ptr++;
		if (ptr == &arr[100])
		{
			ptr = &arr[0];
		}
	}
	return 0;
}


//29p_문제1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char ch;
//	char* pch;
//
//	printf("문자열을 입력하세요: ");
//	gets_s(buff, sizeof(buff));
//
//	while (1)
//	{
//		printf("문자를 입력하세요(0 입력시 종료): ");
//		scanf(" %c", &ch);
//
//		if (ch == '0')
//		{
//			printf("프로그램을 종료합니다.");
//			break;
//		}
//		pch = strchr(buff, ch);
//
//		if (pch == NULL)
//		{
//			printf("'%c'는 없는 문자입니다.", ch);
//		}
//		else
//		{
//			while (pch != NULL)
//			{
//				printf("'%c'는 %d 번째에 있는 문자입니다.\n", ch, pch - buff + 1);
//				pch = strchr(pch + 1, ch);
//			}
//		}
//	}
//	return 0;
//}