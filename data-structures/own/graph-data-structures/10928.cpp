#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

//idea: saber contar la cantidad de vecinos por lugar
int main()
{
	int t; scanf("%d",&t);
	while(t--)
	{
		int places; scanf("%d",&places);
		
		vector<int> pla(places,0);
		string s,word; 
		stringstream ss;

		cin.ignore();
		for(int i= 0  ;i< places ;i++){
			getline(cin,s);
			ss.clear(); ss<<s;
			while(ss>>word){
				pla[i]++;
			}	
		}
		int mini = *min_element(ALL(pla));
		bool sw = 0;
		for(int i= 0 ;i< places ;i++){
			if(pla[i]==mini){
				if(sw) printf(" ");
				printf("%d",i+1);
				sw = 1;
			}
		}
		printf("\n");
	}
	return 0;
}