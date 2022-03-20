#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 10004;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int cases;
	int problem[N];
	scanf("%d",&cases);
	for(int z = 1 ;z<=cases;z++){
		memset(problem,0,sizeof problem);
		int n,x;
		for(int i= 0 ;i<3; i++){
			scanf("%d",&n);
			while(n--){
				scanf("%d",&x);
				problem[x]+=(1<<i);
			}
		}
		int a = 0,b = 0,c = 0;
		for(int i= 0 ;i< N ;i++){
			if(problem[i]==1) a++;
			else if(problem[i]==2) b++;
			else if(problem[i]==4) c++;
		}
		int ans = max(a,max(b,c));
		printf("Case #%d:\n",z);
		if(a==ans){
			printf("1 %d",a);
			for(int i = 0 ;i<N;i++) if(problem[i]==1) printf(" %d",i);
				printf("\n");
		}
		if(b==ans){
			printf("2 %d",b);
			for(int i = 0 ;i<N;i++) if(problem[i]==2) printf(" %d",i);
				printf("\n");
		}
		if(c==ans){
			printf("3 %d",c);
			for(int i = 0 ;i<N;i++) if(problem[i]==4) printf(" %d",i);
				printf("\n");
		}
		// printf("a:%d b:%d c:%d\n",a,b,c);
		// for(int i= 0 ;i< 15 ;i++) cout<<problem[i]<<" ";cout<<endl;
	}
	return 0;
}