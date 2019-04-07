#include<bits/stdc++.h>
#define read() freopen("C:\\Users\\Mehedi\\Desktop\\input.txt","r",stdin)
#define write() freopen("C:\\Users\\Mehedi\\Desktop\\output.txt","w",stdout)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<" "<<#z <<" = "<<z<<endl;
#define optimizar ios_base::sync_with_stdio(0); cin.tie(0)
#define mx 50005
#define mod  100000007
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
void File_IO () {
  #ifndef ONLINE_JUDGE
  read();write();
  #endif
}
using namespace std;
typedef long long ll;
int main(){
	File_IO();
	int t;
	cin>>t;
	for(int ts = 1;ts<=t;ts++){
		int n;
		cin>>n;
		map<char,int> mp;
		for(int i = 0;i<n;i++){
			string line;
			cin>>line;
			for(int  i = 0;i<line.size();i++){
				mp[line[i]]=1;
			}
		}
		cout<<"Case "<<ts<<": "<<mp.size()<<endl;
	}
	
}
