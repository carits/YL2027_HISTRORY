#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,c,cnt=1;
unsigned long long f(unsigned long long x)
{
    if(x==0)
    {
        return 1;
    }
    else if(x==1)
    {
        return a;
    }
    else if(x%2==0)
    {
        unsigned long long l=f(x/2)%c;
        return (l*l)%c;
    }
    else
    {
        unsigned long long l=f(x/2)%c;
        return (a*l*l)%c;
    }
}
int main()
{
    cin>>a>>b>>c;
    // if(b<=1e8)
    // {
    //     for(unsigned long long i=1;i<=b;i++)
    //     {
    //         cnt*=a;
    //         cnt%=c;
    //     }
    //     cout<<a<<"^"<<b<<" mod "<<c<<"="<<cnt<<endl;
    // }
    // else
    // {
        cout<<a<<"^"<<b<<" mod "<<c<<"="<<f(b)<<endl;
    // }
    return 0;
}