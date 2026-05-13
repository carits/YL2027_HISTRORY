#include<bits/stdc++.h>
using namespace std;
int t,x,y;
int main()
{
    cin>>t;
    while(t--)
    {
        bool f=true;
        cin>>x>>y;
        for(int i=x+1;i<y;i++)
        {
            if(__gcd(x,i)==1 && __gcd(y,i)==1)
            {
                f=false;
                cout<<i<<endl;
                break;
            }
        }
        if(f)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}