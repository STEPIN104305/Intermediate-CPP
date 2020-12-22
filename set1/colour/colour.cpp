#include"colour.h"

Colour::Colour():m_r(0),m_g(0),m_b(0)
{
}
Colour::Colour(int r,int g,int b):m_r(r),m_g(g),m_b(b)
{
}
Colour::Colour(int a):m_r(a),m_g(a),m_b(a)
{
}

Colour::Colour(colour_type a)
{
 switch(a)
 {
 case RED:m_r=255;m_g=0;m_b=0;
          break;
 case BLUE:m_r=0;m_g=0;m_b=255;
          break;
 case GREEN:m_r=0;m_g=255;m_b=0;
          break;
 case GREY:m_r=128;m_g=128;m_b=128;
          break;
 case WHITE:m_r=255;m_g=255;m_b=255;
          break;
 }
}

Colour Colour::invert()
{
int red=255,green=255,blue=255;
red-=m_r;
green-=m_g;
blue-=m_b;
return Colour(red,blue,green);
}

void Colour::display()
{
std::cout<<"R-"<<m_r<<"G-"<<m_g<<"B-"<<m_b;
}


