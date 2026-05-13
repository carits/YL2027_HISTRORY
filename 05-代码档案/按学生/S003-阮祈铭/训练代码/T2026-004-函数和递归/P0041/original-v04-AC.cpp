#include<bits/stdc++.h>
using namespace std;
void hannuota(int n,char a,char b,char c)
{
    if(n!=0)
    {
        hannuota(n-1,a,c,b);
        cout<<n<<':'<<a<<"->"<<c<<endl;
        hannuota(n-1,b,a,c);
    }
}
int main()
{
    int n;
    char a,b,c;
    cin>>n>>a>>b>>c;
    hannuota(n,a,b,c);
    return 0;
}