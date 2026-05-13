#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k;
int ssss(int s,int ss)
{
	int ans=1,tmp=s;
	while(ss!=0)
	{
		if(ss&1)
		{
			ans=(ans%k*tmp%k)%k;
		} 
		tmp=(tmp%k*tmp%k)%k;
		ss=ss>>1;
	} 
	ans=ans%k;
	return ans;

}
signed main()
{
	cin>>n>>m>>k;
	int ans=ssss(n,m);
	ans%=k;
    cout<<n<<"^"<<m<<" mod "<<k<<"="<<ans;
	return 0;
}

