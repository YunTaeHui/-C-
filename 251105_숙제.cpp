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
#include <stdio.h>
struct POINT { short x, y; };
POINT getDefaultData();
void printData(POINT pt2);
POINT add5(POINT plus);

void main()
{
	POINT pt;
	pt = getDefaultData();
	printData(pt);

	pt = add5(pt);
	printData(pt);
}
POINT getDefaultData()
{
	POINT pt1;
	printf("x, y >> ");
	scanf("%hd", &pt1.x);
	scanf("%hd", &pt1.y);
	return pt1;
}
void printData(POINT pt2)
{
	printf("값 : %hd\n", pt2.x);
	printf("값 : %hd\n", pt2.y);
}
POINT add5(POINT plus)
{
	plus.x += 5;
	plus.y += 5;
	return plus;
}