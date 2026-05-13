#include<bits/stdc++.h>
using namespace std;
const int kMaxN=2*1e5+10;
int a[kMaxN],b[kMaxN];
int main()
{
	int t,n,i,j,k,x;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		x=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			b[a[i]]=i;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]!=n-i+1)
			{
				x=1;
				for(k=1;k<i;k++)
				{
					cout<<a[k]<<' ';
				}
				for(k=b[n-i+1];k>=i;k--)
				{
					cout<<a[k]<<' ';
				}
				for(k=b[n-i+1]+1;k<=n;k++)
				{
					cout<<a[k]<<' ';
				}
				cout<<endl;
				break;
			}
		}
		if(x==0)
		{
			for(i=n;i>=1;i--)
			{
				cout<<i<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}