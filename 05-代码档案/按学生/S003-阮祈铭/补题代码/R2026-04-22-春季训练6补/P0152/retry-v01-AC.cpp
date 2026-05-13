#include<bits/stdc++.h>
using namespace std;
long long t,n,cnt;
string a,b;
int main()
{
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
            if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
            {
                cnt+=2;
            }//
            else if(a[i]=='0' && b[i]=='0')
            {
                if(i==n-1)
                {
                    cnt++;
                }
                else
                {
                    if(a[i+1]!=b[i+1])
                    {
                        cnt++;
                    }
                    else
                    {
                        if(a[i+1]=='1')
                        {
                            cnt+=2;
                            i++;
                        }
                        else
                        {
                            cnt++;
                        }
                    }
                }
            }
            else
            {
                if(i!=n-1)
                {
                    if(a[i+1]==b[i+1])
                    {
                        if(a[i+1]=='0')
                        {
                            cnt+=2;
                            i++;
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}