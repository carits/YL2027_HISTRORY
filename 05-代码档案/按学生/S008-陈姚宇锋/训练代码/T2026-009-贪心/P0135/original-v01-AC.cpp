#include <bits/stdc++.h>
using namespace std;
int t,n,ans,maxx,a[1009][1009];
char x;
signed main()
{
	cin>>t; 
    while(t--)
	{
        ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
		{
            for(int j=1;j<=n;j++)
			{
                cin>>x;
                a[i][j]=x-'a';
            }
        }
        for(int i=1;i<=n/2;i++)
		{
            for(int j=1;j<=n/2;j++)
			{
                maxx=max({a[i][j],a[j][n-i+1],a[n-j+1][i],a[n-i+1][n-j+1]});
                ans+=maxx*4-a[i][j]-a[j][n-i+1]-a[n-j+1][i]-a[n-i+1][n-j+1];
			}
	 	}
        cout<<ans<<endl;
    }
    return 0;
}