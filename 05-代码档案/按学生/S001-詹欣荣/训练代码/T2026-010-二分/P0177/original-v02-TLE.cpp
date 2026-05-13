#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
	for(int i=2;i<=1e9;i++){
    int pos=i*log10(i)+1;
    //cout<<pos<<" ";
    if(pos>=n){
        cout<<i;
        return 0;
    }
  }
	return 0;
}