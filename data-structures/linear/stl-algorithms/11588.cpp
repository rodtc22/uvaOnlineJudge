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

int main(){
	int t,cases;
	scanf("%d",&cases);
	for(int t = 1; t<=cases ; t++){
		int oc[26]={};
		int n,m,a,b;
		char x;
		scanf("%d %d %d %d",&n,&m,&a,&b);

		for(int i= 0 ;i <n ;i++){
			getchar();
			for(int j= 0 ;j <m ;j++){
				scanf("%c",&x);
				oc[x-'A']++;
			}
		}

		int maxi = 0;
		for(int i= 0 ;i< 26 ;i++)
			maxi = (oc[maxi]<oc[i])? i : maxi;

		int cont = 0, cont2 = 0;
		for(int i= 0 ;i < 26;i++){
			if((oc[maxi] == oc[i])) cont += oc[i];
			else cont2 += oc[i];
		}

		int ans = cont2*b + cont*a;
		printf("Case %d: %d\n",t,ans);
	}
	return 0;
}