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

//UNA VEZ QUE TENGA TODAS LAS LETRAS, CON SUS ULTIMAS OCURRENCIAS
//TOMAMOS EL IZQ(MENOR DEL SET) Y DER(MAYOR DEL SET) PARA OBTENER
//EL INTERVALO

int main(){
	int t,n; 
	string s,word;
	vector<string> ar;
	set<string> dic;
	cin>>t; cin.get();

	for(int tt = 1; tt <= t ;tt++){
		ar.clear();
		dic.clear(); //diccionario para saber cuantas words hay
		int id = 0;
		while(getline(cin,s),s!="END"){
			s.push_back(' ');
			n= s.size();
			for(int i= 0 ;i<n ;i++){
				if('a'<=s[i] && s[i]<='z'){
					word.push_back(s[i]);
				}else{
					if(!word.empty()){
						dic.insert(word);
						ar.push_back(word);
						word.clear();
					}
				}
			}
		}
		
		n = ar.size();
		map<string,int> last_index;
		set<int> indices;

		int l = 0,r = oo;
		for(int i= 0 ;i< n;i++){
			if(last_index.find(ar[i]) != last_index.end()){
				int pos = last_index[ar[i]];
				indices.erase(pos);
			}
			last_index[ar[i]] = i;
			indices.insert(i);

			if(last_index.size()==dic.size()){//palabras completas
				int b = *(--indices.end());
				int a = *(indices.begin());
				
				if(b-a < r-l){
					r = b;
					l = a;
				}
			}
		}
		cout<<"Document "<<tt<<": "<<(++l)<<" "<<(++r)<<endl;
		
	}
	return 0;
}