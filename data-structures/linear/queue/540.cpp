#include <bits/stdc++.h>
using namespace std;

//trata de verlo como un dfs [0-1]   q={111,2222,3,44,...}

const int N = 1e6+6;

int main(){
	int nroteams;

	int contCaso = 0;

	while(cin>>nroteams,nroteams){
		vector<int> team(N,0);
		vector<int> inQueue(1001,0);
		vector<queue<int>> q (1001);
		queue <int> order;

		cout<<"Scenario #"<<(++contCaso)<<endl;


		for(int i= 1 ;i<= nroteams ;i++){
			int n,x; cin>>n;
			while(n--){
				cin>>x;
				team[x] = i;
			}
		}

		string op;
		int x;
		int nroInQueue = 0;

		while(cin>>op, op != "STOP"){
			if(op == "ENQUEUE"){
				cin>>x;
				int tea = team[x];
				if(inQueue[tea]==0){
					order.push(tea);
				}
				q[tea].push(x);
				inQueue[tea]++;
				nroInQueue++;
			}else{
				if(nroInQueue == 0) continue;
				int tea = order.front();
				inQueue[tea]--;

				if(inQueue[tea]==0){
					order.pop();
				}
				int val = q[tea].front();
				q[tea].pop();
				nroInQueue--;

				cout<<val<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}