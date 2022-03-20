#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

bool cmp(vector<string> &a, vector<string> &b){
	return a[2]<b[2];
}

//lo hare asi por que recordemos que 
//siempre abra una linea blanca
//despues de cada caso, 
//no tomaremos como muestra en el ejermplo
int main(){
	int t;
	string s;
	vector<vector<string>> ar;
	cin>>t;
	cin.ignore();

	while(t--){
		string title,person;
		stringstream ss;string word;
		getline(cin,title);

		while(getline(cin,person),!person.empty()){
			ss.clear();ss<<person;
			ar.push_back(vector<string>(8));
			ar.back()[4]=title;

			int i= 0;
			while(getline(ss,word,',')){
				if(i==4) i++;
				ar.back()[i++] = word;
			}
		}

	}
	sort(ar.begin(),ar.end(),cmp);

	for(auto d:ar){
		cout<<"----------------------------------------\n";
		cout<<d[0]<<" "<<d[1]<<" "<<d[2]<<endl;
		cout<<d[3]<<endl;
		cout<<"Department: "<<d[4]<<endl;
		cout<<"Home Phone: "<<d[5]<<endl;
		cout<<"Work Phone: "<<d[6]<<endl;
		cout<<"Campus Box: "<<d[7]<<endl;
	}
	return 0;
}