#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

signed main()
{
    cin>>n;
    while(n--)
    {
        int sum=3;
        int m;
        cin>>m;
        while(m--)
        {
            sum=(sum-1)*2; 
        }
        cout<<sum<<endl;
    } 
	return 0;
}
