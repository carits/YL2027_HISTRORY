#include<bits/stdc++.h>
using namespace std;
const int kMaxM = 1e5 + 5;
int m, n;
bool z[kMaxM];
int dx(int x){
    int dn = 0;
    while (x > 0){
        dn *= 10;
    	dn += x % 10;
    	x /= 10;
    }
    return dn;
}


void sf(){
    z[1] = 1;
    for (int i = 2; i < kMaxM; i++){
		if(z[i] == 0){
			for (int j = 2 * i; j < kMaxM; j += i){
				z[j] = 1;
			}
		}
	}
    return;
}
int main(){
    cin >> m >> n;
    sf();
    for (int i = m; i <= n; i++){
        if (!z[i] && !z[dx(i)]){
            cout << i;
            m = i + 1;
            break;
        }
    }
    for (int i = m; i <= n; i++){
        if (!z[i] && !z[dx(i)]){
            cout << ',' << i;
        }
    }
    return 0;
}