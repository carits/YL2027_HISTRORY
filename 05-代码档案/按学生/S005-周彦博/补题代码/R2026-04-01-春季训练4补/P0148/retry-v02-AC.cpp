#include <bits/stdc++.h>
using namespace std;
int a[200005], n, k, minn = 1e9;
vector<int>v[200005];
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        int p = a[i], t = 0, r = 0;
        while(p >= 0 && r == 0){
            if(p == 0 && r == 0) r = 1;
            v[p].push_back(t);
            t++;
            p /= 2;
        }
    }
    for(int i = 0; i <= 2e5; i++){
        if(v[i].size() < k)continue;
        sort(v[i].begin(), v[i].end());
        int sum = 0;
        for(int j = 0; j < k; j++)sum += v[i][j];
        minn = min(minn, sum);
    }
    cout << minn; 
return 0;
}       