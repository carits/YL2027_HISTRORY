#include<bits/stdc++.h>
using namespace std;

int t,n,h,l,ans;
int const N=2e5+5; 
int a[N],b[N];
int main(){
    cin>> t;
    while(t--){
        int ans=0,id=0,p=0;
        cin>> n;
        for(int i=1;i<=n;i++){
            cin>> a[i];
            b[i]=a[i];
        }
        sort(a+1,a+n+1,greater<int>());
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]){
                p=i;
//                cout<< p;
                for(;i<=n;i++){
                    if(ans<b[i]){
                        ans=b[i],id=i;
                    }
                }
            }
        }
//        cout<< p << " ";
        reverse(b+p,b+id+1);
        for(int i=1;i<=n;i++)cout<< b[i] << " ";
        cout<< "\n";
    }
    return 0;
} 