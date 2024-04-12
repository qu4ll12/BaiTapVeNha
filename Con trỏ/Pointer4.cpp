#include <bits/stdc++.h>
using namespace std;
void found(int *a,int n,int b)
{
    int i=0,j=n;
    int tb=(i+j)/2;

    while(a[tb]!=b)
    {
        if(j<i) break;
        if(a[tb]<b) i++;
        else j--;
        tb=(i+j)/2;
    }
    cout<<tb+1;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    found(a,10,2);
    return 0;
}
