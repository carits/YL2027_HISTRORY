#include<bits/stdc++.h>
using namespace std;
int n,k,a[3010],ans=0;
int p[3010],lp[3010],answ;
int main()
{
    cin>>n>>k;
    for(int i=2,x=1;i<=n;i++)
    {
        if(!a[i])
        {
            p[x]=i;
            x++;
            for(int j=i+i;j<=n;j+=i)
            {
                a[j]=true;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
    	if(!a[p[i]+p[i+1]+1])
    	{
    		lp[p[i]+p[i+1]+1]=true;
    	}
    }
    for(int i=1;i<=n;i++)
    {
    	if(lp[i])
    	{
    		ans++;
    	}
    }
    if(ans>=k)
    {
    	cout<<"YES\n";
    }
    else
    {
    	cout<<"NO\n";
    }
    return 0;
}