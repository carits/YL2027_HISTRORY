#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,a[100010],k,cnt;
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
            for(k=j*2+1;k<=n-i;k+=a[j])
            {
                if(a[j]*a[k-j]==k)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}