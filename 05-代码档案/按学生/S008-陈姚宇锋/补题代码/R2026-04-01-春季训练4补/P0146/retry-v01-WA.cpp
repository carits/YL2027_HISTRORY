#include <bits/stdc++.h>
using namespace std;
int a[1000009]; 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;	
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
		} 
		cout<<n-1<<endl;
		if(n-1>0)
		{
			cout<<1<<" "<<n<<endl;	
	 		for(int i=2;i<n;++i)
	 		{
	 			if(a[i]%2==a[1]%2)
				{
					cout<<1<<" "<<n<<endl; 	
				}	
				else
				{
					cout<<1<<" "<<i<<endl; 
				 } 
			}
		} 
	} 
	return 0;
}