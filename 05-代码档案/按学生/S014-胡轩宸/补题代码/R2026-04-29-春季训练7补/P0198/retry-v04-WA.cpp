#include <bits/stdc++.h>
using namespace std;
const int N=1010;
const int NN=N*30;
int T,b[NN],c[NN],cnt,q,qq;
struct Node
{
	long long x,y; 
}a[N];
bool cmp(Node u,Node v)
{
	return u.x<v.x;
}
int main()
{
	cin>>T;
	while(T--)
	{
        int n;
		cin>>n;
		q=1;
        qq=0;
        cnt=0;
		for(int i=1;i<=n;i++)
        {
            cin>>a[i].x;
            a[i].y=i;
        }
        sort(a+1,a+n+1,cmp);
        for(int i=2;i<=n;i++)
        {
            if(a[i].x!=a[1].x)
            {
                q=0;
                break;
            }
        }
		if(q==1)
		{
			cout<<0<<endl;
			continue;
		}
		for(int i=1;i<=n;i++)
        {
            if(a[i].x==1)
            {
                qq++;
            }
        }
        if(qq!=n and qq!=0)
        {
            cout<<-1<<endl;
            continue;
        }
		for(int i=2;i<=n;i++)
		{  
			while(a[i].x!=a[1].x)
			{
                sort(a+1,a+n+1,cmp);
                cnt++;
				b[cnt]=a[i].y;
				c[cnt]=a[1].y;
				a[i].x=(a[i].x+a[1].x-1)/a[1].x;
			}
		}
		cout<<cnt<<endl;
		for(int i=1;i<=cnt;i++)
		{
			cout<<b[i]<<' '<<c[i]<<endl;
		}
        
	}
	return 0;
}
/*

*/