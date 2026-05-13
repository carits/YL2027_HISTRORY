#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
struct stu
{
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
}a2[1000009];
bool cmp(const stu &a,const stu &b)
{
    for(int j=1;j<=m;++j)
    {
        if(j==1)
        {
           if(a.x1!=b.x1)
           {
               return a.x1>b.x1;
           }
        }
        if(j==2)
        {
           if(a.x2!=b.x2)
           {
               return a.x2>b.x2;
           }
        }
        if(j==3)
        {
           if(a.x3!=b.x3)
           {
               return a.x3>b.x3;
           }
        }
        if(j==4)
        {
           if(a.x4!=b.x4)
           {
               return a.x4>b.x4;
           }
        }
        if(j==5) 
        {
           if(a.x5!=b.x5)
           {
               return a.x5>b.x5;
           }
        }
        if(j==6)
        {
           if(a.x6!=b.x6)
           {
               return a.x6>b.x6;
           }
        }
        if(j==7)
        {
           if(a.x7!=b.x7)
           {
               return a.x7>b.x7;
           }
        }
        if(j==8)
        {
           if(a.x8!=b.x8)
           {
               return a.x8>b.x8;
           }
        }
        if(j==9)
        {
           if(a.x9!=b.x9)
           {
               return a.x9>b.x9;
           }
        }
        if(j==10)
        {
           if(a.x10!=b.x10)
           {
               return a.x10>b.x10;
           }
        }
    }
}
signed main()
{
    int ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
	   for(int j=1;j<=m;++j)
	   {
	       int a;
	       cin>>a;
	       if(j==1)
	       {
	           a2[i].x1=a;
	       }
	       if(j==2)
	       {
	           a2[i].x2=a;
	       }
	       if(j==3)
	       {
	           a2[i].x3=a;
	       }
	       if(j==4)
	       {
	           a2[i].x4=a;
	       }
	       if(j==5) 
	       {
	           a2[i].x5=a;
	       }
	       if(j==6)
	       {
	           a2[i].x6=a;
	       }
	       if(j==7)
	       {
	           a2[i].x7=a;
	       }
	       if(j==8)
	       {
	           a2[i].x8=a;
	       }
	       if(j==9)
	       {
	           a2[i].x9=a;
	       }
	       if(j==10)
	       {
	           a2[i].x10=a;
	       }
	   }
	} 
	sort(a2+1,a2+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
	    for(int j=1;j<=m;++j)
	    {
	       if(j==1)
	       {
	           cout<<a2[i].x1<<' ';
	       }
	       if(j==2)
	       {
	           cout<<a2[i].x2<<' ';
	       }
	       if(j==3)
	       {
	           cout<<a2[i].x3<<' ';
	       }
	       if(j==4)
	       {
	          cout<<a2[i].x4<<' ';
	       }
	       if(j==5) 
	       {
	           cout<<a2[i].x5<<' ';
	       }
	       if(j==6)
	       {
	           cout<<a2[i].x6<<' ';
	       }
	       if(j==7)
	       {
	           cout<<a2[i].x7<<' ';
	       }
	       if(j==8)
	       {
	           cout<<a2[i].x8<<' ';
	       }
	       if(j==9)
	       {
	           cout<<a2[i].x9<<' ';
	       }
	       if(j==10)
	       {
	           cout<<a2[i].x10<<' ';
	       }
	    }
	    cout<<endl;
	}
	return 0;
}