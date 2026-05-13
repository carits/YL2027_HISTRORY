#include<bits/stdc++.h>
using namespace std;
int n,i;
int main()
{
    cin>>n;
    for(i=n+1;i<=10000;i++)
    {
        int a=i%10,b=i/10%10,c=i/100%10,d=i/1000;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}