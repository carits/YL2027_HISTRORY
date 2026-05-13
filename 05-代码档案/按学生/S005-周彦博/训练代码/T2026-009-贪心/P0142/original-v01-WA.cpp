#include <bits/stdc++.h>
using namespace std;
int n, a[200005], sum;
priority_queue<int> q;
int main(){
    cin >> n;
    for (int i = 1;i <= n; i++){
        cin >> a[i];
        q.push(-a[i]);
        sum += a[i];
        if (sum < 0){
            sum += q.top();
            q.pop();
        }
    }
    cout << q.size();
    return 0;
}