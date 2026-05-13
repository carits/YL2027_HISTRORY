#include<bits/stdc++.h>
using namespace std;
int t,h,m;
char n1,n2,m1,m2,c;
bool check(int o1,int o2,int o3,int o4)
{
    if(!(o1==3||o1==4||o1==6||o1==7||o1==9)&&!(o2==3||o2==4||o2==6||o2==7||o2==9)&&!(o3==3||o3==4||o3==6||o3==7||o3==9)&&!(o4==3||o4==4||o4==6||o4==7||o4==9))
    {
        int p1=o2*10+o1,p2=o4*10+o3;
        if(p1<=h&&p2<=m)
            return true;
    }
    return false;
}
void solve()
{
    cin>>h>>m;
    cin>>n1>>n2>>c>>m1>>m2;
    int s1=n1-'0',s2=n2-'0',s3=m1-'0',s4=m2-'0';
    while(check(s1,s2,s3,s4)==0)
    {
        s4++;
        if(s3*10+s4>m)
            s2++,s3=0,s4=0;
        if(s1*10+s2>h)
            s1=0,s2=0;
    }
    cout<<s1<<s2<<c<<s3<<s4<<"\n";
}
int main()
{
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}