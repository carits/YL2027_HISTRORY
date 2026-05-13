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
            for(int k = j+1;k <= m;k ++){
                if(a[j]*a[k]==j+k){
                    cnt++;
                } 
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}