#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int t,n,k;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
    	cin>>k>>n;
    	while(k--){
    		if(n>0&&(n-1)%3==0&&(n-1)/3%2==1) n=(n-1)/3;
    		else n*=2;
		}
		cout<<n<<'\n';
    }
    return 0;
}