#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		cout<<(n%2==0?n/2+1:0)<<endl;
	}
	return 0;
}