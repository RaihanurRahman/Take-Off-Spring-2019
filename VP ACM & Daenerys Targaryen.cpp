#include <stdio.h>
#include <time.h>

int countInRange(int l, int r, int &c){
    if(l>r) return 0;
    if(l) return (r/c+1)-((l-1)/c+1);
    return r/c+1;
}

int solve(int n, int k, int c){
    n++;
    int full_segment=(n/(2*k));
    int ans=full_segment*(countInRange(0, k, c)+countInRange(1, k-1, c));
    n-=full_segment*2*k;
    if(n-1<=k) ans+=countInRange(0, n-1, c);
    else n-=k+1, ans+=countInRange(0, k, c)+countInRange(k-n, k-1, c);
    return ans;
}


int main(){
    #ifdef VAMP
        clock_t tStart = clock();
        freopen("worst_time.in", "r", stdin);
        freopen("worst_time.out", "w", stdout);
    #endif

    int t, tc=0, n, k, c;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &k, &c);
        printf("Case %d: %d\n", ++tc, solve(n, k, c));
    }

    #ifdef VAMP
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
}