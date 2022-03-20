#include <bits/stdc++.h>
using namespace std;

int main(){
	int casos,t,m,x;
	string dir;
	cin>>casos;
	for(int ii = 0 ;ii < casos ;ii++){
		cin>>t>>m;
		t = t * 100;

		queue<int> izq,der;
		for(int i= 0 ;i< m ;i++){
			cin>>x>>dir;
			if(dir == "left") izq.push(x);
			else der.push(x);
		}

		int cross = 0;
		bool sw = 1; //1: izq 0:der
		while(!izq.empty() || !der.empty()){
			int len = 0;
			if(sw){
				while(izq.size() && len+izq.front() <= t){
					len += izq.front();
					izq.pop();
				}
				if(len>0 || der.size()){
					cross++;
					sw = !sw;
				}
			}else{
				while(der.size() && len+der.front() <= t){
					len += der.front();
					der.pop();
				}
				if(len>0 || izq.size()){
					cross++;
					sw = !sw;
				}
			}
		}
		cout<<cross<<endl;
	}
	return 0;
}