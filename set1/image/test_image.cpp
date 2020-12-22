#include "image.h"
#include <gtest/gtest.h>

namespace {

TEST(Image,Move_Image) {
    Image a1(1,2,100,200);
    Image a2(a1);
    int q=10,w=20;
    EXPECT_EQ((11,22),a2.move(q,w));
}

TEST(Image,Scale_Image) {
    Image a1(1,2,100,200);
    Image a2(a1);
    int q=10,w=20;
    int a=2;
    EXPECT_EQ((11,22),a2.move(q,w));
    EXPECT_EQ((200,400),a2.scale(a));
}

TEST(Image,Resize_Image) {
    Image a1(1,2,100,200);
    Image a2(a1);
    int q=10,w=20;
    int a=200,b=600;
    EXPECT_EQ((11,22),a2.move(q,w));
    EXPECT_EQ((200,600),a2.resizing(a,b));
}

TEST(Image,Display) {
    Image a1(100,26,55,246);
    a1.display();
}
}
