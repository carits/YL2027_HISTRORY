#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n==0||n==1)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0&&n!=i)
            return false;
    }
    return true;
}
int main()
{
    int m,n,i,x,y;
    bool b=true,a=false;
    cin>>m>>n;
    for(i=m;i<=n;i++)
    {
        if(prime(i))
        {
            x=0;
            y=i;
            while(y!=0)
            {
                x=x*10+y%10;
                y/=10;
            }
            if(prime(x))
            {
                b=false;
                if(a)
                    cout<<',';
                a=true;
                cout<<i;
            }
        }
    }
    if(b)
        cout<<"No";                  
    return 0;
}