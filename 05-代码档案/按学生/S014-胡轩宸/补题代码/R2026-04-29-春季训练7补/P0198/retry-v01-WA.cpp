#include <bits/stdc++.h>
using namespace std;
const int N=1010;
const int NN=N*30;
int T,b[NN],c[NN],cnt,q,qq;
long long a[N]; 
pair<int,int>qp[3005];
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
            cin>>a[i];
        }
        for(int i=2;i<=n;i++)
        {
            if(a[i]!=a[1])
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
            if(a[i]==1)
            {
                qq++;
            }
        }
        if(qq!=n and qq!=0)
        {
            cout<<-1<<endl;
            continue;
        }
		int base=1;
		for(int i=2;i<=n;i++)
		{
			if(a[i]<a[base])
			{
				base=i;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(i==base)
			{
				continue;
			}
            
			while(a[i]!=a[base] and a[i]!=0)
			{
				cnt++;
				b[cnt]=a[i];
				c[cnt]=a[base];
                //cout<<a[i]/a[base]<<endl;
				a[i]=ceil(a[i]/a[base]);
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