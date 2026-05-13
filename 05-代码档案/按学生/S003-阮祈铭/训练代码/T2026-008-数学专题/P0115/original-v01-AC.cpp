#include<bits/stdc++.h>
using namespace std;
int n,a[3010],ans=0;
int p[3010];
int main()
{
    cin>>n;
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
    for(int i=6;i<=n;i++)
    {
        int x=i,j=1,y=0;
        while(x>1)
        {
        	if(x%p[j]==0)
        	{
        		y++;
        		while(x%p[j]==0)
        		{
        			x/=p[j];
        		}
        	}
        	else
        	{
        		j++;
        	}
        }
        if(y==2)
        {
        	ans++;
        }
    }
    cout<<ans;
    return 0;
}