#include <bits/stdc++.h>
using namespace std;
int checkGCD(int a, int b)
{
    int i=1,j=1;
    int gcd;

    if(a%b==0 || b%a==0)
    {
        if(a<b) gcd=a;
        else gcd=b;
    }
    else
    {
        while(a!=b)
        {
            if(a%i==0) a=a/i;
            if(b%j==0) b=b/j;
            if(a<b) j++;
            else i++;

        }
        gcd=a;
    }
    return gcd;
}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<checkGCD(a,b);

    return 0;
}


