#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum=0;
void dfs(int m,char a,char b,char c)
{
    if(m==0)
    {
        return ;
    }
    dfs(m-1,a,c,b);
    cout<<m<<':'<<a<<"->"<<c<<endl;
    dfs(m-1,b,a,c); 
}
signed main()
{
	int n;
	cin>>n;
	char a,b,c;
	cin>>a>>b>>c;
	dfs(n,a,b,c);
	return 0;
}
