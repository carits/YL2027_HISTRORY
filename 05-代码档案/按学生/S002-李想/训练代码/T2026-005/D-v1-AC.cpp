#include<iostream>
#include<algorithm>
using namespace std;

int n;
struct node
{
    int a,b,c,d,id;
}num[305];
bool cmp(node x,node y)
{
    if(x.d!=y.d)return x.d>y.d;
    else if(x.a!=y.a)return x.a>y.a;
    else return x.id<y.id;
}
int main()
{
    cin>> n;
    for(int i=1;i<=n;i++)
    {
        cin>> num[i].a >> num[i].b >> num[i].c;
        num[i].d=num[i].a + num[i].b +num[i].c;
        num[i].id=i;
    }
    sort(num+1,num+n+1,cmp);
    for(int i=1;i<=5;i++)
    {
        cout<< num[i].id << " " << num[i].d << endl;
    }
    return 0;
}