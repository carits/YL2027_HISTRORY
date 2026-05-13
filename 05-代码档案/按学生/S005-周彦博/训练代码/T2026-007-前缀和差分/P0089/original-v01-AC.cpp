#include<bits/stdc++.h>
using namespace std;
int t, n, s[200005];
inline int read()
{
	int x = 0, f = 1; char ch = getchar();
	while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
	while(ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar();}
	return x * f;
}
int sw (int n){
    int sum = 0;
    while (n > 0){
    	sum += n % 10;
    	n = n / 10;
    }
    return sum;
}
int main(){
    for(int i = 1; i <= 200005; i++){
        s[i] = s[i - 1] + sw(i);
    }
    t = read();
    while(t--){
        n = read();
        cout << s[n] << '\n';
    }
    return 0;
}