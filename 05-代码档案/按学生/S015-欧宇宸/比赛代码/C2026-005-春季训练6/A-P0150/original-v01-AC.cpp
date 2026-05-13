#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int sum=0;
        int flag=0;
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i];
            sum+=a[i]; 
            if(a[i]!=a[i-1]&&i!=1)flag=1;
        }
        if(!flag)
        {
            cout<<"0\n";
            continue;
        }
        sort(a+1,a+1+n,greater<int>());
        if(sum%n!=0){
            cout<<"-1\n";
            continue;
        }
        int pin=sum/n;
        sum =0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i]>=pin)continue;
            sum+=pin-a[i];
        }
        int tot=0;
        for(int i = 1; i <= n; i++)
        {
            tot+=a[i]-pin;
            if(tot>=sum)
            {
                cout<<i<<'\n';
                break;
            }
        }
    }
	return 0;
}

