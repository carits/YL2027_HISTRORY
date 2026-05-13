#include<bits/stdc++.h>
using namespace std;
int q,a,b,c;
bool check(int x)
{
    return a-x+b-x+c>=x;
}
int main()
{
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        int l=0,r=min(a,b)+1,mid;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(check(mid))
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}