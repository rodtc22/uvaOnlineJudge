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

int main(){
	int a,b;
	cin>>a>>b;
	string name[20];
	int base_address[20];
	int size_bytes[20];
	int nro_dimensions[20];
	int L[20][20],R[20][20];
	for(int i= 1 ;i<= a; i++){
		cin>>name[i];
		cin>>base_address[i];
		cin>>size_bytes[i];
		cin>>nro_dimensions[i];
		for(int j = 1 ;j <= nro_dimensions[i];j++){
			cin>>L[i][j]>>R[i][j];
		}
		// cout<<name[i]<<endl; for(int j = 0 ;j < nro_dimensions[i];j++){cout<<L[j]<<" "<<R[j]<<endl; } cout<<endl;
	}
	string s,data;
	stringstream ss;
	string word;
	vector<int>ar;
	while(b--){
		///entrada de los datos
		cin>>s;
		getline(cin,data);
		ss.clear(); ar.clear();
		ss<<data;
		ar.push_back(0);
		while(ss>>word)
			ar.push_back(atoi(word.data()));
		///solucion
		int ans = 0;
		//primero tenemos que encontrar de que array es:
		int arr =0;
		for(int j= 1 ;j<= a;j++){
			arr = j;
			if(name[j]==s) break;
		}
		//luego genero el array C[0],C[1],..C[D]
		//empezando desde D ,d-1,d-2,...,0
		vector<int> C(ar.size(),0);
		int d= ar.size()-1;
		C[d] = size_bytes[arr];
		while(--d>0){
			C[d] = C[d+1]*(R[arr][d+1]-L[arr][d+1]+1);
		}
		C[0] = base_address[arr];
		for(int i= 1 ;i<C.size();i++)
			C[0]-= (C[i]*L[arr][i]);
		
		//ahora genero la respuesta
		ans  = C[0];
		for(int i=1 ;i<C.size();i++){
			ans+=(C[i]*ar[i]);
		}

		/// salida de los datos
		cout<<s<<"["<<ar[1]; for(int i= 2;i<ar.size();i++) cout<<", "<<ar[i]; cout<<"] = "<<ans<<endl;

	}
	return  0;
}