#include<bits/stdc++.h>
using namespace std;
struct stu
{
    long long sc,tm;
}s[200010];
bool cmp(stu a,stu b)
{
    if(a.sc != b.sc)
    {
        return a.sc > b.sc;
    }
    else
    {
        return a.tm < b.tm;
    }
}
int t,n,m,h,a[200010];
int ss[200010];
long long x,y;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>h;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[j];
            }
            sort(a+1,a+m+1);
            long long cnt=0,scr=0;
            ss[0]=0;
            for(int j=1;j<=m;j++)
            {
                if(cnt+a[j]<=h)
                {
                    ss[j]=ss[j-1]+a[j];
                    cnt+=a[j];
                    scr++;
                }
                else
                {
                    break;
                }
            }
            cnt=0;
            for(int j=1;j<=scr;j++)
            {
                cnt+=ss[j];
            }
            if(i==1)
            {
                x=scr;
                y=cnt;
            }
            s[i]={scr,cnt};
        }
        sort(s+1,s+n+1,cmp);
        for(int i=1;i<=n;i++)
        {
            if(s[i].sc==x && s[i].tm==y)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}