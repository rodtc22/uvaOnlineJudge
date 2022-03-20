#include <bits/stdc++.h>
using namespace std;

//-----------------------------------------------------------------
#define ALL(x) x.begin(),x.end()
typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
const int N = 2e5;
const ll oo = 1e16;
//-----------------------------------------------------------------

vector <bool> ar;

int ans = 0;
int f(int i, int j){
	if(i==j) return ar[i];

	int m  = (i+j)>>1;

	bool a = f(i,m);
	bool b = f(m+1,j);

	ans += (a^b);

	return  a | b;
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		ar.assign(1<<n,1);
		for(int i= 0; i < m; i++){
			int x; scanf("%d",&x);
			ar[x-1] = 0;
		}
		ans = 0;
		f(0,(1<<n)-1);
		printf("%d\n",ans);
	}
	return 0;
}