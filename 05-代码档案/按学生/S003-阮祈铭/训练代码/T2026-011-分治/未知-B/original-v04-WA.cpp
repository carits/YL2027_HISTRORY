#include<bits/stdc++.h>
using namespace std;
struct nd
{
	long long a,b;
};
long long a,n,m;
nd f(long long x)
{
    if(x==0)
    {
        return {0,1};
    }
    else if(x==1)
    {
        return {1,a};
    }
    else if(x%2==0)
    {
    	long long ls=f(x/2).a%m,l=f(x/2).b%m;
    	long long l1=(ls+ls*l%m)%m;
        return {l1,(l*l)%m};
    }
    else
    {
        nd ls=f((x-1)/2);
    	long long l1=ls.a,l2=ls.b;
        long long la=f(x/2).b%m,lb=(l1*(1+l2*a%m)%m+l2%m)%m;
        return {lb,((a*la)%m*la)%m};
    }
}
int main()
{
	cin>>a>>n>>m;
	cout<<f(n).a<<endl;
	return 0; 
}