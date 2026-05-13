#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin>> n;
    int k=ceil(log2(n));
    cout<< k << "\n";
    for(int i=0;i<k;i++){
        int ct=0;
        for(int j=1;j<=n;j++){
            if(j&(1<<i))ct++;
        }
        cout<< ct << " ";
        for(int j=1;j<=n;j++){
            if(j&(1<<i))cout<< j << " ";
        }
        cout<< "\n";
    }
    return 0;
}