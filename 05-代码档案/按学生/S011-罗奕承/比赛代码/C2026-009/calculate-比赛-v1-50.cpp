#include<bits/stdc++.h>
using namespace std;
long long a[100005], n, b, c, k, s;
char z[5000005];
int main(){
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    string bs, cs;
    cin >> n;
    for(int i = 0;i < n;i++)cin >> a[i];
    cin >> bs >> cs;
    for(int i = 0;i <= bs.size()-1;i++){
        b+=bs[i]-'0';
        if(i!=bs.size()-1)b*=a[bs.size()-i-2];
    }
    for(int i = 0;i <= cs.size()-1;i++){
        c+=cs[i]-'0';
        if(i!=cs.size()-1)c*=a[cs.size()-i-2];
    }
    k=b*c;
    for(int i = 0;i < n;i++){
        if(k==0)break;
        s++;
        z[s]=k%a[i]+'0';
        k/=a[i];
    }
    while(s!=0){
        cout << z[s];
        s--;
    }
    return 0;
}
