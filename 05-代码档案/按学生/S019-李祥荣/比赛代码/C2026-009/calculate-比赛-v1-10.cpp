#include<bits/stdc++.h>
using namespace std;
int n,a[100010],s[100010],b=0,c=0,ans=0;
string s1,s2;
void turn(int n){
    int i=1;
    string s;
    while(n){
        int x=0;
        x=x*10+n%a[i];
        n/=a[i];
        char c;
        c=x+'0';
        s=c+s;
        i++;
        if(i>n) i=1;
    }
    cout<<s;
    return;
}
int main(){
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    s[1]=1;
    cin>>s1>>s2;
    int len1=s1.size(),len2=s2.size();
    for(int i=2,j=1;i<=max(n,len2);i++,j++){
        if(j>n) j=1;
        s[i]=s[i-1]*a[j];
    }
    for(int i=len1-1,j=1;i>=0;i--,j++){
        b+=(s1[i]-'0')*s[j];
    }
    for(int i=len2-1,j=1;i>=0;i--,j++){
        c+=(s2[i]-'0')*s[j];
    }
    turn(b*c);
    
    return 0;
}
