//41p_문제2
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	for (space = 1; space <= 3; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (star = 1; star <= 7; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
// 
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 2;
//	int y = 1;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	for (space = 1; space <= x; space++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= y; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x -= 1;
//	y += 2;
//
//	return 0;
//}



#include <stdio.h>

int main()
{
	int space;
	int star;

	int x = 2;
	int y = 1;
	
	for (; x <= 2;)
	{
		for (space = 1; space <= x; space++)
		{
			printf(" ");
			for (star = 1; star <= y; star++)
			{
				printf("*");
			}
		}
		x -= 1;
		y += 2;
		printf("\n");
	}
	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//
//	for (int x = 2, int y = 1; x <= 2, y <= 3; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int line = 2;
//
//	for (int x = 2, int y = 1; x <= line, y <= 3; x--, y += 2)
//	{
//		for (int space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (int star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x;
//	int y;
//
//	int line = 3;
//	/*printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);*/
//
//	for (x = 2, y = 1; x <= line; x--, y += 2)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int z = 0;
//
//	for (; z <= 3;)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//		z += 1;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int z = 0;
//
//	for (int z = 0; z <= 3; z++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int line = 3;
//	
//	for (int z = 0; z <= line; z++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}

//41p_문제2 최종
//#include <stdio.h>
//
//int main()
//{
//	int space;
//	int star;
//	int x = 3;
//	int y = 1;
//	int line = 3;
//
//	printf("원하는 줄 수를 입력하세요 ");
//	scanf("%d", &line);
//	if (line > 4)
//	{
//		x = x + (line - 4);
//	}
//	for (int row = 1; row <= line; row++)
//	{
//		for (space = 1; space <= x; space++)
//		{
//			printf(" ");
//		}
//		for (star = 1; star <= y; star++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x -= 1;
//		y += 2;
//	}
//	return 0;
//}

//41p_문제3
//#include <stdio.h>
//
//int main()
//{
//	for (int space = 1; space <= 2; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 1; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int space = 1; space <= 1; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}



//41p_문제3
//#include <stdio.h>
//
//int main()
//{
//	int y = 2;
//	int x = 1;
//	int row = 1;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	x += 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//	x += 2;
//
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	x -= 2;
//
//	for (int space = 1; space <= y; space++)
//	{
//		printf(" ");
//	}
//	for (int star = 1; star <= x; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}