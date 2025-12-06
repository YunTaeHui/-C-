//문제1: 배열에 1에서 100까지 넣고 포인터만 사용하여 이 배열을 100부터 1까지 출력해보자.
//심화_26p_문제1-1
//for문을 이용하여 1부터 100까지 출력
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
//for문 두개를 이용하여 1부터 100까지, 100부터 1까지 출력
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
//배열에 1부터 100까지 넣기 (1)활용
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
//배열을 이용하여 100부터 1까지 출력 (2)활용
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
//배열의 99번째의 주소를 포인터에 입력
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
//포인터만 사용하여 100부터 1까지 출력 (4)활용.
//단, 출력하는 루프에서는 배열을 사용하지 않는다.
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100] = {};
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	ptr = &arr[99];
//	for (i = 0; i < 100; i++)
//	{
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//	return 0;
//}


//심화_26p_문제2
//배열에 1에서 100까지 넣고 포인터를 이용하여 이 배열을 51부터 100, 100이 넘어가면
//1부터 49까지 출력한 후, 50이 되면 출력하지 않고 종료하는 프로그램을 작성해보자.
#include <stdio.h>
int main()
{
	int arr[100] = {};
	int i;
	int* ptr;

	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	ptr = &arr[50];
	for (; *ptr != 50; ptr++)
	{
		printf("%3d ", *ptr);
		if (*ptr == 100)
			ptr -= 100;
	}
	return 0;
}


//심화_26p_문제2(방법2)
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[100];
//	int* ptr;
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	ptr = &arr[50];
//
//	//while (*ptr != 50)
//	while (ptr != &arr[49])
//	{
//		printf("%3d ", *ptr);
//		ptr++;
//		if (ptr == &arr[100])
//		{
//			ptr = &arr[0];
//		}
//	}
//	return 0;
//}