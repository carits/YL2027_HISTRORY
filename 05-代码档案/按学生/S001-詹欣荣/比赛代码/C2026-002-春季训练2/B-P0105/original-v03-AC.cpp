#include<bits/stdc++.h>
using namespace std;
char ch[45][45];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string a;
        string b;
        string c;
        cin>>a>>b>>c;
        for(int j=1;j<=3;j++){
            ch[1][j]=a[j-1];ch[2][j]=b[j-1];ch[3][j]=c[j-1];
        }

        bool p=true;
        for(int j=1;j<=3;j++){
            if(ch[j][1]==ch[j][2]&&ch[j][2]==ch[j][3]&&ch[j][3]!='.'){
                cout<<ch[j][1]<<'\n';
                p=false;
                break;
            }
        }
        if(!p)continue;
        for(int j=1;j<=3;j++){
            if(ch[1][j]==ch[2][j]&&ch[2][j]==ch[3][j]&&ch[3][j]!='.'){
                cout<<ch[1][j]<<'\n';
                p=false;
                break;
            }
        }
        if(!p)continue;
        if(ch[1][1]==ch[2][2]&&ch[3][3]==ch[2][2]&&ch[3][3]!='.'){
                cout<<ch[1][1]<<'\n';
                p=false;
            
        }
        if(!p)continue;
        if(ch[1][3]==ch[2][2]&&ch[3][1]==ch[2][2]&&ch[3][1]!='.'){
                cout<<ch[1][3]<<'\n';
                p=false;
        }
        if(!p)continue;
        if(p){
            cout<<"DRAW"<<'\n';
        }
    }
    return 0;
}