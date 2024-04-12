#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    char b[5];

    for(int i=0;i<5;i++)
    {
        cout<<&a[i]<<" "<<(void*)&b[i]<<endl;
//        0x61fe00 0x61fdfb
//        0x61fe04 0x61fdfc
//        0x61fe08 0x61fdfd
//        0x61fe0c 0x61fdfe
//        0x61fe10 0x61fdff
    }
    return 0;
}
