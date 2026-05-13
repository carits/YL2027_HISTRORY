#include<bits/stdc++.h>
using namespace std;
int k,n,w;
int main()
{
    cin>>k>>n>>w;
    cout<<max(0,(w+1)*w/2*k-n);
    return 0;
}