#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,a[100005],dj,sl,su[100005];
signed main()
{
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int id=1;
    su[0]=1;
    for(int i=1;i<=n;i++)
    {
        su[i]=su[i-1]*a[i];
    }
    cin >> dj >> sl;
    int sum=0,cnt=0;
    int djcnt=0;
    int x=dj;
    while(dj)
    {
        djcnt++;
        dj/=10;
    } 
    while(x)
    {
        sum+=x%10*su[cnt];
        cnt++;
        x/=10;
    }
    int sum1=0,cnt1=0;
    int slcnt=0;
    int xx=sl;
    while(sl)
    {
        slcnt++;
        sl/=10;
    } 
    while(xx)
    {
        sum1+=xx%10*su[cnt1];
        cnt1++;
        xx/=10;
    }   
    sum*=sum1;
    cout << sum;
    return 0;
}
