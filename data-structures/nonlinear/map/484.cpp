#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	//unordered map no sirve por que le pone en cualquier orden
	map<int,int> ha;
	vector<int> order;
	int x;

	while(scanf("%d",&x)==1){
		order.push_back(x);
		ha[x]++;
	}

	for(int x: order){
		if(ha[x]>0)
			printf("%d %d\n",x,ha[x]);
		ha[x] = 0; //ya fue tomado en cuenta
	}
	return 0;
}