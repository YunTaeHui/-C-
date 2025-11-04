//심화_13p_문제1
//#include <stdio.h>
//int minus(int n)
//{
//	if (n <= 1) return 1;
//	return minus(n - 1) + n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}


//#include <stdio.h>
//struct BYTE
//{
//	char a;
//	char b;
//};
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}


//#include <stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//void main()
//{
//	struct student s = { 1,(char*)"이샘", 90.5 };
//	printf("아이디: %d\n", s.id);
//	printf("이름: %s\n", s.name);
//	printf("백분율: %lf\n", s.aver);
//}


//#include <stdio.h>
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30 };
//	printf("화기명 : %s\n", M416.name);
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	printf("스코프유무 : %s\n", M416.scope ? "true":"false");
//	return 0;
//}


//#include <stdio.h>
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main() {
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기 : %d\n", sizedummy);
//	printf("vip정보 크기 : %d\n", sizevip);
//
//	return 0;
//}


//#include <stdio.h>
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//
//int main()
//{
//	struct VIP_PERSON lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 's' || ('A' <= lee_sam.grade && lee_sam.grade <= 'D'))
//			break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요.\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}


//심화 15p 문제1
//#include <stdio.h>
//struct dummy {
//	int data_0;
//	float data_1;
//};
//
//struct person {
//	short data_0;
//	short data_1;
//	float data_2;
//};
//int main() {
//	int sizedummy = sizeof(dummy);
//	int sizeperson = sizeof(person);
//	printf("sizedummy 크기 : %d\n", sizedummy);
//	printf("sizeperson 크기 : %d\n", sizeperson);
//
//	return 0;
//}


//심화 15p 문제2
//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main() {
//	struct __dummy__ d;
//	printf("data_0 을 입력하세요\n");
//	scanf("%d", &d.data_0);
//	printf("data_1 을 입력하세요\n");
//	scanf(" %c", &d.data_1);
//	printf("data_2 를 입력하세요\n");
//	scanf("%f", &d.data_2);
//
//	printf("구조체 출력 결과 → data_0 = %d, data_1 = %c, data_2 = %.2f\n", d.data_0, d.data_1, d.data_2);
//}


//#include <stdio.h>
//void main()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	printf("값 : %hd\n", pt1);
//}


//#include <stdio.h>
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("값 : %hd\n", pt);
//}


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


#include <stdio.h>
struct POINT { short x, y; };
//short getDefaultData();
void printData(short pt2);
short add5(short plus);

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
	printf("값 : %hd %hd\n", pt2.x, pt2.y);
}
short add5(short plus)
{
	plus += 5;
	return plus;
}