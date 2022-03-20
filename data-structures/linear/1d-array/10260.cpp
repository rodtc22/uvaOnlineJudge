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

int ar[30];

void init(){
	memset(ar,0,sizeof ar);
	ar[1]=ar[5]=ar[15]=ar[21]=1;
	ar[2]=ar[6]=ar[9]=ar[10]=ar[16]=ar[18]=ar[23]=ar[25]=2;
	ar[3]=ar[19]=3;
	ar[11]=4;
	ar[12]=ar[13]=5;
	ar[17]=6;
}

int main(){
	string s;
	init();
	while(cin>>s){
		int ant = 0;
		for(char c:s){
			int nro = ar[c-'A'];
			if(nro!=ant and nro !=0){
				cout<<nro;
			}
			ant = nro;
		}
		cout<<endl;
	}
	return 0;
}