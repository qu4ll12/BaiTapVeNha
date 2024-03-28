#include <bits/stdc++.h>
using namespace std;
void test1(char n[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<n[i]<<" "<<&n[i]<<endl;
    }
}

void test2(string n)
{
    cout<<n<<" "<<&n<<endl;
}

int main()
{
    char a[5]="abcd";
    string b="abcd";

    test1(a,4);
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" "<<&a[i]<<endl;
    }
    cout<<endl;

    test2(b);
    cout<<b<<" "<<&b<<endl;

    //cả mảng và string đều được truyền vào hàm bằng pp pass to reference

    return 0;
}

