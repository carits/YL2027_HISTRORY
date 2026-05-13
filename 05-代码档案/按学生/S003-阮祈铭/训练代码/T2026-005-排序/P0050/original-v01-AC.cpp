#include<bits/stdc++.h>
using namespace std;
const int kMaxN=5010;
struct fsx
{
    int k,s;
}a[kMaxN];
bool cmp(const fsx &a,const fsx &b)
{
    if(a.s!=b.s)
        return a.s>b.s;
    else
        return a.k<b.k;
}
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].k>>a[i].s;
    }
    sort(a+1,a+n+1,cmp);
    cout<<a[(int)floor(m*1.5)].s<<' ';
    for(int i=1;a[i].s>=a[(int)floor(m*1.5)].s;i++)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++)
    {
        cout<<a[i].k<<' '<<a[i].s<<endl;
    }
    return 0;
}