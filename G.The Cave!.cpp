#include <bits/stdc++.h>

#define sf                  scanf
#define pf                  printf
#define pb                  push_back
#define FOR(i, a, b)        for(int i = a; i<b; i++)
#define For(i, a, b)        for(int i = a; i<=b; i++)
#define min3(a, b, c)       min(a, min(b, c))
#define max3(a, b, c)       max(a, max(b, c))
#define MEM(a, x)           memset(a, x, sizeof(a))

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int t,n,m,c=0,sum=0,tot=0,a[100001];
    sf("%d",&t);

    FOR(i, 0, t)
    {
        sf("%d",&n);
        FOR(j, 0, n)
        {
            sf("%d",&a[j]);
            m=sqrt(a[j]);
            For(k, 1, m)
            {
                if(a[j]%k==0)
                    c++;
            }
            sum+=c*2;
            c=0;
            if((m*m)==a[j] && a[j]!=0)
                sum--;
        }
        while(1)
        {
            if(sum!=0)
            {
                tot+=sum%2;
                sum/=2;
            }
            else
                break;
        }
        pf("Case %d: %d\n", i+1, tot);
        tot=0;
    }
    return 0;
}
