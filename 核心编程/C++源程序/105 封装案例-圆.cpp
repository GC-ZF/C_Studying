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
////	int c_R;//�뾶
////	//�����п�������һ���� ��Ϊ�����еĳ�Ա
////	Point m_Center;//Բ��
////};
////�жϵ��Բ
//void isInCircle(Circle &c, Point &p)
//{
//	//��������֮�����
//	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//	//����뾶��ƽ��
//	int rDistance = c.getR()*c.getR();
//	//�жϹ�ϵ
//	if (distance == rDistance)
//		cout << "����Բ��" << endl;
//	else if (distance >= rDistance)
//		cout << "����Բ��" << endl;
//	else
//		cout << "����Բ��" << endl;
//}
//int main()
//{
//	//����Բ
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	//�жϹ�ϵ
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}