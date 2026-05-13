#include<bits/stdc++.h>
using namespace std;
struct node{
    int a,b;
}a[100010];
bool cmp(const node &a,const node &b)
{
    if(a.a!=b.a)
        return a.a<b.a;
    else
        return a.b<b.b;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i].a>>a[i].b;
    }
    sort(a+1,a+n+1,cmp);
    for(i=1;i<=n;i++)
        cout<<a[i].a<<' '<<a[i].b<<endl;;
    return 0;
}