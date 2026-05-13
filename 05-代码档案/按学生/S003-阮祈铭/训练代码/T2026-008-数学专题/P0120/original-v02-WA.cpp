#include<bits/stdc++.h>
using namespace std;
int n;
map<int,bool> a;
int main()
{
	cin>>n;
	a[0]=a[1]=true;
	for(int i=1;i<=n;i++)
	{
		if(!a[i])
		{
			for(int j=i+i;j<=n;j+=i)
			{
				a[j]=true;
			}
		}
	}
	if(!a[n])
	{
		cout<<1<<endl<<a[n]<<endl;
	}
	else
	{
		cout<<3<<endl<<3<<' ';
		for(int i=3;i<=n-3;i+=2)
		{
			if(!a[i] && !a[n-i-3])
			{
				cout<<i<<' '<<n-i-3<<endl;
				return 0;
			}
		}
	}
    return 0;
}