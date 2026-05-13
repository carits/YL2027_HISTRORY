#include<bits/stdc++.h>
using namespace std;
int a[15];
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=9000;i++){
        memset(a,0,sizeof(a));
        int ge=i%10;
        int shi=(i%100-ge)/10;
        int qian=i/1000;
        int bai=i/100-qian*10;
        a[ge]++;
        a[shi]++;
        a[qian]++;
        a[bai]++;
        int cnt=0;
        for(int j=0;j<=9;j++){
            if(a[j]>=2){
                cnt=1;
                break;
            }
        }
        if(cnt==0){
            cout<<i;
            return 0;
        }
    }
    return 0;
}