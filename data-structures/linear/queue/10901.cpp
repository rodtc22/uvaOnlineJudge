#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int main(){
	int casos;
	cin>>casos;

	string dir;
	queue<pi> izq,der;
	vector<int> ans;

	for(int ca = 0 ; ca < casos ;ca++){
		if(ca>0) cout<<"\n";
		int n,t,m,x;
		cin>>n>>t>>m;
		ans.resize(m);

		for(int i= 0 ;i< m ;i++){
			cin>>x>>dir;
			if(dir == "left") izq.push({x,i});
			else der.push({x,i});
		}
		int ti=0;
		bool sw = 1; //1:izq 0:der
		while(der.size() || izq.size()){
			int cnt = 0;
			if(sw){
				while(izq.size() && cnt < n){
					if(izq.front().first <= ti){
						int pos = izq.front().second;
						izq.pop();
						ans[pos] = ti + t;
						cnt++;
					}else{
						break;
					}
				}
				if(cnt > 0){
					ti += t;
					sw = !sw;
				}else{
					if(izq.size()){
						if(der.size()){
							if(izq.front().first <= der.front().first){
								if(izq.front().first > ti)
									ti += (izq.front().first - ti);
							}else{
								if(der.front().first > ti)
									ti += (der.front().first - ti);
								ti += t;
								sw = !sw;
							}
							
						}else{
							if(izq.front().first > ti)
								ti += (izq.front().first - ti);
						}
					}else{
						if(der.size()){
							if(der.front().first > ti)
								ti += (der.front().first - ti);
							ti += t;
							sw = !sw;
						}
					}
				}
			}else{
				while(der.size() && cnt < n){
					if(der.front().first <= ti){
						int pos = der.front().second;
						der.pop();
						ans[pos] = ti + t;
						cnt++;
					}else{
						break;
					}
				}
				if(cnt > 0){
					ti += t;
					sw = !sw;
				}else{
					if(der.size()){
						if(izq.size()){
							if(der.front().first <= izq.front().first){
								if(der.front().first > ti)
									ti += (der.front().first - ti);
							}else{
								if(izq.front().first > ti)
									ti += (izq.front().first - ti);
								ti += t;
								sw = !sw;
							}
							
						}else{
							if(der.front().first > ti)
								ti += (der.front().first - ti);
						}
					}else{
						if(izq.size()){
							if(izq.front().first > ti)
								ti += (izq.front().first - ti);
							ti += t;
							sw = !sw;
						}
					}
				}
			}
			
		}
		for(auto d: ans) cout<<d<<endl;
	}
	return 0;
}
