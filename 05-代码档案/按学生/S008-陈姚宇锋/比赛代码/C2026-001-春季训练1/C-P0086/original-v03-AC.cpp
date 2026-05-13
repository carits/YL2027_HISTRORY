#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[5009];
stack<int>op;
signed main()
{
    int t;
	cin>>t;
	while(t--)
	{
        int n;
    	cin>>n;
    	for(int i=1;i<=n;i++)
        {
    		char c; 
            cin>>c;
    		a[i]=c-'a';
    	}
    	for(int i=1;i<=n;i++)
        {
    		if(op.empty())
            {
    			op.push(a[i]);
    			continue;
    		}
    		if(op.top()==a[i])
            {
    			op.pop();
    			continue;
    		}
    		op.push(a[i]);
    	}
    	if(op.empty())
        {
            cout<<"YES"<<endl;
        }
    	else 
        {
            cout<<"NO"<<endl;
        }
        while(!op.empty())
        {
            op.pop();
        }
	}
	return 0;
}