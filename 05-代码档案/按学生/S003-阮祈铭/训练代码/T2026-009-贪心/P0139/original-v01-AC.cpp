#include<bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cout<<ceil((1.0*abs(a-b))/(2*c))<<endl;
	}
	return 0;
}