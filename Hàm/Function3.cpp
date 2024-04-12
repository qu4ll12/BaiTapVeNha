#include <bits/stdc++.h>
using namespace std;
void test1(int n)
{
    cout<<n<<" "<<&n<<endl;
}

void test2(int &n)
{
    cout<<n<<" "<<&n<<endl;
}

int main()
{
    int n;
    cin>>n;

    test1(n);
    cout<<n<<" "<<&n<<endl;
    test2(n);
//    3
//    3 0x61fdf0
//    3 0x61fe1c
//    3 0x61fe1c

    return 0;
}
