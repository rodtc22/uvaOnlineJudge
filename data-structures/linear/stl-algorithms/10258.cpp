#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

struct conte{
	int nro_team,nro_solved;
	bool active;
	int penalty[10];
	bool solved[10];
	int total;

	conte(){
		nro_team = 0,nro_solved = 0;
		active = false;
		for(int i= 0 ;i<10 ;i++) 
			penalty[i] = 0,solved[i] = false;
		total = 0;
	}

	void mostrar(){
		cout<<nro_team<<" "<<active<<" "<<nro_solved<<endl;
		for(int i= 1 ;i<=9 ;i++) cout<<solved[i]<<" ";cout<<endl;
		for(int i= 1 ;i<=9 ;i++) cout<<penalty[i]<<" ";cout<<endl;
	}

	void generaTotal(){
		for(int i = 1 ;i<=9 ;i++)
			total += (solved[i]*penalty[i]);
	}

	bool operator < (conte a) const{
		if(nro_solved != a.nro_solved) return nro_solved > a.nro_solved;
		if(total != a.total) return total < a.total;
		return nro_team < a.nro_team;
	}
};

int main(){
	int t;
	stringstream ss;
	string s;
	int contestant,problem,time;
	char veredict;
	
	cin>>t;
	cin.ignore();
	getline(cin,s);


	for(int i= 0 ;i<t ;i++){
		//vector de contestants

		conte c[101] ={};

		while(getline(cin,s),s!=""){
			ss.clear();
			ss<<s;
			ss>>contestant>>problem>>time>>veredict;


			c[contestant].active = true;
			c[contestant].nro_team = contestant;

			if(veredict == 'C') {
				if(c[contestant].solved[problem]) continue; // si ese problema ya fue resuelto entonces salte

				c[contestant].solved[problem] = true;
				c[contestant].nro_solved++;
				c[contestant].penalty[problem] += time;
			}
			else if(veredict == 'I'){
				if(c[contestant].solved[problem]) continue; // si ese problema ya fue resuelto entonces salte
				c[contestant].penalty[problem] += 20;
			} 
		}
		
		vector<conte> ans;
		for(int i= 0 ;i< 101; i++)
			if(c[i].active){
				c[i].generaTotal();
				ans.push_back(c[i]);
			}

		sort(ans.begin(),ans.end());

		if(i>0) cout<<endl;
		for(auto a:ans){
			cout<<a.nro_team<<" "<<a.nro_solved<<" "<<a.total<<endl;
		}
	}
	return 0;
}