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

// SUPONIENDO QUE SON COORDENADAS EN N-DIMENSION
// ENTONCES VARIAMOS EN 1 BIT, POR ESO XOR

int main(){
	int n; 
	while(scanf("%d",&n) != EOF){
		vector<int>ar(1<<n);
		for(int &d:ar) scanf("%d",&d);
		
		vector<int> weight(1<<n);
		for(int i= 0 ;i < (1<<n) ;i++){
			ll sum = 0;
			for(int j= n-1 ;j >= 0 ;j--){
				int pos = i ^ (1<<j);
				sum += (ar[pos]);
			}
			weight[i] = sum;
		}

		int ans = 0;
		for(int i= 0 ; i< (1<<n) ;i++){
			int a = weight[i],b = -1;
			for(int j= 0 ;j< n;j++){
				int pos = i ^ (1<<j);
				b = max(b,weight[pos]);
			}
			ans = max(ans,a+b);
		}
		printf("%d\n",ans);

	}
	return 0;	
}