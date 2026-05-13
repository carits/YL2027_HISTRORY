#include<bits/stdc++.h>
using namespace std;
struct node{
    int n,num;
}a[310];
bool cmp(const node &a,const node &b)
{
        return a.n<b.n;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i].n;
        a[i].num=i;
    }
    sort(a+1,a+n+1,cmp);
    for(i=1;i<=n;i++)
        cout<<a[i].num<<' ';
    return 0;
}