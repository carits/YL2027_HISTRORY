#include<bits/stdc++.h>
using namespace std;
int n,a[15000005][2],cnt,b[15000005];
long long ans;
void ss(int s){
    int p=0;
    for(int i=29;i>=0;i--)
	{
        int c=(s>>i)&1;
        if(c==0)ans+=b[a[p][1]];
        if(!a[p][c])
		{
			a[p][c]=++cnt;
		}
        p=a[p][c];
        b[p]++;
    }
}
signed main()
{
    cin>>n;
    int a;
    for(int i=1;i<=n;i++)
	{
        cin>>a;
        ss(a);
    }
    cout<<ans;
    return 0;
}
