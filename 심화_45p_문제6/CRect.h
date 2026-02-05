//심화_45p_문제2
//클래스 CRect를 만들어보자. 그중에서 가로의 길이를 구하는 getWidth() 함수와
//세로의 길이를 구하는 getHeight() 함수를 클래스 내부에 만들어보자.
//#pragma once
//#include <iostream>
//#include "CPoint.h"
//
//class CRect
//{
//public:
//	CPoint startPT;
//	CPoint endPT;
//
//	int getWidth() {
//		return abs(endPT.x - startPT.x);
//	}
//	int getHeight() {
//		return abs(endPT.y - startPT.y);
//	}
//};


//심화_45p_문제3
//클래스 CRect에서 시작점과 끝점의 위치를 입력하는 setLocation(CPoint pt, CPoint pt2)
//함수를 만들어보자.
//#pragma once
//#include <iostream>
//#include "CPoint.h"
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
//넓이를 구하는 함수 getArea()를 CRect 클래스에 추가해보자.
//#pragma once
//#include <iostream>
//#include "CPoint.h"
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
//클래스 CRect를 .h 파일과 .cpp 파일로 분리해보자.
//#pragma once
//#include <iostream>
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
//CRect 클래스 안에 추가로 함수들을 구현해보자. (ex: bool ptInRect(CPoint pt))
//점이 사각형 안에 있는지 확인.
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
//	bool ptInRect(CPoint pt);
//};


//심화_45p_문제7
//CRect 클래스 안에 추가로 함수들을 구현해보자. (ex: bool intersectwith(CRect rect))
//사각형이 겹치는지 확인
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