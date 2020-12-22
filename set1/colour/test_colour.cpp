#include<gtest/gtest.h>
#include"colour.h"

namespace{

TEST(Colour,ColourAllTests)
{
    Colour a1;
    a1.display();
    Colour invert=a1.invert();
    invert.display();
    Colour a2(129);
    a2.display();
    Colour a4(10,20,30);
    a4.display();
    Colour a5(RED);
    a5.display();

}

}
