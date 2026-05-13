/*
已知:两个整数 m,n
	m个学校的预计录取分数
	n个学生的估分成绩
求: n 个学生的估分成绩
解:
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int ans=0; 
	int n,m,a[100010],b[100010];
	//a[i]:学校预计分数线 b[i]:学生估分 
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)scanf("%d",&a[i]);//输入学校的预计录取分数
	for(int i=1;i<=n;i++)scanf("%d",&b[i]);//输入学生的估分成绩
	sort(a+1,a+m+1);//因为二分的前提是有序,所以进行一次排序
	for(int i=1;i<=n;i++)
	{
		int l=upper_bound(a+1,a+m+1,b[i])-a;//寻找第一个打样b[i]的下标
		if(l==1)//如果l=1,abs(a[l]-a[i])会出错
		{
			ans=ans+abs(a[l]-b[i]);//计算 
		} 
		else
		{
			ans=ans+min(abs(a[l-1]-b[i]),abs(a[l]-b[i]));
		}
	} 
	cout<<ans;
	return 0;
}