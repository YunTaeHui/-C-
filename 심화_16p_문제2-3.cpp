//심화 16p 문제2-1
//main함수에서 pt의 값이 출력된 이후, 5 증가시키고, 다시 출력하는 프로그램을 만들자.
//#include <stdio.h>
//
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
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt += 5;
//	printData(pt);
//
//	return 0;
//}


//심화 16p 문제2-2
//5증가시키는 코드를 함수로 만들어보자.
//#include <stdio.h>
//
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
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add5(pt);
//	printData(pt);
//
//	return 0;
//}


//심화 16p 문제2-3
//short 타입을 struct POINT{ short x,y; }; 타입으로 변경시키기
#include <stdio.h>
struct POINT {
	short x, y;
};
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
int main()
{
	POINT pt;
	pt = getDefaultData();
	printData(pt);

	pt = add5(pt);
	printData(pt);

	return 0;
}
