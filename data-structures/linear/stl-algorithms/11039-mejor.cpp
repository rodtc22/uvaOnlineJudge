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

//USANDO SLINDING WINDOW
// TOMAR EL MAXIMO SUBSEGMENTO DONDE TENGA + - + - + - + ... O - + - + - ...

int main(){
	int cases,floors;
	int ar[N];
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&floors);
		//negative = red ,positive = blue
		for(int i= 0 ;i < floors; i++) scanf("%d",&ar[i]);

		sort(ar,ar+floors,[](int a, int b){return  abs(a)<abs(b);});

		int cont = 0;
		bool sw = (ar[0]>0);   //1:+  0:-
		for(int i = 0;i < floors ;i++){
			if(sw){
				if(ar[i]>0){
					cont++;
					sw = 0; //ahora empieza a buscar un negativo
				}
			}else{
				if(ar[i]<0){
					cont++;
					sw = 1; // ahora empieza a buscar un positivo
				}
			}
		}
		printf("%d\n",cont);
	}	
	return 0;
}