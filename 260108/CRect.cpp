//CRect.cpp
//심화_45p_문제5
//#pragma once
//#include <iostream>
//#include "CRect.h"
//using namespace std;
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
#pragma once
#include <iostream>
#include "CRect.h"
using namespace std;

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
	if()
}
