#include<bits/stdc++.h>
using namespace std;
int n,q,l,r,ss[1000010]={0};
string s;
int main()
{
	cin>>n>>q>>s;
	for(int i=0;i<n;i++)
	{
		ss[i+1]=ss[i]+(int)s[i]-'a'+1;
	}
	for(int i=1;i<=q;i++)
	{
		cin>>l>>r;
		cout<<ss[r]-ss[l-1]<<endl;
	}
	return 0;
}