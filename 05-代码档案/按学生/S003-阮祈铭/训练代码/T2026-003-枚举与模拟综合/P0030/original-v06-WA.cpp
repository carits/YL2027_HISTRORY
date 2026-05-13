#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,a[100010],sum,cnt;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cnt=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        for(j=1;j<n;j++)
        {
            for(sum=j*2+1;sum<=n+i;sum+=a[j])
            {
                if(a[j]*a[sum-j]==sum)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}