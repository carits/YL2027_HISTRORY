#include <bits/stdc++.h>
using namespace std;
int flip(int d) {
    if (d==0) return 0;
    if (d==1) return 1;
    if (d==2) return 5;
    if (d==5) return 2;
    if (d==8) return 8;
    return -1; 
}
int main() {
    int T;
    cin>>T;
    while(T--){
        int h,m;
        cin>>h>>m;
        int hh,mm;
        char c; 
        cin>>hh>>c>>mm;
        int total=h*m; 
        for (int step=0;step<=total; step++){
            int h1 = hh/10,h2=hh%10,m1 = mm/10,m2=mm%10; 
            if (flip(h1)!=-1&&flip(h2)!=-1&&flip(m1)!=-1&&flip(m2)!=-1){
                int mir_h=flip(m2)*10+flip(m1); 
                int mir_m=flip(h2)*10+flip(h1); 
                if (mir_h<h && mir_m<m) {
                    if (hh<10) cout <<'0'<<hh<<':';
                    else cout<<hh<<':';
                    if (mm<10) cout<<'0'<<mm<<'\n';
                    else cout<<mm<<'\n';
                    break; 
                }
            }
            mm++;
            if (mm >= m) {
                mm = 0;
                hh++;
                if (hh >= h) {
                    hh = 0; 
                }
            }
        }
    }
    return 0;
}