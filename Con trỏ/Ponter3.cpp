#include <bits/stdc++.h>
using namespace std;
void cout_even(int *a, int n)
{
    for(int *i=a;i<a+10;i++)
    {
        if(*i%2==0) cout<<*i<<" ";
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout_even(a,10);
    return 0;
}
