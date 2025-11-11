//265p_8-5
//#include <stdio.h>
//
//void main()
//{
//	int aa[100], bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99 - i];
//	}
//	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
//}


//267p_8-6
//#include <stdio.h>
//
//void main()
//{
//	int aa[] = { 10,20,30,40,50 };
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("배열 aa[]의 요소의 개수는 %d 입니다.\n", count);
//}


//269p_8-7
//#include <stdio.h>
//
//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//	printf("문자열 배열 ss ==> %s \n", ss);
//}


//280p_8-14
//#include <stdio.h>
//
//void main()
//{
//	int aa[3][4];
//
//	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
//	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
//	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;
//
//	printf("aa[0][0]부터 aa[2][3]까지 출력\n");
//
//	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
//	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
//	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
//}


//281p_8-15
//#include <stdio.h>
//
//void main()
//{
//	int aa[3][4];
//	int i, k;
//
//	int val = 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			aa[i][k] = val;
//			val++;
//		}
//	}
//	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%3d", aa[i][k]);
//		}
//		printf("\n");
//	}
//}


//287p_예제모음22
//#include <stdio.h>
//
//void main()
//{
//	int gugu[9][9];
//	int i, k;
//
//	for (i = 0; i < 9; i++)
//		for (k = 0; k < 9; k++)
//			gugu[i][k] = (i + 1) * (k + 1);
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = 0; k < 9; k++)
//		{
//			printf("%d x %d = %2d ", k + 1, i + 1, gugu[i][k]);
//		}
//		printf("\n");
//	}
//}