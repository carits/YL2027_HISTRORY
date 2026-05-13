#include <bits/stdc++.h>
using namespace std;
struct node
{
	int m , n;
};
node v[200005];
int p[200005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n;
    cin >> t;
    while (t--)
    {	
        cin >> n;
        for (int i=1;i<=n;i++)
        {
        	cin >> p[i];
        }
        v[n].m=p[n] , v[n].n=n;
        for (int i=n-1;i>=1;i--)
        {
        	v[i].m=v[i+1].m;
        	v[i].n=v[i+1].n;
        	if (p[i]>v[i].m)
        	{
        		v[i].m=p[i];
        		v[i].n=i;
			}
		}
		for (int i=1;i<=n;i++)
		{
			if (v[i].m>p[i])
			{
				reverse (p+i , p+v[i].n+1);
				break;
			}
		}
        for (int i=1;i<=n;i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }	
    return 0;
}