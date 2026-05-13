#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
	  int n;
	  cin >> n;
	  char ch;
	  cin >> ch;
	  string s;
	  cin >> s;
	  int maxn = 0;
	  for(int i = 0;i < s.size();i++){
	    if(s[i] == ch){
	      int cnt = 0;
	      while(s[i] != 'g'&&i < s.size()){
	        i++;
	        cnt++;
        }
        if(i>=s.size()&&cnt!=0){
          i = 0;
          while(s[i] != 'g'&&i < s.size()){
	         i++;
	         cnt++;
          }
          maxn = max(maxn,cnt);
          break;
        }
        maxn = max(maxn,cnt);
      }
    }
    cout << maxn << '\n';
  }
	return 0;
}