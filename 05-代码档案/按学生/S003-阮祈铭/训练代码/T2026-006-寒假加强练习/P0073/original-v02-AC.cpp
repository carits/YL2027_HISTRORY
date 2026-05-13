#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		if(n%2==0)
			cout<<n/4+1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}