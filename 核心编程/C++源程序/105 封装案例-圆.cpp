//#include <iostream>
//using namespace std;
//#include "Circle.h"
//#include "point.h"
//
////class Point
////{
////public:
////	void setX(int x)
////	{
////		p_X = x;
////	}
////	void setY(int y)
////	{
////		p_Y = y;
////	}
////	int getX()
////	{
////		return p_X;
////	}
////	int getY()
////	{
////		return p_Y;
////	}
////private:
////	int p_X;
////	int p_Y;
////};
////class Circle
////{
////public:
////	void setR(int r)
////	{
////		c_R = r;
////	}
////	int getR()
////	{
////		return c_R;
////	}
////	void setCenter(Point center)
////	{
////		m_Center = center;
////	}
////	Point getCenter()
////	{
////		return m_Center;
////	}
////private:
////	int c_R;//半径
////	//在类中可以让另一个类 作为本类中的成员
////	Point m_Center;//圆心
////};
////判断点和圆
//void isInCircle(Circle &c, Point &p)
//{
//	//计算两点之间距离
//	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//	//计算半径的平方
//	int rDistance = c.getR()*c.getR();
//	//判断关系
//	if (distance == rDistance)
//		cout << "点在圆上" << endl;
//	else if (distance >= rDistance)
//		cout << "点在圆外" << endl;
//	else
//		cout << "点在圆内" << endl;
//}
//int main()
//{
//	//创建圆
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	//创建点
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	//判断关系
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}