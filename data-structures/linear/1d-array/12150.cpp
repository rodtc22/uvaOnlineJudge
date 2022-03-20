#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1003;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------
//1 seg

int car[N];

int main(){
	int n,nro,pos;
	while(scanf("%d",&n)==1 , n){
		memset(car,-1,sizeof car);
		bool sw = 1;
		for(int i= 0 ;i< n;i++){
			scanf("%d %d",&nro,&pos);
			if(i+pos>=n or i+pos <0) {
				sw = 0;
			}else{
				if(car[i+pos]!=-1) sw = 0;
				else car[i+pos] = nro;
			}
		}
		if(sw){
			for(int i= 0 ;i< n;i++){
				if(i>0) printf(" ");
				printf("%d",car[i]);
			}
			printf("\n");
		}else{
			printf("-1\n");
		}
	}		
	return 0;
}