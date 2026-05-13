#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i ++){
        int m;
        cin >> m;
        for(int j = 1;j <= m;j ++){
            cin >> a[j];
        }
        int cnt = 0;
        
        for(int j = 1;j <= m;j ++){
            int k = 0;
            if((2*j+1)%a[j]==0){
                k=j+1;
            }else{
                k=j+1+a[j]-(2*j+1)%a[j];
            }
            for(;k <= m;k +=a[j]){
                if(a[j]*a[k]==j+k){
                    cnt++;
                } 
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}