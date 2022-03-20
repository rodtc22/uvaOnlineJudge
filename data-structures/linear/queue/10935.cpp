#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	queue<int> deck;
	vector<int> discard;
	while(scanf("%d",&n),n){
		//en este momento la cola siempre estara vacia
		discard.clear();
		for(int i=1 ;i<=n ;i++) 
			deck.push(i);

		while(deck.size()>1){
			int f = deck.front(); deck.pop();
			discard.push_back(f);

			f = deck.front();
			deck.pop();
			deck.push(f);
		}
		
		printf("Discarded cards:");
		for(int i= 0 ;i< n-1;i++){
			if(i>0) printf(",");
			printf(" %d",discard[i]);
		}
		printf("\nRemaining card: %d\n",deck.front());
		deck.pop();
	}
}	