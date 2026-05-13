#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,i,cnt,n,num=0;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        cnt=0;
        n=i;
        while(n!=0)
        {
            if(n%2==0)
            {
                cnt++;
            }
            n/=2;
            if(cnt>1)
                break;
        }
        if(cnt==0)
            num++;
    }
    cout<<num;
    return 0;
}