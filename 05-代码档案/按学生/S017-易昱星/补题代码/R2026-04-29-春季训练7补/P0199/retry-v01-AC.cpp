#include<bits/stdc++.h>
#define re read()
using namespace std;
const int MAXN=1e6+10;
int n,q,A[MAXN];
struct SEGTREE{
	int sum;
}tr[MAXN<<2];
int read(){//快读
	#define gt getchar()
	#define isdi(a) (a>='0'&&a<='9')
	int x=0,sgn=1;char ch=gt;
	for(;!isdi(ch);ch=gt)if(ch=='-')sgn=-1;
	for(;isdi(ch);ch=gt)x=(x<<1)+(x<<3)+(ch^48);
	return x*sgn;
}
void build(int k,int l,int r){ //建树
	if(l==r){
		tr[k].sum=A[l];
		return;
	}
	int mid=(l+r)>>1;
	build(k<<1,l,mid); build(k<<1|1,mid+1,r);
	tr[k].sum=tr[k<<1].sum+tr[k<<1|1].sum;
	return;
}
void add(int k,int l,int r,int num){//加入元素
	if(l==r){
		if(l==num)tr[k].sum++;
		return;
	}
	int mid=(l+r)>>1;
	if(num>mid)add(k<<1|1,mid+1,r,num);
	else add(k<<1,l,mid,num);
	tr[k].sum++;
	return;
}
void del(int k,int l,int r,int num){
	if(l==r){
		if(tr[k].sum)tr[k].sum--;
		return;
	}
	if(num>tr[k].sum)return;
	int mid=(l+r)>>1;
	if(num>tr[k<<1].sum)del(k<<1|1,mid+1,r,num-tr[k<<1].sum);
	else if(num<=tr[k<<1].sum)del(k<<1,l,mid,num);
	else return;
	tr[k].sum--;
	return;
}
int find(int k,int l,int r){//递归查找
	if(l==r){
		if(tr[k].sum)return l;
		return 0;
	}
	int mid=(l+r)>>1;
	if(tr[k<<1].sum)return find(k<<1,l,mid);
	else return find(k<<1|1,mid+1,r);
	return 0;
}
int main (){
	n=re;q=re;
	for(int i=1;i<=n;i++){
		int temp=re;
		A[temp]++;
	}
	build(1,1,n);
	for(int i=1;i<=q;i++){
		int k=re;
		if(k<0)del(1,1,n,-k);
		else add(1,1,n,k);
	}
	printf("%d",find(1,1,n));
	return 0;
}