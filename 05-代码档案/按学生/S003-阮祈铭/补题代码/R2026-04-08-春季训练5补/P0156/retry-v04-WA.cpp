#include<bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>a>>b;
    if(a%2==0 && b%2==0 && a*2>=b && a*1.5<=b)
    {
        if((a-(int)((b-a*1.5)/0.5))%4==0 && (int)((b-a*1.5)/0.5)>=0 && a>=(int)((b-a*1.5)/0.5))
        {
            cout<<(int)((b-a*1.5)/0.5)/2<<' '<<(a-(int)((b-a*1.5)/0.5))/4;
        }
        else
        {
            cout<<"Impossible!\n";
        }
    }
    else
    {
        cout<<"Impossible!\n";
    }
    return 0;
}