#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	void setR(int r);
		int getR();
		void setCenter(Point center);
		Point getCenter();
private:
	int c_R;//半径
	//在类中可以让另一个类 作为本类中的成员
	Point m_Center;//圆心
};