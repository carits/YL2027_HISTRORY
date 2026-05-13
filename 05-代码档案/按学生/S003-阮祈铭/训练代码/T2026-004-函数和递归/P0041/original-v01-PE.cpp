#include<bits/stdc++.h>
using namespace std;
void hnt(int n,char a,char b,char c)
{
    if(n!=0)
    {
        hnt(n-1,a,c,b);
        cout<<endl<<n<<':'<<a<<"->"<<c;
        hnt(n-1,b,a,c);
    }
}
int main()
{
    int n;
    char a,b,c;
    cin>>n>>a>>b>>c;
    hnt(n,a,b,c);
    return 0;
}