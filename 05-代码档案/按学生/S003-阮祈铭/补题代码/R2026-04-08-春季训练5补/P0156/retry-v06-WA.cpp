#include<bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>a>>b;
    if((2*b-3*a)/2>=0 && (2*b-3*a)%2==0 && (2*a-b)/2>0 && (2*a-b)%2==0)
    {
        cout<<(2*b-3*a)/2<<' '<<(2*a-b)/2<<endl;
    }
    else
    {
        cout<<"Impossible!";
    }
    return 0;
}