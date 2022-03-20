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

int main(){
	int x;
	while(scanf("%d",&x) == 1){
		bitset <32> aa;
		aa = x;
		
		string bin = (aa.to_string());
		string a = bin.substr(0,8);
		string b = bin.substr(8,8);
		string c = bin.substr(16,8);
		string d = bin.substr(24,8);

		string t= d+c+b+a;
		bitset<32> bb(t);
		int val = bb.to_ullong();

		cout<<x<<" converts to "<<val<<endl;
	}
	return 0;
}

