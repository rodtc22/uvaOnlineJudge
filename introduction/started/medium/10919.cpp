#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<", ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<string,int>	si;
const		int 			N = 202;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int courses,cat;
int ar[N];

bool f(int nro){
	for(int i= 0 ;i<courses;i++)
		if(ar[i]==nro)
			return true;
	return false;
}

int main(){
	while(scanf("%d",&courses)==1, courses){
		scanf("%d",&cat);
		for(int i= 0 ;i<courses; i++) scanf("%d",&ar[i]);
		bool sw = 1;
		while(cat--){
			int cnt,mini,nro,ok = 0;
			scanf("%d %d",&cnt,&mini);
			while(cnt--){
				scanf("%d",&nro);
				ok+=f(nro);
			}
			sw &= (ok>=mini) ;
		}
		printf("%s\n",sw?"yes":"no");
	}
	return 0;
}