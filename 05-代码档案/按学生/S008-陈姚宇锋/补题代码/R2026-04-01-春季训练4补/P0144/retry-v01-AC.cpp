#include <bits/stdc++.h>
using namespace std;
#define int long long
int vis[1009];
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(vis,0,sizeof(vis));
        string s;
        cin>>s;
        int flag=0;
        for(int i=1;i<s.size()-1;++i)
        {
            vis[s[i]-'a'+1]+=1; 
        }
        for(int i=1;i<=26;++i)
        {
            if(vis[i]>1)
            {
                flag=1;
                cout <<"Yes"<<endl;
                break; 
            }
            else
            {
                if(vis[i]==1 && ((i-1+'a')==s[0] || (i-1+'a')==s[n-1]))
                {
                    cout<<"Yes"<<endl;
                    flag=1;
                    break;
                } 
            } 
        }
        if(flag==0)
        {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}