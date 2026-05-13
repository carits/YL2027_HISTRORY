#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
int main(){
    long long n;
    cin >> n;
    for(long long i = 1;i <= n;i ++){
        long long m;
        cin >> m;
        for(long long j = 1;j <= m;j ++){
            cin >> a[j];
        }
        long long cnt = 0;
        
        for(long long j = 1;j <= m;j ++){
            for(long long sum=a[j];sum<=j+m;sum+=a[j]){
                long long k=sum-j;
                if(j<k&&a[j]*a[k]==j+k){
                    cnt++;
                }
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}