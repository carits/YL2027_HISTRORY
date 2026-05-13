#include <bits/stdc++.h>
using namespace std;
long long ksm(long long x,long long y){
    long long ret=1;
    while(y > 0){ 
        if(y & 1) ret *= x; 
        x *= x;
        y /= 2;
    }
    return ret;
}

int main(){
    int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for(int i=2;;i++){
			int pp = (ksm(2, i) - 1);
			if(n % pp == 0){
				cout << n / pp << endl;
				break;
			}
		}
	}
	return 0;
}