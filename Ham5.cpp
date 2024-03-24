#include <bits/stdc++.h>
using namespace std;
bool checkPrimeNum(int n)
{
    bool d;
    int a[n];
    memset(a,0,sizeof(a));

    a[0]=1;
    a[1]=1;

    for(int i=2;i<=n;i++)
    {
        if(a[i]!=1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=1;
            }
        }
    }

    if(a[n]==0) d=true;
    else d=false;

    return d;
}
int main()
{
    int n;
    cin>>n;
    cout<<checkPrimeNum(n);
    return 0;
}
