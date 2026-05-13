#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define inf 2e9
#define INF 1e18

ll t,n;
int const N=3e5+5;
ll a[N];
int main(){
	cin>> t;
	while(t--){
		cin>> n;
		for(int i=1;i<=n;i++)cin>> a[i];
		for(int i=2;i<n;i++){
			if(a[i]==-1)a[i]=0;
		}
		if(a[1]==a[n]&&a[1]==-1){
			cout<< 0;
			a[1]=a[n]=0;
		}else if(a[1]!=-1&&a[n]!=-1){
			cout<< abs(a[n]-a[1]);
		}else{
            cout<< 0 << "\n";
			int x=((a[1]==-1)?1:n);
			a[x]=a[((x==n)?1:n)];
		}
		cout<< "\n";
		for(int i=1;i<=n;i++)cout<< a[i] << " ";
		cout<< "\n";
	}
	return 0;
}