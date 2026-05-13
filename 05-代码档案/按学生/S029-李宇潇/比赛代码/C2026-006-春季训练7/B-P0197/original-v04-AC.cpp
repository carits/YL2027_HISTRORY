#include <iostream>
using namespace std;
 const int kN = 2e5 + 10;
int a[kN];
 int main(){
    int t;
    cin >> t;
        while(t--){
        int n;
        cin >> n;
                for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
                if(n == 1){
            cout << a[1] << "\n";
            continue;
        }
                for(int i = 2;i < n;i++){
            cout << a[i] << " ";
        }
        cout << a[n] << " " << a[1] << "\n";
    }
        return 0;
}