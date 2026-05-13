#include<bits/stdc++.h>
using namespace std;
#define int long long
int a1[]={0,20,20,20,20,20};
int a2[]={0,20,20,10,30,20};
int a3[]={0,25,25,30,20};
int a4[]={0,15,15,15,10,10,15,20};
signed main()
{
    freopen("skill.in","r",stdin);
    freopen("skill.out","w",stdout);
    int n,m;
    cin>>n>>m; 
    if(n==1)
    {
        cout<<a1[m];
    } 
    if(n==2)
    {
        cout<<a2[m];
    } 
    if(n==3)
    {
        cout<<a3[m];
    } 
    if(n==4)
    {
        cout<<a4[m];
    } 
    return 0;
} 
