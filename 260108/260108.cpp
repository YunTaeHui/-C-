//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << (12 ^ 3 * 5 + 1 * 2 % 2 - 7 ^ 8) << endl;
//
//	return 0;
//}


//260108.cpp
//심화_45p_예제
//#include <iostream>
//using namespace std;
//
//class CPoint
//{
//public:
//	short x;
//	short y;
//};
//
//int main(void)
//{
//	CPoint startPT, endPT;
//	cout << "시작 좌표입력 : ";
//	cin >> startPT.x >> startPT.y;
//
//	cout << "끝 좌표입력 : ";
//	cin >> endPT.x >> endPT.y;
//
//	int width = abs(endPT.x - startPT.x);
//	int height = abs(endPT.y - startPT.y);
//
//	cout << "가로길이 : " << width << endl;
//	cout << "세로길이 : " << height << endl;
//
//	return 0;
//}


//심화_45p_문제1
//#include <iostream>
//#include "CPoint.h"
//using namespace std;
//
//int main(void)
//{
//	CPoint startPT, endPT;
//	cout << "시작 좌표입력 : ";
//	cin >> startPT.x >> startPT.y;
//
//	cout << "끝 좌표입력 : ";
//	cin >> endPT.x >> endPT.y;
//
//	int width = abs(endPT.x - startPT.x);
//	int height = abs(endPT.y - startPT.y);
//
//	cout << "가로길이 : " << width << endl;
//	cout << "세로길이 : " << height << endl;
//
//	return 0;
//}


//심화_45p_문제2
//#include <iostream>
//#include "CRect.h"
//using namespace std;
//
//int main(void)
//{
//	CRect rc;
//	cout << "시작 좌표입력 : ";
//	cin >> rc.startPT.x >> rc.startPT.y;
//
//	cout << "끝 좌표입력 : ";
//	cin >> rc.endPT.x >> rc.endPT.y;
//
//	cout << "가로길이 : " << rc.getWidth() << endl;
//	cout << "세로길이 : " << rc.getHeight() << endl;
//
//	return 0;
//}


//심화_45p_문제3
//#include <iostream>
//#include "CRect.h"
//using namespace std;
//
//int main(void)
//{
//	CPoint startPT, endPT;
//	cout << "시작 좌표입력 : ";
//	cin >> startPT.x >> startPT.y;
//
//	cout << "끝 좌표입력 : ";
//	cin >> endPT.x >> endPT.y;
//
//	CRect rc;
//	rc.setLocation(startPT, endPT);
//	cout << "가로길이 : " << rc.getWidth() << endl;
//	cout << "세로길이 : " << rc.getHeight() << endl;
//
//	return 0;
//}


//심화_45p_문제4
//#include <iostream>
//#include "CRect.h"
//using namespace std;
//
//int main(void)
//{
//	CPoint startPT, endPT;
//	cout << "시작 좌표입력 : ";
//	cin >> startPT.x >> startPT.y;
//
//	cout << "끝 좌표입력 : ";
//	cin >> endPT.x >> endPT.y;
//
//	CRect rc;
//	rc.setLocation(startPT, endPT);
//	cout << "가로길이 : " << rc.getWidth() << endl;
//	cout << "세로길이 : " << rc.getHeight() << endl;
//	cout << "넓이 : " << rc.getArea() << endl;
//
//	return 0;
//}


//심화_45p_문제5
//#include <iostream>
//#include "CRect.h"
//using namespace std;
//
//int main(void)
//{
//	CPoint startPT, endPT;
//	cout << "시작 좌표입력 : ";
//	cin >> startPT.x >> startPT.y;
//
//	cout << "끝 좌표입력 : ";
//	cin >> endPT.x >> endPT.y;
//
//	CRect rc;
//	rc.setLocation(startPT, endPT);
//	cout << "가로길이 : " << rc.getWidth() << endl;
//	cout << "세로길이 : " << rc.getHeight() << endl;
//	cout << "넓이 : " << rc.getArea() << endl;
//
//	return 0;
//}


//심화_45p_문제6
#include <iostream>
#include "CRect.h"
using namespace std;

int main(void)
{
	CPoint AstartPT, AendPT;
	CPoint BstartPT, BendPT;
	CPoint CstartPT, CendPT;

	cout << "[사각형 A] 시작 좌표입력 : ";
	cin >> AstartPT.x >> AstartPT.y;
	cout << "[사각형 A] 끝 좌표입력 : ";
	cin >> AendPT.x >> AendPT.y;

	cout << "\n[사각형 B] 시작 좌표입력 : ";
	cin >> BstartPT.x >> BstartPT.y;
	cout << "[사각형 B] 끝 좌표입력 : ";
	cin >> BendPT.x >> BendPT.y;

	CRect rc, rc2;
	rc.setLocation(AstartPT, AendPT);
	rc2.setLocation(BstartPT, BendPT);

	cout << "\n[사각형 A] 가로길이 : " << rc.getWidth() << endl;
	cout << "[사각형 A] 세로길이 : " << rc.getHeight() << endl;
	cout << "[사각형 A] 넓이 : " << rc.getArea() << endl;

	cout << "\n[사각형 B] 가로길이 : " << rc2.getWidth() << endl;
	cout << "[사각형 B] 세로길이 : " << rc2.getHeight() << endl;
	cout << "[사각형 B] 넓이 : " << rc2.getArea() << endl;

	cout << "\n판별할 좌표 입력 : ";
	cin >> CstartPT.x >> CstartPT.y;
	int ptInRect;
	cout << "[사각형 A]내부에 좌표 존재 유무 : " << ptInRect << rc.ptInRect(AstartPT) << endl;

	return 0;
}