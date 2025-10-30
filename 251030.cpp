//#include <stdio.h>
//
//int minus(int n)
//{
//	if (n <= 1)
//		return -3;
//	return minus(n - 1) - 2;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

//#include <stdio.h>
//
//void printNumber(int n)
//{
//	if (n <= 0)
//		return;
//	printf("%d", n);
//	printNumber(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//	return 0;
//}

//#include <stdio.h>
//
//int fibonacci(int n)
//{
//	printf("%d", n);
//	if (n <= 2)
//		return 1;
//	printf("%d\n", n);
//	return fibonacci(n - 1) +fibonacci(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);	//5 권장
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//
//}

//심화_13p_문제1
#include <stdio.h>

int hap(int n)
{
	if (n <= 1)
		return 1;
	return hap(n-1) + 
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("\n%d\n", hap(n));
	return 0;
}