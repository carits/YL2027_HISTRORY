#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        if (n%3==0) ans=0;
        else if (n%3==1) ans=1;
        else ans=1;
        cout<<ans<<'\n';
    }
    return 0;
}