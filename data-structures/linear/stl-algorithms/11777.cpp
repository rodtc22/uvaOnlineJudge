#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 5e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

// THIS TIME WE WILL USE TEMPLATES ^-^

template <typename T, typename... Args> T MAX(T a){return a;}
template <typename T, typename... Args> T MAX(T a, Args... args) {return max(a,MAX(args...));}

template<typename T, typename... Args> T MIN(T a) {return a;}
template<typename T, typename... Args> T MIN(T a, Args... args) {return min(a,MIN(args...));}

int main(){
	int t;
	scanf("%d",&t);
	for(int i= 1 ;i<= t ;i++){
		int ac = 0;
		int x,a,b,c;
		scanf("%d %d %d %d",&x,&a,&b,&c);
		ac = x+a+b+c;
		scanf("%d %d %d",&a,&b,&c);
		int sum = a+b+c;
		int mini = MIN(a,b,c);
		int maxi = MAX(a,b,c);
		int med = sum - maxi - mini;
		ac += ((maxi+med)>>1);
		
		printf("Case %d: ",i);

		if(ac >= 90) printf("A\n");
		else if(ac >= 80) printf("B\n");
		else if(ac >= 70) printf("C\n");
		else if(ac >= 60) printf("D\n");
		else printf("F\n");

	}
	return 0;
}