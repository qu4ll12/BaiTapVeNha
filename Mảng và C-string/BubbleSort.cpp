#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int a[30];

    for(int i=0;i<30;i++)
    {
        a[i] = (rand()%100) +1;
    }

    for(int i=0;i<30-1;i++)
        for(int j=0;j<30-1;j++)
        {
            if(a[j+1]<a[j]) swap(a[j],a[j+1]);
        }
    for(int i=0;i<30;i++)
        cout<<a[i]<<" ";

    return 0;
}
