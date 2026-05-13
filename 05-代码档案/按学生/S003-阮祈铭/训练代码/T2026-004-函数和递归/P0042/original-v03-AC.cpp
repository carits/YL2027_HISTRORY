#include<bits/stdc++.h>
using namespace std;
int xdh(int i)
{
    if(i==0){
        return 3;
    }
    else
        return (xdh(i-1)-1)*2;// xdh(i)/2+1=xdh(i-1)
}
int main()
{
    int n,i,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        cout<<xdh(m)<<endl;
    }
    return 0;
}