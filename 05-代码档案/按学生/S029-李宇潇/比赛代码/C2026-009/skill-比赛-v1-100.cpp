#include <iostream>
#include <stdio.h>
using namespace std;

int table[4][7] = {
    {20,20,20,20,20,0,0},
    {20,20,10,30,20,0,0},
    {25,25,30,20,0,0,0},
    {15,15,15,10,10,15,20}
};

int main(){
    freopen("skill.in","r",stdin);
    freopen("skill.out","w",stdout);
    
    int n,m;
    cin >> n >> m;
    
    cout << table[n - 1][m - 1];
    
    return 0;
}
