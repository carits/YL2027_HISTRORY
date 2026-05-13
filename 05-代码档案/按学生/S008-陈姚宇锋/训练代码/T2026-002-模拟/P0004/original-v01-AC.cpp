#include <bits/stdc++.h>
using namespace std;
#define int long long
int m,n,p,a[1009][1009],maxx,maxy,z[6]={2,1,0,0,0,0},s[6]={6,6,6,6,5,4}; 
char c[1001][1001],c1[10][10]={"  +---+"," /   /|","+---+ |","|   | +","|   |/","+---+",};      
void da(int x,int y)
{
    for(int i=5;i>=0;--i)
    {
        for(int j=z[i];j<=s[i];++j)
        {
            c[5-i+x][j+y]=c1[i][j];
            if(5-i+x>maxx)
            {
                maxx=5-i+x;
            }
            if(j+y>maxy)
            {
                maxy=j+y;
            }
        }
    }
}
signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[i][j];                        
        }
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<m;++j)
        {
            for(int l=0;l<a[i][j];++l)
            {
                da((n-i)*2+1+3*l,(n-i)*2+1+4*j);
            }
        }
    }
    for(int i=maxx;i>=1;--i)
    {
        for(int j=1;j<=maxy;++j)
        {
             if(c[i][j]=='\000')
             {
                 cout<<'.';
             }
             else
             {
                 cout<<c[i][j];
             }
        }
        cout<<endl;
    }
	return 0;
}	