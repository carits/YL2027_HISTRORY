#include<bits/stdc++.h>
using namespace std;
string s,str="YesYesYesYesYesYesYesYesYesYesYes";
int n,i;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>s;
		if(str.find(s)!=string::npos)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}