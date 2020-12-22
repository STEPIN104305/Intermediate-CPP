#include"image.h"
using namespace std;

Image::Image():x(0),y(0),wd(0),ht(0){}
Image::Image(int a,int b,int c,int d):x{a},y{b},wd{c},ht{d}{}
Image::Image(const Image& c):x(c.x),y(c.y),wd(c.wd),ht(c.ht){}

int Image::move(int a,int b)
{
return x+a,y+b;
}

int Image::scale(int a)
{
return wd*a,ht*a;
}

int Image::resizing(int a,int b){
wd=a;
ht=b;
return wd,ht;
}

void Image::display()
{
    cout<<"The coordinates of the image is "<<x<<","<<y<<" The image size is "<<wd<<"*"<<ht<<endl;
}



