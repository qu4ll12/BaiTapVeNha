#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int m,n;
    cin>>m>>n;

    int a[m][n];
    memset(a,0,sizeof(a));
    int cnt=1;
    int x=0,y=0;
    int c=m,b=n;

    while(cnt<=c*b)
    {
        for(int i=x;i<m;i++)
        {
            a[i][y]=cnt;
            cnt++;
            if(cnt==c*b) break;
        }
        y++;

        for(int j=y;j<n;j++)
        {
            a[m-1][j]=cnt;
            cnt++;
            if(cnt==c*b) break;
        }
        m--;

        for(int i=m-1;i>=x;i--)
        {
            a[i][n-1]=cnt;
            cnt++;
            if(cnt==c*b) break;
        }
        n--;

        for(int j=n-1;j>=y;j--)
        {
            a[x][j]=cnt;
            cnt++;
            if(cnt==c*b) break;
        }
        x++;
}


    for(int j=0;j<b;j++)
    {
        for(int i=0;i<c;i++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}

