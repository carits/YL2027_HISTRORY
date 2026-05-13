#include<bits/stdc++.h>
using namespace std;
int t,n,a[100010],ans;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main()
{
    cin>>t;
    while(t--)
    {
    	bool f=false;
    	cin>>n;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>a[i];
    	}
    	for(int i=1;i<=n/2+1;i++)
    	{
    		if(a[i]!=a[n-i+1])
    		{
    			break;
    		}
    		if(i>=n-i+1)
    		{
    			f=true;
    			cout<<0<<endl;
    			break;
    		}
    	}
    	if(f)
    	{
    		continue;
    	}
    	for(int i=1;i<=n/2;i++)
    	{
    		ans=(i!=1?gcd(ans,abs(a[i]-a[n-i+1])):abs(a[i]-a[n-i+1]));
    	}
    	cout<<ans<<endl;
    }
    return 0;
}