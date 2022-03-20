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

//USANDO TWO POINTERS

int main(){
	int cases,floors;
	int ar[N];
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&floors);
		//negative = red ,positive = blue
		for(int i= 0 ;i < floors; i++) scanf("%d",&ar[i]);

		sort(ar,ar+floors);

		
		//answer starting using a red floor
		int a= 0, b = floors-1;
		int cont = 0;

		while(a<b && ar[a]<0){
			cont++;
			while(ar[b]>0 && ar[b] > -ar[a]) b--;
			if(ar[b]<0 || a>=b) break;

			cont++;
			while(ar[a]<0 && -ar[a] > ar[b]) a++;
			if(ar[a]>0 || a>=b) break;
		}

		//answer starting using a blue floor
		int cont2 = 0;
		a = 0, b = floors -1;

		while(a<b && ar[b]>0){
			cont2++;
			while(ar[a]<0 && -ar[a] > ar[b]) a++;
			if(ar[a]>0 || a>=b) break;

			cont2++;
			while(ar[b]>0 && ar[b] > -ar[a]) b--;
			if(ar[b]<0 || a>=b) break;
		}

		int ans = max(cont,cont2);
		printf("%d\n",ans);
	}	
	return 0;
}