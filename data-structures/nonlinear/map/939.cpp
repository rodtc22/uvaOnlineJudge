#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

/*BASICAMENTE USAR LA IDEA DE UNION-FIND PERO SOLO CON 2 PADRES*/

typedef pair<string,string> ps;

map<string,string> gen;
map<string,ps> parent;

void unir_genes(string x,string g) {
	if(gen[x] == ""){
		gen[x] = g;	
	}else{
		if((gen[x] == "dominant" && g == "dominant") ||
			(gen[x] == "recessive" && g == "dominant") ||
			(gen[x] == "dominant" && g == "recessive") ){
			gen[x] = "dominant";
		}else if((gen[x] == "recessive" && g == "recessive") ||
			(gen[x] == "non-existent" && g == "dominant") ||
			(gen[x] == "dominant" && g == "non-existent") ){
			gen[x] = "recessive";
		}else{
			gen[x] = "non-existent";
		}
	}
}

void buscar(string y){ //buscar el gen de y

	// if(gen[y]!="") return ;

	string x = y;
	string px = parent[x].first;
	string mx = parent[x].second;

	if(gen[px] == "") buscar(px);
	if(gen[mx] == "") buscar(mx);

	gen[x] = "";
	unir_genes(x,gen[px]);
	unir_genes(x,gen[mx]);
}

int main(){
	int n;
	cin>>n;
	string a,b;
	
	while(n--){
		cin>>a>>b;
		if(b == "dominant" || b == "recessive" || b == "non-existent"){
			gen[a] = b;
		}else{
			if(parent[b].first == "") parent[b].first = a;
			parent[b].second = a;
		}
	}

	// for(auto a: parent){
	// 	cout<<a.first<<" ["<<a.second.first<<", "<<a.second.second<<"]\n";
	// }

	for(auto a: parent){

		// if(gen[a.first] != "") continue;

		string x = a.first;
		string px = a.second.first;
		string mx = a.second.second;

		if(gen[px] == "") buscar(px);
		if(gen[mx] == "") buscar(mx);

		gen[x] = "";
		unir_genes(x,gen[px]);
		unir_genes(x,gen[mx]);
	}


	for(auto a:gen) cout<<a.first<<" "<<a.second<<endl;
	return 0;
}