#include <bits/stdc++.h>
using namespace std;
string s="1";
string cheng (string A , string B)
{
    if (A=="0"||B=="0") return "0";
    int n=A.size ( )-1 , m=B.size ( )-1;
    int a[1005]={} , b[1005]={} , c[2005]={};
    for (int i=A.size ( )-1;i>=0;i--)
    {
        a[A.size ( )-1-i]=A[i]-'0';
    }
    for (int i=B.size ( )-1;i>=0;i--)
    {
        b[B.size ( )-1-i]=B[i]-'0';
    }
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=m;j++)
        {
            c[i+j]+=a[i]*b[j];
            if (c[i+j]>=10)
            {
                c[i+j+1]+=c[i+j]/10;
                c[i+j]%=10;
            }
        }
    }
    int v=n+m+1;
    if (c[v]==0)
    {
    	v--;	    
    }
    for (int i=v-1;i>=0;i--)
    {
        C+=char (c[i]+'0');
    }
    return C;
}
int main ( )
{
    int t , n , x;
    cin >> t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (t--)
    {
        cin >> n >> x;
        s=to_string (x);
        while (n--)
        {
            s=cheng (s , "2");
        }
        cout << s << "\n";
    }
    return 0;
}