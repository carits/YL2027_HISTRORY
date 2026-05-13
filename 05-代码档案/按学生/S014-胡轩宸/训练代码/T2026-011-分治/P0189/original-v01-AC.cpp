#include <bits/stdc++.h>
#define Inf 1<<31-1
using namespace std;
struct node
{
	double x;
	double y;
};
struct node a[200005];
int b[300005];
double dis(node u,node v)
{
	return sqrt((u.x-v.x)*(u.x-v.x)+(u.y-v.y)*(u.y-v.y));
}
bool cmp1(node u,node v)
{
	if(u.x==v.x)
	{
		return u.y<v.y;
	}
	return u.x<v.x;
}
bool cmp2(int u,int v)
{
	return a[u].y<a[v].y;
}
double run(int l,int r)
{
	int d=Inf; 
	if(l==r)
	{
		return d;
	}
	if(l+1==r)
	{
		return dis(a[l],a[r]);
	}
	int mid=(l+r)>>1;
	double d1=run(mid,r); 
	double d2=run(l,mid-1);
	double minn=min(d1,d2);
	int k=0;
	for(int i=l;i<=r;i++)
	{
		if(fabs(a[mid].x-a[i].x)<=minn)
		{
			b[++k]=i;
		}
	}
	sort(b+1,b+k+1,cmp2);
	for(int i=1;i<=k;i++)
	{
		for(int j=i+1;j<=k and a[b[j]].y-a[b[i]].y<=minn;j++)
		{
			if(minn>=dis(a[b[i]],a[b[j]]))
			{
				minn=dis(a[b[i]],a[b[j]]);
			}
				
		}
	}
	return minn;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+n+1,cmp1);
	cout<<fixed<<setprecision(4)<<run(1,n);

	return 0;
}
