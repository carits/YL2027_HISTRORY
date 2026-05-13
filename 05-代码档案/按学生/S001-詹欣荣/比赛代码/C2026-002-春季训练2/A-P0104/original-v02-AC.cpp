#include<bits/stdc++.h>
using namespace std;
char ch[45][45];
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int a[m+1],b[m+1];
        for(int i=1;i<=m;i++){
            cin>>a[i]>>b[i];
        }
        int cnt=0;
        for(int i=1;i<=m;i++){
            if(a[i]-b[i]>0){
                cnt++;
            }
        }
        cout<<cnt<<'\n'; 
    }
    return 0;
}