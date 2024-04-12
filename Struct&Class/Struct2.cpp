#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
    Point(int _x, int _y)
    {
        x=_x;
        y=_y;
    }
};

struct Rect
{
    int x,y,w,h;

    bool contains(const Point& n)
    {
        bool d;
        if(n.x>x+w || n.x<x || n.y<y || n.y>y+h) d=false;
        else d=true;
        return d;
    }
};

struct Ship
{
    Rect rect;
    string id;
    int dx,dy;

    void move()
    {
        rect.x+=dx;
        rect.y+=dy;
    }
};

void display(const Ship& s)
{
    cout<<"Ship"<<" "<<s.id<<" is at "<<s.rect.x<<" "<<s.rect.y<<endl;
}

int main()
{
    Point n(0,0);
    Rect a={0,0,4,4};
    cout<<a.contains(n)<<endl;

    Ship s1;
    s1.rect={0,0,3,3};
    s1.dx=2;
    s1.dy=2;
    s1.id="AES!@";

    Ship s2;
    s2.rect={2,2,5,5};
    s1.dx=2;
    s1.dy=2;
    s1.id="BCD!@";

    for(int i=0;i<10;i++)
    {
        s1.move();
        s2.move();
        display(s1);
        display(s2);
    }

    return 0;
}
