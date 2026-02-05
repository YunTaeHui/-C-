//심화_45p_문제5
//클래스 CRect를 .h 파일과 .cpp 파일로 분리해보자.
//#pragma once
//#include <iostream>
//#include "CRect.h"
//
//void CRect::setLocation(CPoint pt, CPoint pt2) {
//	startPT = pt;
//	endPT = pt2;
//}
//int CRect::getWidth() {
//	return abs(endPT.x - startPT.x);
//}
//int CRect::getHeight() {
//	return abs(endPT.y - startPT.y);
//}
//int CRect::getArea() {
//	return getWidth() * getHeight();
//}


//심화_45p_문제6
//CRect 클래스 안에 추가로 함수들을 구현해보자. (ex: bool ptInRect(CPoint pt))
//점이 사각형 안에 있는지 확인.
//#pragma once
//#include <iostream>
//#include "CRect.h"
//
//void CRect::setLocation(CPoint pt, CPoint pt2) {
//	startPT = pt;
//	endPT = pt2;
//}
//int CRect::getWidth() {
//	return abs(endPT.x - startPT.x);
//}
//int CRect::getHeight() {
//	return abs(endPT.y - startPT.y);
//}
//int CRect::getArea() {
//	return getWidth() * getHeight();
//}
//bool CRect::ptInRect(CPoint pt) {
//	int left = (startPT.x < endPT.x) ? startPT.x : endPT.x;
//	int right = (startPT.x > endPT.x) ? startPT.x : endPT.x;
//	int top = (startPT.y < endPT.y) ? startPT.y : endPT.y;
//	int bottom = (startPT.y > endPT.y) ? startPT.y : endPT.y;
//
//	return (pt.x >= left && pt.x <= right &&
//		pt.y >= top && pt.y <= bottom);
//}


//심화_45p_문제7
//CRect 클래스 안에 추가로 함수들을 구현해보자. (ex: bool intersectwith(CRect rect))
//사각형이 겹치는지 확인
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