#include <bits/stdc++.h>
using namespace std;
const double INF = 1e20;
int n;
struct P {//定义结构体，等于pair<double,double>
    double x, y;
};
vector<P> a;//数组存放
vector<P> b;
double dist(const P& p1, const P& p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));//使用勾股定理   sqrt(a*a+b*b)=c
}
bool cmp_x(const P& p1, const P& p2) {//排序1
    if (p1.x != p2.x) return p1.x < p2.x;
    return p1.y < p2.y;
}
bool cmp_y(const P& p1, const P& p2) {//排序2
    return p1.y < p2.y;
}
double f(int l, int r) {//分治
    if (l >= r) return INF;//跳出
    if (r - l == 1) {
        return dist(a[l], a[r]);
    }
    int m = (l + r) / 2;
    double mx = a[m].x, d1 = f(l, m), d2 = f(m + 1, r), d = min(d1, d2);
    b.clear();//清空以重新计数
    for (int i = l; i <= r; ++i) {
        if (fabs(a[i].x - mx) < d) {
            b.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end(), cmp_y);
    for (int i = 0; i < b.size(); ++i) {
        for (int j = i + 1; j < b.size(); ++j) {
            if (b[j].y - b[i].y >= d) {
                break;
            }
            double dt = dist(b[i], b[j]);
            if (dt < d) {
                d = dt;
            }
        }
    }
    return d;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    a.resize(n);//长度确定（函数是查的）
    for (int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y;//输入位置
    }
    sort(a.begin(), a.end(), cmp_x);
    double ans = f(0, n - 1);//二分左端点与右端点
    printf("%.4lf",ans);//格式输出
    return 0;
}