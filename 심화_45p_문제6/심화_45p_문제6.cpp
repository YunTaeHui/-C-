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
//CPoint 클래스를 CPoint.h 파일으로 옮겨보자.
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
//클래스 CRect를 만들어보자. 그중에서 가로의 길이를 구하는 getWidth() 함수와
//세로의 길이를 구하는 getHeight() 함수를 클래스 내부에 만들어보자.
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
//클래스 CRect에서 시작점과 끝점의 위치를 입력하는 setLocation(CPoint pt, CPoint pt2)
//함수를 만들어보자.
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
//넓이를 구하는 함수 getArea()를 CRect 클래스에 추가해보자.
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
//CRect 클래스 안에 추가로 함수들을 구현해보자. (ex: bool ptInRect(CPoint pt))
//점이 사각형 안에 있는지 확인.
//#include <iostream>
//#include "CRect.h"
//using namespace std;
//
//int main(void)
//{
//	CPoint AstartPT, AendPT;
//	CPoint BstartPT, BendPT;
//	CPoint testPT;
//
//	cout << "[사각형 A] 시작 좌표입력 : ";
//	cin >> AstartPT.x >> AstartPT.y;
//	cout << "[사각형 A] 끝 좌표입력 : ";
//	cin >> AendPT.x >> AendPT.y;
//
//	cout << "[사각형 B] 시작 좌표입력 : ";
//	cin >> BstartPT.x >> BstartPT.y;
//	cout << "[사각형 B] 끝 좌표입력 : ";
//	cin >> BendPT.x >> BendPT.y;
//
//	CRect rcA, rcB;
//	rcA.setLocation(AstartPT, AendPT);
//	rcB.setLocation(BstartPT, BendPT);
//
//	cout << "\n[사각형 A] 가로길이 : " << rcA.getWidth() << endl;
//	cout << "[사각형 A] 세로길이 : " << rcA.getHeight() << endl;
//	cout << "[사각형 A] 넓이 : " << rcA.getArea() << endl;
//
//	cout << "\n[사각형 B] 가로길이 : " << rcB.getWidth() << endl;
//	cout << "[사각형 B] 세로길이 : " << rcB.getHeight() << endl;
//	cout << "[사각형 B] 넓이 : " << rcB.getArea() << endl;
//
//	cout << "\n판별할 좌표 입력 : ";
//	cin >> testPT.x >> testPT.y;
//
//	cout << "[사각형 A]내부/경계 포함? : "
//		<< (rcA.ptInRect(testPT) ? "YES" : "NO") << "\n";
//	cout << "[사각형 B]내부/경계 포함? : "
//		<< (rcB.ptInRect(testPT) ? "YES" : "NO") << "\n";
//	return 0;
//}


//심화_45p_문제7
//CRect 클래스 안에 추가로 함수들을 구현해보자. (ex: bool intersectwith(CRect rect))
//사각형이 겹치는지 확인
#include <iostream>
#include "CRect.h"
using namespace std;

int main(void)
{
	CPoint AstartPT, AendPT;
	CPoint BstartPT, BendPT;
	CPoint testPT;

	cout << "\n[사각형 A] 시작 좌표입력 : ";
	cin >> AstartPT.x >> AstartPT.y;
	cout << "[사각형 A] 끝 좌표입력 : ";
	cin >> AendPT.x >> AendPT.y;

	cout << "\n[사각형 B] 시작 좌표입력 : ";
	cin >> BstartPT.x >> BstartPT.y;
	cout << "[사각형 B] 끝 좌표입력 : ";
	cin >> BendPT.x >> BendPT.y;

	CRect rcA, rcB;
	rcA.setLocation(AstartPT, AendPT);
	rcB.setLocation(BstartPT, BendPT);

	cout << "\n[사각형 A] 가로길이 : " << rcA.getWidth() << endl;
	cout << "[사각형 A] 세로길이 : " << rcA.getHeight() << endl;
	cout << "[사각형 A] 넓이 : " << rcA.getArea() << endl;

	cout << "\n[사각형 B] 가로길이 : " << rcB.getWidth() << endl;
	cout << "[사각형 B] 세로길이 : " << rcB.getHeight() << endl;
	cout << "[사각형 B] 넓이 : " << rcB.getArea() << endl;

	cout << "\n[사각형 A와 B] 겹침 여부 : "
		<< (rcA.intersectWith(rcB) ? "YES" : "NO") << "\n";

	cout << "\n판별할 좌표 입력 : ";
	cin >> testPT.x >> testPT.y;

	cout << "[사각형 A]내부/경계 포함? : "
		<< (rcA.ptInRect(testPT) ? "YES" : "NO") << "\n";

	cout << "[사각형 B]내부/경계 포함? : "
		<< (rcB.ptInRect(testPT) ? "YES" : "NO") << "\n";

	return 0;
}