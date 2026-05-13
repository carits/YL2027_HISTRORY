#include <bits/stdc++.h>
using namespace std ;
long long t,n,m,h,a[1000009],ms,mf,s,f,cnt,sum ;
int main()
{
    cin >> t ;
    while(t --)
    {
        ms = mf = cnt = 0 ;
        cin >> n >> m >> h ;
        for(int i = 1 ; i <= n ; i ++)
        {
            sum = s = f = 0 ;
            for(int j = 1 ; j <= m ; j ++)
            {
                cin >> a[j] ;
            }
            sort(a + 1 , a + m + 1) ;
            for(int j = 1 ; j <= m ; j ++)
            {
                sum += a[j] ;
                if(sum > h) 
				{
					break ;
				}
                s ++ ;
                f += sum ;
            }
            if(i == 1) 
            {
                ms = s ;
                mf = f ;
            }
            else
            {
                if(s > ms) 
					cnt ++ ;
                else if(s == ms && f < mf) 
					cnt ++ ;
                else if(s == ms && f >= mf) 
					cnt += 0 ;
                else 
					cnt += 0 ;
            }
        }
        cout << cnt + 1 << endl;
    }
    return 0 ;
}