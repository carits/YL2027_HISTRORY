#include<bits/stdc++.h>
using namespace std;
int n,t,sum;
bool a[100005],b[100005];
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        char c;
        for(int i=1;i<=n;i++){
            cin>>c;
            a[i]=(c=='1');
        }
        for(int i=1;i<=n;i++){
            cin>>c;
            b[i]=(c=='1');
        }
        int i=1;
        while(i<=n){
            if(a[i]!=b[i]){
                sum+=2;
                i++;
            }else if(a[i]==0){
                if(i<n){
                    if(a[i+1]||b[i+1]){
                        sum+=2;
                        i+=2;
                    }else{
                        sum++;
                        i++;
                    }
                }else{
                    sum++;
                    i++;
                }
            }else{
                if(i<n){
                    if(!a[i+1]||!b[i+1]){
                        sum+=2;
                        i+=2;
                    }else{
                        i++;
                    }
                }else{
                    i++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}