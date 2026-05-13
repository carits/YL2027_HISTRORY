#include<bits/stdc++.h>
using namespace std;
int t,n;
int main()
{
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	for(int i=2;i<=31;i++)
    	{
    		if(n%((1<<i)-1)==0)
    		{
    			cout<<n/((1<<i)-1)<<endl;
    			break;
    		}
    	}
    }
    return 0;
}