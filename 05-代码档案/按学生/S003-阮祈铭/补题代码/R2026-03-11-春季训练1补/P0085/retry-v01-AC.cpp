#include<bits/stdc++.h>
using namespace std;
int ans,n;
int a[100];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a+1,a+n+1))
        {
            cout<<n<<endl; 
        }
        else
        {
            cout<<1<< endl;
        }
    }
    return 0;
}