#include <bits/stdc++.h>
using namespace std;
int t, n;
int js[50];
string s;
inline int read()
{
	int x=0,f=1; char ch=getchar();
	while(ch<'0'||ch>'9') { if (ch=='-') f=-1; ch=getchar(); }
	while(ch>='0'&&ch<='9') { x=x*10+ch-48; ch=getchar(); }
	return x*f;
}
void so(){
    memset(js, 0, sizeof(js));
    bool dx = 0;
    n = read();
    cin >> s;
    for(int i = 0; i < n; i++) js[abs(s[i] - 'a' + 1)]++;
    for(int i = 1; i < n - 1; i++){ 
        if(js[abs(s[i] - 'a' + 1)] > 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main(){
    t = read();
    while(t--) so();
    return 0;
}