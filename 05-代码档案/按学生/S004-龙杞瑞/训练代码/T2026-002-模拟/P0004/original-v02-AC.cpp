#include<bits/stdc++.h>
using namespace std;
const int N=10000;
char mz[N][N];
int Z[N][N];

void mdraw(int x,int y){
    /*正面矩阵绘制*/
    mz[x][y+3]=mz[x][y]=mz[x+4][y]=mz[x+4][y+3]='+';
    for(int i=x+1;i<x+4;i++)
        mz[i][y]=mz[i][y+3]='-';
    for(int i=y+1;i<y+3;i++)
        mz[x][i]=mz[x+4][i]='|';
    for(int i=x+1;i<x+4;i++)
        for(int j=y+1;j<y+3;j++)
            mz[i][j]=' ';
    /*顶面矩阵绘制*/
    mz[x+1][y+4]=mz[x+5][y+4]='/';
    mz[x+2][y+5]=mz[x+6][y+5]='+';
    for(int i=x+2;i<=x+4;i++)
        mz[i][y+4]=' ';
    for(int i=x+3;i<=x+5;i++)
        mz[i][y+5]='-';
    /*侧面矩阵绘制*/
    mz[x+5][y+1]='/';
    mz[x+6][y+2]='+';
    mz[x+5][y+2]=mz[x+5][y+3]=' ';
    mz[x+6][y+3]=mz[x+6][y+4]='|';
}

void putout(int x,int y){
    for(int j=y;j>=0;j--){
        for(int i=0;i<=x;i++)
            if(!mz[i][j])putchar('.');
            else putchar(mz[i][j]);
        putchar('\n');
    }//按照平面直角坐标系顺序进行输出 
}

int main(){
    int mx=0,my=0;
    int m,n;
    scanf("%d%d",&m,&n);
    for(int y=m-1;y>=0;y--)
        for(int x=0;x<n;x++)
            scanf("%d",&Z[x][y]); //注意输入 
    for(int y=m-1;y>=0;y--)
        for(int x=0;x<n;x++)
            for(int z=0;z<=Z[x][y]-1;z++){
                mx=max(mx,2*y+4*x+6);
                my=max(my,2*y+3*z+5);
                mdraw(2*y+4*x,2*y+3*z);
            } //注意绘制顺序 
    putout(mx,my); //输出 
    return 0;
}
