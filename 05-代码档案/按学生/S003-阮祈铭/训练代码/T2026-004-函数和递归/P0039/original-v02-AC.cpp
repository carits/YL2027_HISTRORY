#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int n,i;
    cin>>n>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<b;
    return 0;
}