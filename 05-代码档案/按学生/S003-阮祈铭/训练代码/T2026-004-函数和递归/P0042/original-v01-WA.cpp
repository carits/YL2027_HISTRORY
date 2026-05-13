#include<bits/stdc++.h>
using namespace std;
int xdh(int n,int i)
{
    if(i!=0){
        i--;
        return (n-1)*2;
    }
    else
        return n; 
}
int main()
{
    int n,i,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        cout<<xdh(3,m)<<endl;
    }
    return 0;
}