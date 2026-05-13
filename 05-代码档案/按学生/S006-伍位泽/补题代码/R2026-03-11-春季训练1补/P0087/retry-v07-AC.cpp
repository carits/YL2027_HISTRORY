#include <bits/stdc++.h>
using namespace std;
int a[200005] , b[200005] , c[200005];
int Q , n , x , y , minn , p , lll;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> Q;
    while (Q--)
    {
        minn=1e9;
        cin >> n >> x >> y;
        lll=1;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for (int i=1;i<=y-x;i++)
        {
            b[i]=a[i+x];
            minn=min (minn , b[i]);
        }
        for (int i=1;i<=y-x;i++)
        {
            if (b[i]==minn)
            {
                p=i;
                break;
            }
        }
        int s=y-x;
        for (int i=1;i<=p-1;i++)
        {
        	c[i+s-p+1]=b[i];
		}
		for (int i=1;i<=s-p+1;i++)
		{
			b[i]=b[i+p-1];
		}
		for (int i=s-p+2;i<=s;i++)
		{
			b[i]=c[i];
		}
        p=0;
        for (int i=1;i<=x;i++)
        {
        	if (a[i]>minn)
        	{
        		p=i;
        		break;
			}
		}
        if (p!=0)
        {
        	for (int i=1;i<=p-1;i++)
			{
				cout << a[i] << " ";
			}	    
			for (int i=1;i<=y-x;i++)
			{
				cout << b[i] << " ";
			}
			for (int i=p;i<=x;i++)
			{
				cout << a[i] << " ";
			}
			for (int i=y+1;i<=n;i++)
			{
				cout << a[i] << " ";
			}
			cout << "\n";
        }
        else
        {
            lll=y+1;
            while (a[lll]<minn&&lll<=n)
            {
                lll++;
            }
            if (lll<=n)
            {
                for (int i=1;i<=x;i++)
                {
                    cout << a[i] << " ";
                }
                for (int i=y+1;i<=lll-1;i++)
                {
                    cout << a[i] << " ";
                }
                for (int i=1;i<=y-x;i++)
                {
                    cout << b[i] << " ";
                }
                for (int i=lll;i<=n;i++)
                {
                    cout << a[i] << " ";
                }
                cout << "\n";
            }
            else
            {
                for (int i=1;i<=x;i++)
                {
                    cout << a[i] << " ";
                }
                for (int i=y+1;i<=n;i++)
                {
                    cout << a[i] << " ";
                }
                for (int i=1;i<=y-x;i++)
                {
                    cout << b[i] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}