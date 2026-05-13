#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum=0;
signed main()
{
    string s3="";
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
    for(int i=0;i<n;++i)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]<s2[i])
            {
                cout<<-1;
                return 0;
            }
            s3+=s2[i];
        }
        else
        {
            s3+=s1[i];
        }
    }
    cout<<s3;
	return 0;
}
