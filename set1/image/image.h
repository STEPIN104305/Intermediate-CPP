#include<iostream>

class Image{

int x,y,wd,ht;
public:
    Image();
    Image(int,int,int,int);
    Image(const Image&);
    int move(int,int);
    int scale(int);
    int resizing(int,int);
    void display();
};
