//424p 13-1
//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//
//	struct bibim b1;
//
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf("b1.a ==> %d\n", b1.a);
//	printf("b1.b ==> %f\n", b1.b);
//	printf("b1.c ==> %c\n", b1.c);
//	printf("b1.d ==> %s\n", b1.d);
//}


//428p 13-3
//#include <stdio.h>
//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s;
//
//	printf("이름 : ");
//	scanf("%s", s.name, 9);
//
//	printf("국어 점수 : ");
//	scanf("%d", &s.kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n---- 구조체 활용 ----\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("국어 점수 ==> %d\n", s.kor);
//	printf("영어 점수 ==> %d\n", s.eng);
//	printf("평균 점수 ==> %5.1f\n", s.avg);
//}


//442p 13-8
//#include <stdio.h>
//
//void main()
//{
//	enum week { sun, mon, tue, wed, thu, fri, sat };;
//
//	enum week ww;
//
//	ww = sat;
//
//	if (ww == sun)
//		printf("오늘은 일요일입니다.\n");
//	else
//		printf("오늘은 일요일이 아닙니다.\n");
//}



//심화_15p_문제2-3
//#include <stdio.h>
//struct POINT { short x, y; };
//POINT getDefaultData();
//void printData(POINT pt2);
//POINT add5(POINT plus);
//
//void main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add5(pt);
//	printData(pt);
//}
//POINT getDefaultData()
//{
//	POINT pt1;
//	printf("x, y >> ");
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//void printData(POINT pt2)
//{
//	printf("값 : %hd\n", pt2.x);
//	printf("값 : %hd\n", pt2.y);
//}
//POINT add5(POINT plus)
//{
//	plus.x += 5;
//	plus.y += 5;
//	return plus;
//}


//#include <stdio.h>
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}


//#include <stdio.h>
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}


//#include <stdio.h>
//void main()
//{
//	char alpah[4] = { 'a','b','c','d' };
//	printf("%c%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}


//#include <stdio.h>
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는");
//	printf("1 번째 숫자는? %d\n", num[1]);
//}


//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d 번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//심화_18p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5];
//	int i;
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//	printf("\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", arr[i]);
//	}
//}


//심화_18p_문제2
//#include <stdio.h>
//
//int main()
//{
//	int arr[10];
//	int i, x;
//	int found = 1;
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	while (found) {
//		scanf("%d", &x);
//
//		for (i = 0; i < 10; i++) {
//			if (arr[i] == x) {
//				printf("exist\n");
//				found = 0;
//				break;
//			}
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}


//#include <stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}


//#include <stdio.h>
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n", num[1]);
//}


//심화_19p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 4,3,1,2 };
//	int temp;
//	temp = arr[0];
//	arr[0] = arr[2];
//	arr[2] = temp;
//
//	temp = arr[1];
//	arr[1] = arr[3];
//	arr[3] = temp;
//
//	temp = arr[2];
//	arr[2] = arr[3];
//	arr[3] = temp;
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//
//	return 0;
//}


//심화_19p_문제2
//#include <stdio.h>
//
//int main()
//{
//	int arr[4];
//	int temp;
//	int i, j;
//
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j < 4; j++)
//		{
//			if (arr[j] < arr[i]) {
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else max = two;
//	printf("max = %d \n", max);
//}


//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two) {
//		if (one > three) max = one;
//		else max = three;
//	}
//	else {
//		if (two > three) max = two;
//		else max = three;
//	}
//	printf("max = %d \n", max);
//}


//#include <stdio.h>
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//}


//심화_20p_문제1
//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int min = a[0];
//	int max = a[0];
//	int sum = a[0];
//	double avg = 0;
//
//	for (int i = 1; i < 5; i++) {
//		if (min > a[i])
//			min = a[i];
//		if (max < a[i])
//			max = a[i];
//		sum += a[i];
//	}
//	avg = (double)sum / 5.0;
//	
//	printf("min = %d\n", min);
//	printf("max = %d\n", max);
//	printf("sum = %d\n", sum);
//	printf("avg = %.2lf\n", avg);
//}


//심화_20p_문제2
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int cnt[7] = { };
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		cnt[arr[i]]++;
//	}
//
//	for (i = 1; i <= 6; i++)
//	{
//		printf("%d : %d\n", i, cnt[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {'1','2','3'},{'4','5','6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//#include <stdio.h>
//void main()
//{
//	int arr2d[5][4] = {
//		{662, 7, 4, 74 },
//		{8, 396, 299, 95 },
//		{66, 73, 86, 0 },
//		{116, 26, 586, 42 },
//		{84, 7, 41, 11 },
//	};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%5d", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int arr2d[3][3] = {
//		{2, 4, 6},
//		{8, 10, 12},
//		{14, 16, 18},
//	};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%5d", arr2d[j][i]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h>
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			printf( "%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}


#include <stdio.h>
int main()
{
	const int m = 6;
	const int n = 6;
	long data[m][n];
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (i == 1)
			{
				data[i][j] = j;
			}
			if (i == 1)
			{

			}
			data[i][j] = j;
		}
	}
	
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < m; j++) {
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}
	return 0;
}