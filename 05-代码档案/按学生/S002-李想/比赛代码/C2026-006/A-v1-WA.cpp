#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
int a[N];
void slove(){
    int s=0;
    cin>> n;
    for(int i=1;i<=n;i++){
        cin>> a[i];
        s+=a[i];
    }
    sort(a+1,a+n+1);
    if(s%n!=0){
        cout<< -1 << "\n";
        return;
    }
    s/=n;
//    cout<< s << "\n";
    int i=1,j=n,ans=0;
    while(i<j&&a[i]<s){
        int c1=s-a[i],c2=a[j]-s;
//        cout<< c1 << " " << c2 << "\n";
        if(c1<c2){
            i++,a[j]-=c1;
//            cout<< a[i] << "\n";1
        }else if(c1>c2){
            j--,a[i]+=c2;
            ans++;
        }else{
            i++,j--;
            ans++;
        }
    }
    cout<< ans << "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}