#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 100005;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------
//1 seg

int main(){
	int soldiers, bombs;
	int a,b;
	int izq[N],der[N];
	while(scanf("%d %d",&soldiers,&bombs)==2 , (soldiers or bombs)){
		for(int i=1 ;i<=soldiers;i++) 
			izq[i]=i-1,der[i]= i+1;
		//para denotar que son asteriscos 
		izq[0]=der[0]=izq[soldiers+1]=der[soldiers+1]=izq[1]=der[soldiers]=-1;
		
		while(bombs--){
			scanf("%d %d",&a,&b);
			if(izq[a]<0) printf("* ");
			else printf("%d ",izq[a]);

			if(der[b]<0) printf("*\n");
			else printf("%d\n",der[b]);

			int l = izq[a],r = der[b];
			der[l] = r;
			izq[r] = l;
		}

		printf("-\n");
	}
	return 0;
}