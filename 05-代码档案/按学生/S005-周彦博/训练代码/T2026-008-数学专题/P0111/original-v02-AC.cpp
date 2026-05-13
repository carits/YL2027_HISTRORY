#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7;
bool p[maxn];
int n;
void so()
{
    for (int i = 2; i < maxn; i++){
        if(!p[i])
		{
			cout << i << ' ';
			n--;
			if(n <= 0) return;
            for (int j = i + i; j < maxn; j += i) p[j] = 1;
        }
    }
}

int main(){
	cin >> n;
	so();
    return 0;
}