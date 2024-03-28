#include <bits/stdc++.h>
using namespace std;
long long unsigned int sum=1;
int n=12;
void factorial(int x)
{
    if(x>0)
    {
        cout <<" x =  " << x << " at " << &x << endl;
//         x =  12 at 0x61fe00
//         x =  11 at 0x61fdd0
//         x =  10 at 0x61fda0
//         x =  9 at 0x61fd70
//         x =  8 at 0x61fd40
//         x =  7 at 0x61fd10
//         x =  6 at 0x61fce0
//         x =  5 at 0x61fcb0
//         x =  4 at 0x61fc80
//         x =  3 at 0x61fc50
//         x =  2 at 0x61fc20
//         x =  1 at 0x61fbf0
        sum*=x;
        x--;
        factorial(x);
    }
}
int main()
{
    factorial(n);
    return 0;
}
