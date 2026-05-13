#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int n, q;
int a[N], b[N];

inline int read() {
    int x = 0; bool neg = false; char ch = getchar();
    while(!isdigit(ch)) (ch == '-') && (neg = true), ch = getchar();
    while(isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    return neg ? -x : x;
}

bool check(int x) {
    int lsiz = 0, rsiz = 0;
    for(int i = 1; i <= n; ++i)
        if(a[i] <= x) {
            ++lsiz;
        } else {
            ++rsiz;
        }
    for(int i = 1; i <= q; ++i) {
        if(b[i] < 0) {
            if(-b[i] <= lsiz) --lsiz;
            else --rsiz;
        } else {
            if(b[i] <= x) ++lsiz;
            else ++rsiz;
        }
    }
    return lsiz > 0;
}


int main() {
    n = read(), q = read();
    int rem = n;
    for(int i = 1; i <= n; ++i)
        a[i] = read();
    for(int i = 1; i <= q; ++i) {
        b[i] = read();
        if(b[i] < 0) --rem;
        else ++rem; 
    }

    if(rem <= 0) {
        puts("0");
        return 0;
    }

    int l = 1, r = n, mid, mp = n;
    while(l <= r) {
        mid = (l + r) >> 1;
        if(check(mid)) {
            if(mp > mid) mp = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    printf("%d\n", mp);
    return 0;
}
