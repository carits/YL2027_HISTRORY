#include<bits/stdc++.h>
using namespace std;
int n,cnt;
bool a[100000010];
int main()
{
    cin>>n;
    for(int i=2;cnt<n;i++)
    {
        if(!a[i])
        {
        	cnt++;
            cout<<i<<' ';
            for(int j=2;i*j<=1e7;j++)
            {
                a[i*j]=true;
            }
        }
    }
    return 0;
}