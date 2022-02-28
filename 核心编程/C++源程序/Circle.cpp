#include "Circle.h"

void Circle::setR(int r)
{
	c_R = r;
}
int Circle::getR()
{
	return c_R;
}
void Circle::setCenter(Point center)
{
	m_Center = center;
}
Point Circle::getCenter()
{
	return m_Center;
}