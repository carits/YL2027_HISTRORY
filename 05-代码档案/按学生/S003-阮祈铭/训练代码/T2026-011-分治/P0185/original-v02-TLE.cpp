#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,c,cnt=1;
int main()
{
    cin>>a>>b>>c;
    for(int i=1;i<=b;i++)
    {
        cnt*=a;
        cnt%=c;
    }
    cout<<a<<"^"<<b<<" mod "<<c<<"="<<cnt<<endl;
    return 0;
}