#include<bits/stdc++.h>
using namespace std;
int a[11],cnt,i,n;
int main()
{
    for(i=1;i<=10;i++)
        cin>>a[i];
    cin>>n;
    n+=30;
    for(i=1;i<=10;i++)
    {
        if(a[i]<=n)
            cnt++;
    }
    cout<<cnt;
    return 0;
}