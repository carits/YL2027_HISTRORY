#include<bits/stdc++.h>
using namespace std;
const int a[] = {
	1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,
	2048, 4096, 8192, 16384, 32768, 65536, 131072,
	262144, 524288, 1048576, 2097152, 4194304,
	8388608, 16777216, 33554432, 67108864, 134217728,
	268435456, 536870912, 1073741824
};
long long b[5000000];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	int ans=0;//29
	for(int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++) {
			for(int k=1;k<=31;k++){
		    	if (b[i]+b[j]==a[k]) {
		        	ans++; 
		    	}
			}
		}
	}
	cout<<ans;
    return 0;
}