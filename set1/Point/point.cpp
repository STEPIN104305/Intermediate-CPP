#include "point.h"
Point::Point():m_x(0),m_y(0)
{
}
Point::Point(int a,int b):m_x(a),m_y(b)
{
}
Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y)
{
}
/*Point::~Point()
{
}*/
double Point::distanceFromOrigin() const
{
    double a;
    a=sqrt((m_x*m_x)+(m_y*m_y));
    return a;
}
Quadrant Point::quadrant() const
{
   if(m_x>0 && m_y>0)
      return Q1;
   else if(m_x<0 && m_y>0)
      return Q2;
   else if(m_x<0 && m_y<0)
      return Q3;
   else
      return Q4; 
}
bool Point::isOrigin() const
{
    if(m_x==0 && m_y==0)
    {
      return true;
    }
    else
    {
      return false;
    }
}
bool Point::isOnXAxis() const
{
    if(m_x!=0 && m_y==0)
    {
      return true;
    }
    else
    {
      return false;
    }
}
bool Point::isOnYAxis() const
{
    if(m_x==0 && m_y!=0)
    {
      return true;
    }
    else
    {
      return false;
    }
}
void Point::display() const
{
    std::cout<<"X-point"<<m_x<<"Y-point"<<m_y;
}
