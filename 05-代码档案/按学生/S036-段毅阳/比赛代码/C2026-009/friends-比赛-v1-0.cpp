#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
long long sum[100005];
int c[10000005];
void check(long long x){
    for(long long i=2;i<=n;i++){
        int k=x;
        while(k%i==0){
            k/=i;
            c[i]++;
        }
    }
    c[1]++;
}
int main(){
	freopen("friends.in","r",stdin);
	freopen("friends.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i],sum[i]=sum[i-1]+a[i];
	check(sum[n]);
	for(int i=1;i<=n;i++){
	    int GCD=sum[n];
	    int ans=i-1,last=0;
	    int lastgcd;
    	int lastlast;
	    int lastans;
	    int flag=0;
        for(int j=1;j<=n-ans&&ans>0;j++){
            int z=last;
            if(__gcd((int)sum[j]-(int)sum[last],GCD)==GCD) ans--,last=j,cout << 1 << " " << j << " " << (int)sum[j]-(int)sum[z] << "XXX";
            else if(__gcd((int)sum[j]-(int)sum[last],GCD)==1&&j==n-ans) GCD=1,ans--,last=j,cout << 2 << " " << j << " " << (int)sum[j]-(int)sum[z] << "XXX";
            else if(flag==0){
                lastgcd=__gcd((int)sum[j]-(int)sum[last],GCD);
                lastlast=last;
                lastans=ans-1;
                flag=1;
                cout << 3 << " " << j << " " << (int)sum[j]-(int)sum[z] << "XXX";
            }else if(flag==1){
                GCD=lastgcd;
                last=lastlast;
                ans=lastans;
                flag=0;
            }
        }
        cout << " " << GCD << "\n";
	}
	return 0;
}

