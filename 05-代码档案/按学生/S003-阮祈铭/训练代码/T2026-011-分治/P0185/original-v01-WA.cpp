#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,c;
int main()
{
    cin>>a>>b>>c;
    cout<<a<<"^"<<b<<" mod "<<c<<"="<<(int)pow(a,b)%c;
    return 0;
}