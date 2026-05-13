#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n,k,d;
        cin >> n >> k >> d;
        
        vector<int> a(n + 1);
        for(int i = 1;i <= n;i++){
        	cin >> a[i];
		} 
		
        vector<int> v(k);
        for (int i = 0;i < k;i++){
        	cin >> v[i];
		}
        
        int maxp = min(d - 1,2 * n);
        int ans = 0;
        
        vector<int> cnt(n + 1,0);
        vector<int> cur(n + 1,0);
        for(int p = 0;p <= maxp;p++){
            int score = 0;
            for(int i = 1;i <= n;i++){
                if(a[i] + cur[i] == i) score++;
            }
            
            int total = score + (d - p - 1) / 2;
            ans = max(ans,total);
            
            if(p == maxp) break;
            
            int b = v[p % k]; 
            for(int i = 1;i <= b;i++){
                cur[i]++;
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}