//CRect.h
//심화_45p_문제2
//#pragma once
//#include <iostream>
//#include "CPoint.h"
//using namespace std;
//
//class CRect
//{
//public:
//	CPoint startPT;
//	CPoint endPT;
//	int getWidth() {
//		return abs(endPT.x - startPT.x);
//	}
//	int getHeight() {
//		return abs(endPT.y - startPT.y);
//	}
//	
//};


//심화_45p_문제3
//#pragma once
//#include <iostream>
//#include "CPoint.h"
//using namespace std;
//
//class CRect
//{
//public:
//	CPoint startPT;
//	CPoint endPT;
//
//	void setLocation(CPoint pt, CPoint pt2) {
//		startPT = pt;
//		endPT = pt2;
//	}
//	int getWidth() {
//		return abs(endPT.x - startPT.x);
//	}
//	int getHeight() {
//		return abs(endPT.y - startPT.y);
//	}
//};


//심화_45p_문제4
//#pragma once
//#include <iostream>
//#include "CPoint.h"
//using namespace std;
//
//class CRect
//{
//public:
//	CPoint startPT;
//	CPoint endPT;
//
//	void setLocation(CPoint pt, CPoint pt2) {
//		startPT = pt;
//		endPT = pt2;
//	}
//	int getWidth() {
//		return abs(endPT.x - startPT.x);
//	}
//	int getHeight() {
//		return abs(endPT.y - startPT.y);
//	}
//	int getArea() {
//		return getWidth() * getHeight();
//	}
//};


//심화_45p_문제5
//#pragma once
//#include "CPoint.h"
//
//class CRect
//{
//public:
//	CPoint startPT;
//	CPoint endPT;
//
//	void setLocation(CPoint pt, CPoint pt2);
//	int getWidth();
//	int getHeight();
//	int getArea();
//};


//심화_45p_문제6
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

};