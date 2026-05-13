#include <bits/stdc++.h>
using namespace std;
bool t[200005];
int a[200005] , b[200005];

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q , n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        long long sum=0;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        while (1)
        {
            for (int i=1;i<=n;i++)
            {
                sum+=a[i];
            }         
            for (int i=1;i<=n;i++)
            {
                b[i]=b[i-1];
                if (t[a[i]]==1)
                {    
                    b[i]=max (b[i] , a[i]);   
                }
                t[a[i]]=1;
            }
            int p=0;
            for (int i=1;i<=n;i++)
            {
                p+=b[i];
                t[a[i]]=0;
                a[i]=b[i];
            }
            if (p==0)
            {
                break;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}