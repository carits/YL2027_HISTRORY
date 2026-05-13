#include <bits/stdc++.h>
using namespace std;
int n;
int a[100010];
long long s,ss;
int main()
{
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    } 
    sort(a+1,a+n+1);
    cin>>s>>ss;
    cout<<s*ss;
	return 0;
}

