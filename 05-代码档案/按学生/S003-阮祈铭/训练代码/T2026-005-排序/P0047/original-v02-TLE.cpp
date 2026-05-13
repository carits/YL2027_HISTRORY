#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100010],j,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i< n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[j]<a[i])
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}