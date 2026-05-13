#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    int maxx = 0;
    for(int i = 1; i < n; i++)
    {
        int idx = a[i],sum=1;
        for(int j = i+1; j<=n;j++)
        {
            if(a[j]<=idx*2)
            {
                sum++;
                idx=a[j];
            }
            else
            {
                break;
            }
        }
        maxx=max(maxx,sum);
    }
    cout<<maxx;
	return 0;
}

