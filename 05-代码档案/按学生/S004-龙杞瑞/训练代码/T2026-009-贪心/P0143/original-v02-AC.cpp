#include<bits/stdc++.h>
using namespace std;
const int NR = 3 * 1e5;
priority_queue<int, vector<int>, greater<int> > q;
struct Node{
	int t, b;
}a[NR + 10];
bool cmp(Node x, Node y){
	return x.b > y.b;
}

int main(){
	//读入
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 1;i <= n;i++){
		scanf("%d%d", &a[i].t, &a[i].b);
	}
	sort(a + 1, a + 1 + n, cmp);//按照好听程度排序
   //贪心
	long long sum = 0;
	long long Max = INT_MIN;
	for(int i = 1;i <= n;i++){
		sum += 1ll * a[i].t;//选取当前歌曲
		q.push(a[i].t);
		if((int)q.size() > k){//如果超出了 k 首歌
			sum -= 1ll * q.top();//就把长度最短的从已选的里面弹出
			q.pop();
		}
		Max = max(Max, sum * a[i].b);//更新最大值
	}
	printf("%lld\n", Max);//输出
	return 0;
}