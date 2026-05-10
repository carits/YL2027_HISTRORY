#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> name(n);
    vector<int> face(n);
    for(int i = 0; i < n; i++) cin >> face[i] >> name[i];
    int p = 0;
    while(m--){
        int a, s;
        cin >> a >> s;
        if(face[p] == a) p = (p - s % n + n) % n;
        else p = (p + s) % n;
    }
    cout << name[p] << "\n";
    return 0;
}
