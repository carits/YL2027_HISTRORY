#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=n+1;;i++)
    {
        int s1=i/1000,s2=i%1000/100,s3=i%100/10,s4=i%10;
        if(s1!=s2&&s2!=s3&&s3!=s4&&s1!=s3&&s1!=s4&&s2!=s4)
        {
            cout<<i;
            return 0;
        } 
    }
    return 0;
}