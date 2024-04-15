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
    Point a(1,2);
    cout<<&a.x<<endl;
    cout<<&a.y<<endl;
    cout<<&a;
    return 0;
}

