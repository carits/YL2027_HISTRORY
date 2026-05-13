#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'&&b[i]=='1'){
                ans+=2;
                a[i]='2';
                b[i]='2';
            }
            if(a[i]=='1'&&b[i]=='0'){
                ans+=2;
                a[i]='2';
                b[i]='2';
            }
        }
        for(int i=1;i<n;i++){
            if(a[i]=='0'&&b[i]=='0'&&a[i-1]=='1'&&b[i-1]=='1'){
                ans+=2;
                a[i]='2';
                b[i]='2';
                a[i-1]='2';
                b[i-1]='2';
            }
            if(a[i]=='1'&&b[i]=='1'&&a[i-1]=='0'&&b[i-1]=='0'){
                ans+=2;
                a[i]='2';
                b[i]='2';
                a[i-1]='2';
                b[i-1]='2';
            }
        }
        
        for(int i=0;i<n-1;i++){
            if(a[i]=='0'&&b[i]=='0'&&a[i+1]=='1'&&b[i+1]=='1'){
                ans+=2;
                a[i]='2';
                b[i]='2';
                a[i-1]='2';
                b[i-1]='2';
            }
            if(a[i]=='1'&&b[i]=='1'&&a[i+1]=='0'&&b[i+1]=='0'){
                ans+=2;
                a[i]='2';
                b[i]='2';
                a[i-1]='2';
                b[i-1]='2';
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]=='0'&&b[i]=='0'){
                ans+=1;
            }
            
        }
        //cout<<a[1]<<" ";
        cout<<ans<<'\n';
    }
    
    return 0;
}