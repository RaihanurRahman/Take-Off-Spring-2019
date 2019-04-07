#include <bits/stdc++.h>

#define Read()            freopen("in.txt", "r", stdin)
#define Write()           freopen("out.txt", "w", stdout)
#define min3(a, b, c)     min(a, min(b, c))
#define max3(a, b, c)     max(a, max(b, c))
#define eps               1e-9
#define TC(i, a, b)       for(ll  i = a; i<=b; i++)
#define FOR(i, a, b)      for(ll  i = a; i<b; i++)
#define ROF(i, a, b)      for(ll  i = a; i>=b; i--)
#define MEM(a, x)         memmset(a, x, sizeof(a))
#define SQR(x)            ((x)*(x))
#define valid(x, s, e)    (x>=s && x<=e)
#define sz(a)             ll ((a).size()) 
#define all(c)            (c).begin(),(c).end() 
#define tr(c,i)           for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x)      ((c).find(x) != (c).end()) 
#define cpresent(c,x)     (find(all(c),x) != (c).end()) 
#define pb                push_back
#define MAX               1000000000
#define sf             	  scanf
#define pf 	              printf
#define ll 				  long long
#define ull               unsigned long long
#define debug(x,y)       cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y<<endl

using namespace std;

int main(){


	char c;
	cin >> c;
	if(c == 'A') printf("6\n");
	else printf("4\n");
	
	return 0;
}
