#ifndef __COLOUR_H
#define __COLOUR_H

#include<string>
#include<iostream>
enum colour_type{
RED=0,
BLUE=1,
GREEN=2,
WHITE=3,
GREY=4
};
class Colour {
    int m_r,m_g,m_b;
  public:
    Colour();
    Colour(int);
    Colour(colour_type);
    Colour (int,int,int);
    Colour invert();
    void display();
};
#endif

