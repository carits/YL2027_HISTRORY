#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[100005];
struct node{int l,r;}b[100005];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        
        // 找到最右边的下降点，处理
        // 或者：全部变成a[1]或a[n]，但控制奇偶
        
        // 策略：让a[n]作为基准，但先确保所有元素可以变成它
        // 如果a[i]和a[n]奇偶不同，需要中间步骤
        
        // 实际：用a[1]作为"中转站"
        
        // 第一步：让a[1]和a[n]相同
        if(a[1]!=a[n]){
            b[++cnt].l=1,b[cnt].r=n;
            if((a[1]+a[n])%2==0)a[1]=a[n];
            else a[n]=a[1];
        }
        
        // 现在a[1]==a[n]
        for(int i=2;i<n;i++){
            if(a[i]!=a[n]){
                // 如果奇偶不同，先用(1,i)
                if((a[i]+a[n])%2==1){
                    b[++cnt].l=1,b[cnt].r=i;
                    a[i]=a[1];//=a[n]
                }
                // 现在同奇偶
                if(a[i]!=a[n]){
                    b[++cnt].l=i,b[cnt].r=n;
                    a[i]=a[n];
                }
            }
        }
        
        cout<<cnt<<"\n";
        for(int i=1;i<=cnt;i++)cout<<b[i].l<<" "<<b[i].r<<'\n';
    }
    return 0;
}