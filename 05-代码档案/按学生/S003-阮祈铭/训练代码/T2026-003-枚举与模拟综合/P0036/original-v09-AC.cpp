#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,i,num=0,j;
    cin>>a>>b;
    for(i=1;i<=60;i++)
    {
        for(j=0;j<i-1;j++)
        {
            if((1LL<<i)-1-(1LL<<j)>=a&&(1LL<<i)-(1LL<<j)-1<=b)
                num++;
        }
    }
    cout<<num;
    return 0;
}