#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[]={1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383,
32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 
16777215, 33554431, 67108863, 134217727, 268435455, 536870911, 1073741823,
2147483647};
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;;i++){
			if(n%a[i]==0){
				cout<<n/a[i]<<'\n';
				break;
			} 
			if(i>50){
				cout<<1<<'\n';
				break;
			}
		}
	}			
	return 0;
}