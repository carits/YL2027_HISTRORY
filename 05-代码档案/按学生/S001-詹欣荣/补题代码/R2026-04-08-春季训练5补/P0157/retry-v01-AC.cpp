#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
    
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string a,b;
    cin>>a>>b;
    int i=0;
    while(a[i]!='a'&&a[i]!='e'&&a[i]!='o'&&a[i]!='i'&&a[i]!='u'&&a[i]!='v'){
        a1=a1+a[i];
        i++;        
    }
    while(i<a.size()){
        a2=a2+a[i];
        i++;
    } 
    i=0;
    while(b[i]!='a'&&b[i]!='e'&&b[i]!='o'&&b[i]!='i'&&b[i]!='u'&&b[i]!='v'){
        b1=b1+b[i];
        i++;        
    } 
    while(i<b.size()){
        b2=b2+b[i];
        i++;
    } 
    int ans=0;
    if(a1==b1){
        ans+=2;
    }
    if(a2==b2){
        ans+=1;
    }
    cout<<ans;
    return 0;
}