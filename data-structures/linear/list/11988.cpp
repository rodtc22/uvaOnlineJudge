#include <bits/stdc++.h>
using namespace std;

//-----------------------------------------------------------------
#define ALL(x) x.begin(),x.end()
typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
const int N = 2e5;
const ll oo = 1e16;
//-----------------------------------------------------------------

// list == deque

int main(){
	string s;
	while(cin>>s){
		string sw = "home"; //end;
		string pal = "";
		
		list<string> li;
		s.push_back(']');
	
		for(char c : s){
			if(c == ']'){
				if(sw == "home") li.push_front(pal);
				else li.push_back(pal);

				sw  = "end";
				pal.clear();
			}else if(c == '['){
				if(sw == "home") li.push_front(pal);
				else li.push_back(pal);

				sw  = "home";
				pal.clear();
			}else{
				pal.push_back(c);
			}
		}

		for(auto d: li) cout<<d;
		cout<<endl;
	}
	return 0;
}