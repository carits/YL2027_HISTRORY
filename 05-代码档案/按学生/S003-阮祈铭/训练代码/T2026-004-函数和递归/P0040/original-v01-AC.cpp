#include<bits/stdc++.h>
using namespace std;
bool run(int y)
{
    if((y%400==0)||(y%100!=0&&y%4==0))
        return true;
    else
        return false;
}
int main()
{
    int x,y,num=0,ans[2010],i;
    cin>>x>>y;
    for(i=x;i<=y;i++)
    {
        if(run(i))
        {
            num++;
            ans[num]=i;
        }
    }
    cout<<num<<endl;;
    for(i=1;i<=num;i++)
        cout<<ans[i]<<' ';
    return 0;
}