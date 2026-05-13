#include<bits/stdc++.h>
using namespace std;
 int n;
string a,b;
int const N=1e4+5;
int ct[N];
int main(){
    cin>> n >> a >> b;
    a='#'+a;
    b='#'+b;
    for(int i=1;i<=n;i++){
        ct[a[i]-'a'+1]++;
        ct[b[i]-'a'+1]--;
    }
    for(int i=1;i<=26;i++){
        if(ct[i]!=0){
            cout<< -1;
            return 0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(b[i]==a[j]&&ct[j]==0){
                ct[j]=i;
                break;
            }
        }
    }
    vector<int>v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            if(ct[j]>ct[j+1]){
                v.push_back(j);
                swap(ct[j],ct[j+1]);
            }
        }
    }
    cout<< v.size() << "\n";
    for(auto p:v)cout<< p << " ";
    return 0;
}