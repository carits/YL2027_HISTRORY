#include<bits/stdc++.h>
using namespace std;

double t,n,d,h;
int const N=2e5+5;
double a[N];
void slove(){
    cin>> n >> d >> h;
    for(int i=1;i<=n;i++)cin>> a[i];
    double ans=d*h/2*n;
    for(int i=1;i<n;i++){
        if(a[i]+h>a[i+1]){
            ans-=d*((a[i]+h-a[i+1])*(a[i]+h-a[i+1]))/(2*h);
        }
    }
    printf("%8lf\n",ans);
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}