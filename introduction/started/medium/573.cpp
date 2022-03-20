#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<string,int>	si;
const		int 			N = 2e5;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	double height,up,down,fatigue;
	int day;
	while(scanf("%lf%lf%lf%lf",&height,&up,&down,&fatigue)==4,height){
		double cur = 0;
		double minus = up * fatigue/100;
		day = 0;
		while(cur<=height and cur>=0){
			day++;
			// printf("day: %d -> cur: %lf up: %.10lf maxi: %lf fin:%lf\n",day,cur,up,cur+up,cur+up-down);
			if(up>0)cur+=up;
			if(cur>height) break;
			cur -= down;
			up-=minus;
			
		}
		printf("%s on day %d\n",(cur>height)?"success":"failure",day);
	}
	return 0;
}