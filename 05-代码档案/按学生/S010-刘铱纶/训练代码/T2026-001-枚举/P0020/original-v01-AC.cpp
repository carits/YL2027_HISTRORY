#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int a,b,c,cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}