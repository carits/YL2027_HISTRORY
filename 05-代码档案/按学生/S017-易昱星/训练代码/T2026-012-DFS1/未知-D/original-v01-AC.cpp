#include<bits/stdc++.h>
using namespace std;
long long n,m,a[11][11],i,j,x,y,b,c;
map<long long,long long>p;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i=i+1)
    for(j=1;j<=m;j=j+1)
	cin>>a[i][j];
	for(i=0;i<(1<<(n+m-2));i=i+1)
	if(__builtin_popcount(i)==n-1)
	{
		x=1;y=1;p.clear();p[a[x][y]]=1;b=1;
		for(j=1;j<=n+m-2;j=j+1)
		{
			if((1<<(j-1))&i)x=x+1;else y=y+1;
			if(p[a[x][y]])b=0;p[a[x][y]]=1;
		}
		c=c+b;
	}
	cout<<c;
    return 0;
}