#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
};

void print(Point p)
{
    int a,b;
    a=p.x;
    b=p.y;
    cout<<a<<" "<<b;
}

void swp(Point& p)
{
    int n=p.y;

    p.y=p.x;
    p.x=n;
}

Point mid_point(const Point p1, const Point p2)
{
    Point n;
    n.x=(p1.x+p2.x)*1.0/2;
    n.y=(p1.y+p2.y)*1.0/2;

    return n;
}
int main()
{
    Point p;
    p.x=1;
    p.y=2;

    swp(p);
    print(p);
    return 0;
}
