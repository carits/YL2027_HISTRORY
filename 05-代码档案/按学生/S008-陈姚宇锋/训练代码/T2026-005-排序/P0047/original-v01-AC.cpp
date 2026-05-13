#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,cnt,a[1000009],b[1000009];
void fenzhi(int l,int r)
{
    if(r-l+1==1)
    {
        return ;
    }
    int mid=(l+r)/2;
    fenzhi(l,mid);
    fenzhi(mid+1,r);
    int li=l,ri=mid+1,pos=l;
    while(pos<=r)
    {
        if(li>mid)
        {
            b[pos]=a[ri];
            ri++;
        }
        else if(ri>r)
        {
            cnt+=r-mid;
            b[pos]=a[li];
            li++;   
        }
        else if(a[li]>a[ri])
        {
            b[pos]=a[ri];
            ri++;
        }
        else
        {
            cnt+=ri-mid-1;
            b[pos]=a[li];
            li++;
        }
        pos++;
    }
    for(int i=l;i<=r;++i)
    {
        a[i]=b[i];
    }
}
signed main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i]; 
    } 
    fenzhi(1,n);
    cout<<cnt;
    return 0;
}