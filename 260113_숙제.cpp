//260112.cpp
//심화_45p_문제7
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


//CPoint.h
//심화_45p_문제1~
#pragma once
class CPoint
{
public:
	short x;
	short y;
};


//CRect.h
//심화_45p_문제7
#pragma once
#include "CPoint.h"

class CRect
{
public:
	CPoint startPT;
	CPoint endPT;

	void setLocation(CPoint pt, CPoint pt2);
	int getWidth();
	int getHeight();
	int getArea();
	bool ptInRect(CPoint pt);
	bool intersectWith(CRect rect);
};


//CRect.cpp
//심화_45p_문제7
#pragma once
#include <iostream>
#include "CRect.h"

void CRect::setLocation(CPoint pt, CPoint pt2) {
	startPT = pt;
	endPT = pt2;
}
int CRect::getWidth() {
	return abs(endPT.x - startPT.x);
}
int CRect::getHeight() {
	return abs(endPT.y - startPT.y);
}
int CRect::getArea() {
	return getWidth() * getHeight();
}
bool CRect::ptInRect(CPoint pt) {
	int left = (startPT.x < endPT.x) ? startPT.x : endPT.x;
	int right = (startPT.x > endPT.x) ? startPT.x : endPT.x;
	int top = (startPT.y < endPT.y) ? startPT.y : endPT.y;
	int bottom = (startPT.y > endPT.y) ? startPT.y : endPT.y;

	return (pt.x >= left && pt.x <= right &&
		pt.y >= top && pt.y <= bottom);
}
bool CRect::intersectWith(CRect rect) {
	int Aleft = (startPT.x < endPT.x) ? startPT.x : endPT.x;
	int Aright = (startPT.x > endPT.x) ? startPT.x : endPT.x;
	int Atop = (startPT.y < endPT.y) ? startPT.y : endPT.y;
	int Abottom = (startPT.y > endPT.y) ? startPT.y : endPT.y;

	int Bleft = (rect.startPT.x < rect.endPT.x) ? rect.startPT.x : rect.endPT.x;
	int Bright = (rect.startPT.x > rect.endPT.x) ? rect.startPT.x : rect.endPT.x;
	int Btop = (rect.startPT.y < rect.endPT.y) ? rect.startPT.y : rect.endPT.y;
	int Bbottom = (rect.startPT.y > rect.endPT.y) ? rect.startPT.y : rect.endPT.y;

	if (Aright < Bleft) return false;
	if (Aleft > Bright) return false;
	if (Abottom < Btop) return false;
	if (Atop > Bbottom) return false;

	return true;
}