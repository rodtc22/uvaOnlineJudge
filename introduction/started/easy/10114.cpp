#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define	print(x)	{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define	index(n)	{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define	all(x)	x.begin(),x.end() 
typedef	long long 		ll;
typedef	pair<int,char>	ii;
const		int 	N = 502;
const		int 	M = 1e9+7;
//-------------------------------------------------------------------


int main(){
	int m,n;
	double pay,cost;
	while(scanf("%d %lf %lf %d",&m,&pay,&cost,&n),m>=0){
		double per[200]={};
		int x;
		while(n--){
			scanf("%d",&x);
			scanf("%lf",&per[x]);
		}
		for(int i = 1; i<=100;i++)
			if(per[i]==0)
				per[i] = per[i-1];
		int i = 0;
		double car = pay+cost; 
		double pay2 = cost/m;
		double ini = cost;
		double total = 0.0;
		for(i = 0;i<=m ;i++){
			car = car*(1-per[i]);
			// printf("%lf %lf\n",ini-total,car);
			if(car>	ini-total) break;
			total += pay2;
		}
		// for(int i= 0 ;i<=m ;i++) printf("%d %lf\n",i,per[i]);
		printf("%d %s\n",i,(i==1)?"month":"months");
	}
	return 0;	
}