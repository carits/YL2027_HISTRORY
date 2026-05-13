#include<bits/stdc++.h>
using namespace std;
int n,a[30],b[30],bj[30],ans;
void dfs(int x)
{
	if(x>n)
	{
		ans++;
		return;
	}
    if(bj[a[x]]==0)
    {
        bj[a[x]]=1;
        dfs(x+1);
        bj[a[x]]=0;
    }
    if(bj[b[x]]==0)
    {
        bj[b[x]]=1;
        dfs(x+1);
        bj[b[x]]=0;
    }
}
int main()
{
	cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    dfs(1);
    cout<<ans;
	return 0;
}