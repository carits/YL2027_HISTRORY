#include<bits/stdc++.h>
using namespace std;

int n,m,mxx,mxy;
int const N=1005;
char c[N][N]={
"  +---+",
" /   /|",
"+---+ |",
"|   | +",
"|   |/ ",
"+---+  "};
int z[]={2,1,0,0,0,0};
int s[]={6,6,6,6,5,4};
char a[N][N];
int an[N][N];
void fa(int x,int y){
    for(int i=5;i>=0;i--){
        for(int j=z[i];j<=s[i];j++){
                a[5-i+x][j+y]=c[i][j];
            if(5-i+x>mxx)mxx=5-i+x;
            if(j+y>mxy) mxy=j+y;
        }
    }
}
int main(){
    cin>> n >> m;
    for(int i=1;i<=n;i++)
        for(int j=0;j<m;j++)
            cin>> an[i][j];
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<an[i][j];k++){
                fa((n-i)*2+1+3*k,(n-i)*2+1+4*j);
            }
        }
    }
    for(int i=mxx;i>=1;i--){
        for(int j=1;j<=mxy;j++){
            if(a[i][j]!='\000')cout<< a[i][j];
            else cout<< ".";
        }
        cout<< "\n";
    }
    return 0;
}
/*
..+---+
./   /|
+---+ |
|   | +
|   |/.
+---+..
*/