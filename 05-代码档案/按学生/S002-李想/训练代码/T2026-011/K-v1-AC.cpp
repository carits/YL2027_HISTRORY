#include<bits/stdc++.h>
using namespace std;
#define int long long

string s;
int q,t,k;
int const N=1e5+5;
int a[N];
int dfs(int t,int k){
    if(t==0)return a[k];
    if(k==1)return (a[1]+t%3)%3;
    return (k%2==1?(dfs(t-1,(k+1)/2)+1)%3:(dfs(t-1,(k+1)/2)+2)%3);
}
signed main(){
    cin>> s >> q;
    for(int i=0;i<s.size();i++){
		a[i+1]=s[i]-'A';
	}
	while(q--){
		cin>> t >> k;
		cout<< (char)(dfs(t,k)%3+'A') << "\n";
	}
    return 0;
}