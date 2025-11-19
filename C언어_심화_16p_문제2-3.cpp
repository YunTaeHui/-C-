//심화 16p 문제2-1
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt += 5;
//	printData(pt);
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}


//심화 16p 문제2-2
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//short add5(short plus);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add5(pt);
//	printData(pt);
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}
//short add5(short plus)
//{
//	plus += 5;
//	return plus;
//}


//심화 16p 문제2-3
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