#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    int sum = 1,maxx=0;
    int idx = a[1];
    for(int i = 2; i <= n; i++)
    {
       if(idx*2>=a[i]) {
           idx=a[i];
           
           sum++;
       }
       else 
       {
           
           maxx=max(maxx,sum);
           idx=a[i];
           sum=1;
       }
    }
    maxx=max(maxx,sum);
    cout<<maxx;
	return 0;
}

